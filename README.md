# Software Notes
## 1. C++ [section](.\cpp)
1.1. [cpp_variable_types](.\cpp\cpp_variable_types.cpp): this is a simple program to demangle the variable types in C++. For example, after compiling the program and running it, the output is as follows:
``` 
PFviE : void (*)(int)   
y : unsigned long long  
```
as you can see, the first line is the demangled type of the function pointer, and the second line is the demangled type of the variable y. That could be seen in the code as follows:
```cpp
void foo(int) {}
size_t length;
```
You can change the type of the variable and see the output. 

1.2. [Packing_Unpacking](.\cpp\Packing_Unpacking.cpp): this is a simple program to pack and unpack the data in C++. This topic is very important in the field of communication and networking. This topic is also known as serialization and deserialization and it's important to know how data is organized in the memory or storage and how to access it. For example, after compiling the program and running it, the output is as follows:
```
x = 65536, and networkByteOrder = 256
y = 256, and nativeByteOrder = 65536
```
## 2. Windows [section](.\windows)
2.1. [delete empty folders](.\windows\delete_empty_folders.bat): this is a simple batch file to delete all empty folders in a directory in a recursive mannar. For more information, please refer to the [readme file](<.\windows\delete empty folders\readme.md>).
<!-- break line -->
2.2. [add to path](.\windows\add2path\add_to_path.bat): this is a simple batch file to add a directory to the path environment variable. For more information, please refer to the [readme file](<.\windows\add2path\readme.md>).