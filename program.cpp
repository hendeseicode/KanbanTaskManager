#include <iostream>
#include "task.h"

int main(int argc , char ** argv){
    std::cout<<"Hello World"<<std::endl;

    Task *t = new Task();
    t->setTaskCount(10);

    std::cout<<"Task Count : "<<t->getTaskCount()<<std::endl;
}