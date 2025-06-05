# 📘 C++ Feature Experiments

This project is a personal playground for testing and understanding various C++ features, particularly from modern C++ standards (C++11 and beyond). Each file demonstrates and experiments with a specific feature or concept in C++.

---

## 🔧 Build Instructions

You can compile all `.cpp` files using `cl.exe` (MSVC):

```sh
cl /EHsc /std:c++20 *.cpp
```

Or using `g++` (Linux/macOS):

```sh
g++ -std=c++20 *.cpp -o cpp_test
```

---

## 📂 File Overview

| File                   | Description                                                                 |
|------------------------|-----------------------------------------------------------------------------|
| `main.cpp`             | Entry point; calls all feature test functions.                              |
| `test.hpp`             | Class declaration `New_CPP_Test`, grouping test methods.                    |
| `deffer_async_test.cpp`| Demonstrates `std::async` with `launch::deferred` and `thread_local` usage. |
| `forward_test.cpp`     | Shows how `std::forward` handles lvalues and rvalues.                       |
| `volatile_mutex.cpp`   | Compares `volatile` with synchronization using `std::mutex`.                |
| `remove_cv_test.cpp`   | Uses `std::remove_cv` and `std::is_same` to demonstrate type manipulation.  |
| `future_test.cpp`      | Contains a standalone `future_test()` that delays and returns a result.     |

---

## 🧪 Features Demonstrated

- `std::async`, `launch::async` vs `launch::deferred`
- `thread_local` storage specifier
- Lvalue/rvalue references and `std::forward`
- `volatile` vs thread-safe access with `std::mutex`
- Type traits: `std::remove_cv`, `std::is_same`
- `std::future` and asynchronous execution

---

## 📌 Notes

- This project is for educational purposes and exploration.
- Functions are structured inside `New_CPP_Test` except for `future_test()` which is standalone.
- Contributions or feedback are welcome!