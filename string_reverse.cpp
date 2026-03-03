#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string a){
        int x = a.length();
        std::string newstr;
        for(int i = 0; i < x; i++){
            char back = a[a.length() - i - 1];
            newstr += back;
        }
        return newstr;
    }
}  // namespace reverse_string

