#include <iostream>
#include "task.h"

int main(int argc , char ** argv){
    
    // this line calls constructer method of Task class hierarchically
    // also calls initial value and returns starting address too
    Task* mTask = new Task();
    mTask->setTaskCount(10);

    std::cout<<"Task Count : "<<mTask->getTaskCount()<<std::endl;

    delete mTask;
    std::cin.get();

    
    // diversity of new operator and malloc function

    // malloc functions dont call constructer of Task
    // just allocation size of parameter from heap field
    // and returns starting address of the memory area
    // returns void * type and we should convert a known type
    // what is keeping in this memory area? Task
    // Task* task = (Task*)malloc(sizeof(Task));
     
    // delete frees allocated memory space
    // and calls destructer methods of instance
    
}