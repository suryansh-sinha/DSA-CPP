#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;
    int c = 5;
    
    // Arithmetic Operators
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << b%a << endl;

    // Relational Operators
    cout << "\nRelational Operators" << endl;
    cout << (a>b)  << endl;
    cout << (a>=b) << endl;
    cout << (a<b)  << endl;
    cout << (a<=b) << endl;
    cout << (a!=b) << endl;
    cout << (b==c) << endl;

    // Logical Operators
    int age = 21;
    bool isDrunk = false;

    cout << "\nLogical Operators" << endl;

    if (age > 18 && isDrunk == false)
        cout << "Can drive" << endl;
    else if (!isDrunk == true)
        cout << "Can't drive" << endl;
    else if (age < 18 || isDrunk == true)
        cout << "Can't drive" << endl;

    return 0;
}