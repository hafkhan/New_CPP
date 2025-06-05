#include "test.hpp"

using namespace std;

int main()
{
    New_CPP_Test myObj;
    myObj.remove_cv_test();
    myObj.volatile_mutex_test();
    myObj.forward_test();
    myObj.deffer_async_test();
    myObj.future_test();
    return 0;
}