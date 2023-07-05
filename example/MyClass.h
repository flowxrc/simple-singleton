#include "../include/singleton.h"
#include <iostream>

class MyClass : public Singleton<MyClass> {
    void MyFunction();
}