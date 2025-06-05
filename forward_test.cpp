#include "test.hpp"

using namespace std;

// Function that takes lvalue reference
void UtiltyFun(int& i) {
   cout << "Process lvalue: " << i << endl;
}

// Overload of above function but it takes rvalue reference
void UtiltyFun(int&& i) {
   cout << "Process rvlaue: " << i << endl;
}

// Template function for forwarding arguments to utlityFun()
template <typename T>
void Fun(T&& arg) {
   UtiltyFun(forward<T>(arg));
}

void New_CPP_Test::forward_test()
{
   int x = 10;

     // Passing lvalue
   Fun(x);

     // Passing rvalue
   Fun(std::forward<int>(x));
}


