
#include "test.hpp"


using namespace std;
    
thread_local int g_num = 6;
int g_num_not;

int read_it(int x) {
    return g_num + x;
}

int read_it_not(int x) {
    return g_num_not + x;
}

void New_CPP_Test::deffer_async_test()
{
    g_num = 100;
    g_num_not = 100;

    int arg = 1;
    // deferred starts the thread from base and initialize thread_local values to 0.
    // deferred runs in this thread but async starts a new thread
    future<int> fut = async(launch::deferred, read_it, arg);
    arg = 2;
    future<int> fut2 = async(launch::async, read_it, arg);
    
    arg = 1;
    
    future<int> fut3 = async(launch::deferred, read_it_not, arg);
    arg = 2;
    future<int> fut4 = async(launch::async, read_it_not, arg);

    cout << "Defer: " << fut.get() << endl;
    cout << "Async: " << fut2.get() << endl;
    cout << "Defer no thread_local: " << fut3.get() << endl;
    cout << "Async no thread_local: " << fut4.get() << endl;

}