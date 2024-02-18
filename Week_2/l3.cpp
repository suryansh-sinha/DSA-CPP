#include <iostream>
using namespace std;

int main(){

    // Implicit Type Casting
    int num1 = 10;
    float num2 = 5.5;
    int result = num1 + num2;   // integer output, so the num2 which is float gets casted into int.
    float r2 = num1 + num2; // float output
    cout << result << endl;

    char ch = 'a';
    int a = ch + 1;
    cout << a << endl;

    // Explicit Type Casting
    return 0;
}