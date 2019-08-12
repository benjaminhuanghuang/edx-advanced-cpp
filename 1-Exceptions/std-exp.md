There are a number of exceptions in the standard library which derive from the standard exception base class. The ones which derive from the exception base class are
```
std::bad_alloc  //thrown by new
std::bad_cast   //thrown by dynamic_cast
std::bad_typeid  //thrown by typeid
std::bad_exception
std::logic_error  //thrown by reading the code
std::runtime_error  //thrown when not detecable by code analisys
std::bad_function_call  //c++11
std::bad_weak_ptr   //c++11
```

Further there are some more exception which derive from std::logic_failure which are
```
std::domain_error
std::invalid_argument
std::length_error
std::out_of_range
std::future_error  //c++11
```
And there are also some exception that derive from std::runtime_error which are
```
std::overflow_error
std::range_error
std::underflow_error
std::system_error  //c++11
```
Also the following inherit from std::bad_alloc
```
std::bad_array_new_length
```
And the following inherit from std::system_error only in c++11
```
std::ios_base::failure
```
All of these derive from std::exception and therefore can all be caught by the std::exception type.ssss