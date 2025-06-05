

//
//  test.hpp
//  test
//
//  Created by Hajar Falahati on 5/30/25.
//

#ifndef test_hpp
#define test_hpp

#include <thread>
#include <mutex>
#include <type_traits>
#include <chrono>
#include <future>
#include <iostream>


class New_CPP_Test{
    public:
    void deffer_async_test();
    void forward_test();
    void volatile_mutex_test();
    void remove_cv_test();
    void future_test();
};

#endif /* test_hpp */
