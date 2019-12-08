#include <string>
#include <sstream> 

std::string* makeErrorMsg(
    std::string* program,
    int line, 
    std::string type,
    std::string* str)
{
    std::stringstream ss;
    ss  << *program 
        << " : " << line << ":" 
        << " \'" << *str << "\' " 
        <<  type << "\n";
    std::string* retVal = new std::string(ss.str());
    return retVal;
}