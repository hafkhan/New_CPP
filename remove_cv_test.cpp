//
//  test.cpp
//  test
//
//  Created by Hajar Falahati on 5/30/25.
//

#include "test.hpp"

using namespace std;

void New_CPP_Test::remove_cv_test()
{

   // Declare variable of type int, const
   // int, volatile int and const volatile int
   typedef remove_cv<int>::type A;
   typedef remove_cv<const int>::type B;
   typedef remove_cv<volatile int>::type C;
   typedef remove_cv<const volatile int&>::type D;

   //cout << "boolalpha : "<< boolalpha << "\n";

   cout << "A: "
        << is_same<const volatile int, A>::value
        << endl;

   cout << "B: "
        << is_same<const volatile int, B>::value
        << endl;

   cout << "C: "
        << is_same<int, C>::value
        << endl;

   cout << "D: "
        << is_same<int, D>::value
        << endl;
}

