/*
Functions in C++

Introduction of Functions
A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

It promote DRY principle(Which means do not repeat yourself)

C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.

Creating a Function

In C++, a function is a group of statements that is given a name, and which can be called from some point of the program.

Syntax:

return_type function_name( parameter list ) {
   body of the function
}

return_type: It is the type of value returned by the function to the calling function. If the function does not return any value, then the return_type is void.

function_name: It is the name of the function. The function name and the parameter list together constitute the function signature.

parameter list: It is the list of parameters, which are passed to the function. It is optional to provide a parameter list. If no parameters are required by the function, then the parameter list can be empty.

body of the function: It contains a collection of statements that define what the function does.

Example:

int sum(int a, int b) {
   int result = a + b;
   return result;
}

Calling a Function
from main function -> sum(a,b);

Function Declaration and Definition

Function Declaration
A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

A function declaration has the following parts:
return_type function_name( parameter list );

For the above defined function sum(), following is the function declaration:
int sum(int a, int b);

Types of function
Function with arguments and no return values
Function with arguments and one return value
Function with no arguments and no return values
Function with no arguments and one return value
Function with multiple return values


*/

#include <iostream>
using namespace std;
void hello(string s1)
{
    string s1;
       cout<<"Hello how are you ?"<<s1<<endl;
}

 
 // Argument vs Parameter

int main()
{
    string s1 = "Lokesh Singh";
    string s2 = "Mukesh";
    string s3 = "Rakesh Singh";
    string s10 = "Raj Singh";

    // Without Functon
    //  cout<<"Hello how are you ?"<<s1<<endl;
    //  cout<<"Hello how are you ?"<<s2<<endl;
    //  cout<<"Hello how are you ?"<<s3<<endl;
    //  cout<<"Hello how are you ?"<<s4<<endl;
    //  cout<<"Hello how are you ?"<<s5<<endl;
    //  cout<<"Hello how are you ?"<<s6<<endl;
    //  cout<<"Hello how are you ?"<<s7<<endl;
    //  cout<<"Hello how are you ?"<<s8<<endl;
    //  cout<<"Hello how are you ?"<<s9<<endl;
    //  cout<<"Hello how are you ?"<<s10<<endl;

    // WithFuncton
    hello(s1); // Argument
    return 0;
}