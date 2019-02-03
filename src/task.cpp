#include<iostream>
#include "task.h"

Task::Task(){

}

int Task::getTaskCount(){
    return Task::taskCount;
}

void Task::setTaskCount(int taskCount){
    Task::taskCount = taskCount;
}

Task::~Task(){
    std::cout<<"tasks destructer"<<std::endl;
}