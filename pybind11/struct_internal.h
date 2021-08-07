#ifndef __STRUCT__INTERNAL__H__
#define __STRUCT__INTERNAL__H__

#include <string>

typedef struct {
    int age;
    std::string name;
}Data;

void show_data();
void set_age(int age);

#endif