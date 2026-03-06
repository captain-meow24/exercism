#include "protein_translation.h"

namespace protein_translation {

// TODO: add your solution here
    std::vector<std::string> proteins (std::string str){
        std::string protein;
        std::vector<std::string> result;
        int flag = 0;
        int pspsps = str.length();
        for(int j=0; j< pspsps ; j++){
            for(int i=flag ; i<flag + 3; i++){
                protein += str[i];
            }
            flag = flag+3;
            if(protein == "AUG"){
             result.push_back("Methionine");
            }
            if(protein == "UUU" || protein =="UUC"){
                result.push_back("Phenylalanine");
            }
            if(protein == "UUA" || protein =="UUG"){
                result.push_back("Leucine");
            }
            if(protein == "UCU" || protein =="UCC" || protein =="UCA" || protein =="UCG"){
                result.push_back("Serine");
            }
            if(protein == "UAU" || protein =="UAC"){
             result.push_back("Tyrosine");
            }
            if(protein == "UGU" || protein =="UGC"){
                result.push_back("Cysteine");
            }
            if(protein == "UGG"){
                result.push_back("Tryptophan");
            }
        char a = protein[protein.length() -3];
        char b = protein[protein.length() -2];
        char c = protein[protein.length() - 1];
        std::string A = "";
        A += a;
        A+= b;
        A+= c;
        if(A== "UAA" || A== "UAG" || A=="UGA"){
            break;
        }
            protein="";
            
    }
    return result;
}


}  // namespace protein_translation

