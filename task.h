#ifndef task_h
#define task_h

class Task{
    public:
        Task();
        int getTaskCount();
        void setTaskCount(int taskCount);
    private: 
        int taskCount;
};

#endif