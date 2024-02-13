#include <iostream>
using namespace std;

int main(){
    // int has size 4 bytes
    int a = 90;
    cout << a << "\nIt's size is: " << sizeof(a) << endl;

    // char has size 1 byte.
    char ch = 'k';
    cout << ch << "\nIt's size is: " << sizeof(ch) << endl;

    // float has size 4 bytes.
    float f = 1.96;
    cout << f << "\nIt's size is: " << sizeof(f) << endl;

    // Declaration. Garbage value stored in memory is still there.
    int num;
    cout << num << endl;    // Prints the garbage value in the memory address.

    return 0;
}