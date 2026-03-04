#include "nth_prime.h"
#include <stdexcept>

namespace nth_prime {

// TODO: add your solution here
    int nth(int n){
        if(n == 0){
        throw std::domain_error("n must be positive");
    }
        int num=3;
        int prime_count = 1;
        int flag = 0;
        int current_prime = 2;
        if(n==1){
            return 2;
        }
        if(n==2){
            return 3;
        }
        while(prime_count <= n){
            for(int i=2; i<num/2;i++){
                if(num % i==0){
                    flag=1;
                    break;
                }
            }
            if(flag == 0){
                current_prime = num;
                prime_count ++;
            }
            flag=0;
            num ++;
        }
        return current_prime;
    }
}  // namespace nth_prime

