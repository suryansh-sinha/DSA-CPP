#include <iostream>
using namespace std;

int main(){

    // array creation
    // int arr[101];
    // char ch[26];
    // bool flags[15];

    int a = 5;
    // & operator gives us the hexadecimal address of a variable.
    cout << "Address of a: " << &a << endl;
    cout << "Size of a: " << sizeof(a) << endl;

    int test_array[10];
    cout << "Base address of test_array: " << &test_array << endl;
    cout << "Base address of test_array: " << test_array << endl;     // the name of the array refers to the base address of the array.
    cout << "Size of array is: " << sizeof(test_array) << endl;

    int arr[] = {1,2,3,4,5};
    int brr[5] = {1,2,3,4,5};
    int crr[5] = {1,2};     // Rest of the values are initialized with 0.
    cout << "The values in crr are: ";
    // Printing an array: 
    for(int i=0; i<5; i++){
        cout << crr[i] << ", ";
    }
    cout << endl;

    int err[5];
    for(int i=0; i<5; i++)
        cout << err[i] << " ";
    cout << endl;

    // Taking input in an array:
    for(int i=0; i<5; i++){
        cout << "Enter value at index " << i+1 << ": ";
        cin >> err[i];
        cout << endl;
    }

    // int drr[3] = {1, 2, 3, 4, 5, 6};
    // Error: Excess elements in array initializer

    return 0;
}