#ifndef THREADPOOLH
#define THREADPOOLH

#include<iostream>
#include<thread.h>

#include<exception>



template <typename T>
class ThreadPool{

private:
    int m_alive;  //当前线程数
    int m_max;    //最大线程数
    int m_min;    //最小线程数
    pthread_t *m_thread;
    pthread_mutex_t threadlock;     //线程锁(增删线程)

    void* worker(void* args);










};








#endif