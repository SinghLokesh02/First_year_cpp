// If else conditionals
// If else if ladder

// Arrays
// 1) Declaration
// 2) Initialization
// 3) Accessing the elements of an array
// 4) Size of an array

#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    // int age;
    // cout<<"Enter Your age : ";
    // cin>>age;

    // if(age>=18){
    //     cout<<"You can vote"<<endl;
    // }
    // else if(age<0){
    //     cout<<"Invalid age"<<endl;
    // }
    // else if(age<=5){
    //     cout<<"You are a baby"<<endl;
    // }
    // else if(age<=12){
    //     cout<<"You are a child"<<endl;
    // }
    // else if(age<=18){
    //     cout<<"You are a teenager"<<endl;
    // }
    // else if(age<=30){
    //     cout<<"You are a young"<<endl;
    // }
    // else if(age<=50){
    //     cout<<"You are a middle aged"<<endl;
    // }
    // else if(age<=100){
    //     cout<<"You are a old"<<endl;
    // }
    // else{
    //     cout<<"You are a super human"<<endl;
    // }

    int number;
    cout << "Enter a number : ";
    cin >> number;
    if (number < 0)
    {
        cout << "Invalid number" << endl;
    }
    else if (number % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    // Array
    // int marks[5]; // Declaration
    // marks[0] = 10;// Initialization
    // marks[1] = 20;
    // marks[2] = 30;
    // marks[3] = 40;
    // marks[4] = 50;

    // int marks[5] = {10,20,30,40,50};// Declaration + Initialization
    // int marks[] = {10, 20, 30, 40, 50};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // int x = 10;
    // cout << "The size of int is : " << sizeof(x) << endl;
    // cout << "The size of int is : " << sizeof(marks) << endl;
    // char arr[] = {'a','b','c','d','e'};

    // cout << "The size of char is : " << sizeof(arr) << endl;

    // cout << "The size of int is : " << sizeof(int) << endl;
    // cout << "The size of char is : " << sizeof(char) << endl;
    // cout << "The size of bool is : " << sizeof(bool) << endl;
    // cout << "The size of short is : " << sizeof(short) << endl;
    // cout << "The size of long is : " << sizeof(long) << endl;
    // cout << "The size of float is : " << sizeof(float) << endl;
    // cout << "The size of double is : " << sizeof(double) << endl;

    // Last Example

    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    // int arr[n];
    // cout << "Enter the elements of array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i]; // 0 1 2 3 4 5 6 
    // }
    // cout << "The elements of array are : ";
    // for (int i = 0; i < n; i++)// 10
    // {
    //     cout << arr[i] << " ";// arr[0] arr[1] arr[2] arr[3] arr[4] arr[5] arr[6] arr[7] arr[8] arr[9] 
    // }

    cout << endl;
    return 0;
}