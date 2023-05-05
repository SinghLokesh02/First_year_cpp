// Switch Statements

/*
Functions in C++

Introduction of Functions in C++
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

*/

#include <iostream>
using namespace std;
int main()
{

   return 0;
}