// Switch Statements
/*
What is a switch statement in C++?
The switch statement in C++ is a flow control statement that is used to execute the different blocks of statements based on the value of the given expression. We can create different cases for different values of the switch expression. We can specify any number of cases in the switch statement but the case value can only be of type int or char.

Rules of the switch case statement in C++
There are some rules that we need to follow when using switch statements in C++. They are as follows:

The case value must be either int or char type.
There can be any number of cases.
No duplicate case values are allowed.
Each statement of the case can have a break statement. It is optional.
The default Statement is also optional.

Syntax of switch case statement in C++
The syntax of the switch case statement in C++ is as follows:

switch (expression) {
    case value_1:
        // statements_1;
        break;
    case value_2:
        // statements_2;
        break;
    .....
    .....
    default:
        // default_statements;
        break;
}

*********************************  Advantages of switch Statement in C++ ******************************

Easier to debug and maintain for a large number of conditions.
Faster execution speed.
Easier to read than if else if.

********************************* Disadvantages of switch Statement in C++ *******************************

Switch case can only evaluate int or char type.
No support for logical expressions.
Have to keep in mind to add a break in every case.

*/

#include <iostream>
using namespace std;
int main()
{
   //Integer
   // int number;
   // cout<<"Enter the value of Number\n";
   // cin>>number;
   // switch(number){
   //    case 18:
   //    cout<<"The given number is 18";
   //    break;
   //    case 20:
   //    cout<<"The given number is 20";
   //    break;
   //    case 22:
   //    cout<<"The given number is 22";
   //    break;
   //    default:
   //    cout<<"The given number is not 18, 20 or 22";
   //    break;
   // }


   char c;
   cout<<"Enter the value of char\n";
   cin>>c;
   switch(c){
      case 'a':
      cout<<"The given char is a";
      break;
      case 'b':
      cout<<"The given char is b";
      break;
      case 'c':
      cout<<"The given char is c";
      break;
      default:
      cout<<"The given char is not a, b or c";
      break;
   }
   return 0;
}