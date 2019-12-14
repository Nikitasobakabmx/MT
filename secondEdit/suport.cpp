#include "string.h"
#include "stdlib.h"
#include "sheet.h"
#include <string>
#include <vector>
#include <sstream>
#include <iostream> 

std::string makeErrorMsg(
    std::string program,
    int line, 
    std::string type,
    std::string str)
{
    std::stringstream ss;
    ss  << program 
        << " : " << line << ":" 
        << " \'" << str << "\' " 
        <<  type << "\n";
    std::string* retVal = new std::string(ss.str());
    return *retVal;
}

char* deepCopy(char* stringa)
{
    char* tmp = (char*)malloc(strlen(stringa) + 1);
    strcpy(tmp, stringa);
    return tmp;
}

struct sheet* deepCopy(struct sheet *item)
{
    if(item == NULL)
        return NULL;
    struct sheet* tmp = new sheet();
    if(item->line != NULL)
        tmp->line = deepCopy(item->line);
    // if(item->retype != NULL)
    //     tmp->retype = new int(*(item->retype));
    tmp->length = item->length;
    tmp->type = item->type;
    if(item->next != NULL)
        tmp->next = deepCopy(item->next);
    return tmp;
}

std::vector<params>* to_vector(struct sheet* item)
{
    std::vector<params>* tmp = new std::vector<params>();
    while(item != NULL)
    {
        params xTmp;
        xTmp.name = *(new std::string(item->line));
        xTmp.type = item->type;
        item = item-> next;
    }
    return tmp;

}

std::string* complete_str(struct sheet* item)
{
    std::stringstream ss;
    while(item != NULL)
    {
        ss << item->line;
        item = item->next;
    }
    return (new std::string(ss.str()));
}