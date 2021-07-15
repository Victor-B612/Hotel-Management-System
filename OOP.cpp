#include <iostream>
#include <time.h>
#include "ObjectCounter.h"

void callObject1(objectCounter*);
void callObject2(objectCounter&);
void callObject3(objectCounter);

//lalalala

int main()
{
    srand(time(NULL));
    std::cout << std::fixed;
    objectCounter obj1(100);
    callObject1(&obj1);
    callObject2(obj1);
    callObject3(obj1);
    system("pause>0");
    return 0;
}

void callObject1(objectCounter* obj) {
    obj->printAttributes();
}

void callObject2(objectCounter& obj) {
    obj.printAttributes();
}

void callObject3(objectCounter obj) {
    obj.printAttributes();
}
