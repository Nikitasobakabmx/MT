#pragma once
#include <string>
#include <vector>


class params
{
public:
    std::string name;
    int type;
};

class contain
{
public:
    int reType = 0;
    std::vector<params> *values = NULL;
};

std::string makeErrorMsg(
    std::string program,
    int line, 
    std::string type,
    std::string str);
char* deepCopy(char* stringa);
struct sheet* deepCopy(struct sheet* item);
std::vector<params>* to_vector(struct sheet* item);