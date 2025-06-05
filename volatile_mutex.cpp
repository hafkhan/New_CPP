#include "test.hpp"

using namespace std;
// Mutex for synchronization
mutex mtx;
mutex mtx2;

volatile int volatile_value = 0;
int no_vol_val = 0;

// Function to increment the volatile variable
void inc_value()
{
   for (int i = 0; i < 10; i++) {
       mtx.lock(); // Lock the mutex before accessing
                   // volatile_value
       volatile_value++;
       mtx.unlock(); // Unlock the mutex after modifying
                     // volatile_value
   }
}

void inc_val_no_vol()
{
   for (int i = 0; i < 10; i++) {
       mtx2.lock(); // Lock the mutex before accessing
                   // volatile_value
       no_vol_val++;
       mtx2.unlock(); // Unlock the mutex after modifying
                     // volatile_value
   }
}

void New_CPP_Test::volatile_mutex_test()
{
   // Create two threads to increment volatile_value
   thread t1(inc_value);
   thread t2(inc_value);

   // Wait for both threads to finish
   t1.join();
   t2.join();

   thread t3(inc_val_no_vol);
   thread t4(inc_val_no_vol);
   t3.join();
   t4.join();

   // Output the final value of volatile_value
   cout << "Final value of volatile_value: " << volatile_value << endl;
   cout << "Final value of no_vol_value:   " << no_vol_val << endl;
}