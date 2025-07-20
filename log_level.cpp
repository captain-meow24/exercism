#include <iostream>
#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int p= line.find(":");
    return line.substr(p+2);
}

std::string log_level(std::string line) {
    // return the log level
    int p = line.find("[");
    int q= line.find("]");
    
    return line.substr(p+1,q-1);
}

std::string reformat(std::string line) {
    // return the reformatted message
    int p=line.find(":");
    int a=line.find("[");
    int b=line.find("]");
    std::string mess=line.substr(p+2);
    std::string lev=line.substr(a+1,b-a-1);
   std::string result = mess + " (" + lev +")";
    return result;
}
}
