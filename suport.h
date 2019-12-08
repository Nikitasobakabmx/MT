#pragma once
#include <string>

std::string* makeErrorMsg(
    std::string* program,
    int line, 
    std::string type,
    std::string* str);