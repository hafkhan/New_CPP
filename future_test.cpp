
#include "test.hpp"

using namespace std;

// A simple function that returns some integer value
int returnTwo() {
   std::this_thread::sleep_for(std::chrono::milliseconds(5000));
   return 2;
}

void New_CPP_Test::future_test()
{
   // creating a future object and a thread that executes
   // the function return two asynchronously
   future<int> f = async(launch::async, returnTwo);

   cout << "Hellooooooo!!!!" << endl;
   // getting and printing the result
   cout << f.get() << std::endl;
}
