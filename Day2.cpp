/*
Variables in C++ (Done)
Introduction

1) Declaration -> datatype datatype_name;

2) Initialization -> datatype datatype_name = value;

3) Assignment

4) Scope

5) Types of Variables


 Overflow and Underflow :-


 Rules for Defining a variable in C++

1) Every variable name should start with alphabets or underscore (_).

2) No spaces are allowed in variable declaration.

3) Except underscore (_) no special symbol are allowed in the middle of the variable declaration.

5) Every variable name always should exist in the left hand side of assignment operator.

6) No keyword should access variable name.

 Note: In a cpp program variable name always can be used to identify the input or output data.

*/

#include <iostream>
using namespace std;
int global = 1000; // Global variable

int return_num()
{
    int n = 100; // Local variable
    cout << global << endl;
    return n;
}

int main()
{
    int a = 10; // Local variable
    int b = 20; // Local variable
    int c = a + b;
    cout << c << endl;
    cout << global << endl;       // Printing global variable
    cout << return_num() << endl; // calling the return_num function

    return 0;
}