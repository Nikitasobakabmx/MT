#include "suport.h"
#include <iostream>

struct sheet
{   
public:
    char* line = NULL;
    int length;
    int type = 0;
    int *retype = NULL;
    sheet *next = NULL;
    sheet(){};
};
