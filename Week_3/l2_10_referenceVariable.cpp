#include <iostream>
using namespace std;

int main(){
    int n = 5;  // Normal integer variable.
    int &k = n; // k is a reference variable referring to n;
    int &c = n; // c is also a reference variable. It has no memory alloted for itself.

    cout << "N: " << n << endl;
    cout << "K: " << k << endl;
    cout << "C: " << c << endl;

    k++;    // Changing the reference variable changes the original variable.

    cout << "N: " << n << endl;
    cout << "K: " << k << endl;
    cout << "C: " << c << endl;

    // int &t = 6; This throws an error as it's a reference variable. We cant store a constant in it.

    return 0;
}