// Call by value and Call by reference

// Passing of array in function and return type as function

// convert int to string

// convert string to int

// convert a number to binary number

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void change(int &num)
{
    cout << "The number is : " << num << endl;
    num += 10;
    cout << "The number is : " << num << endl;
}

// Method - 1
// void print(int arr[],int n){
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Method - 2
void print(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout << endl;
    // int a = 10;
    // change(a);
    // cout<<a<<endl;// Copy

    // Integer to string
    // int a = 10;
    // string s1 = to_string(a);
    // cout<<s1[0]<<endl;
    // cout<<s1[1]<<endl;

    // String to Integer
    // string s = "1234";
    // int x = stoi(s);
    // cout<<x<<endl;

    // Passing array in function
    int n;
    cout << "Enter the size of Array\n";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(arr, n);
    
    cout << endl;
    return 0;
}
