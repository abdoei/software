/*
* I made this before learning how to use a tool or program that comeswith 
* nearly every compiller which is called c++filt when called from any CL like 
* 
* >> c++filt _ZN7MyClass3fooEv
* MyClass::foo()
*/


#include <cstdlib>
#include <iostream>
#include <typeinfo>
#include <cxxabi.h>

#define FREE(p)   \
    std::free(p); \
    p = 0

void foo(int) {}

int main()
{
    // standard containers for the code to run
    int status;
    size_t length;
    const char *p1 = 0;
    char *p2 = 0;

    // get the type of a reference to a void function that takes an int
    p1 = typeid(&foo).name();
    p2 = abi::__cxa_demangle(p1, 0, &length, &status);
    std::cout << p1 << " : " << (p2 ? p2 : p1) << '\n';
    FREE(p2);

    // get the type of an integer variable
    p1 = typeid(length).name();
    p2 = abi::__cxa_demangle(p1, 0, &length, &status);
    std::cout << p1 << " : " << (p2 ? p2 : p1) << '\n';
    FREE(p2);

    return 0;
}
