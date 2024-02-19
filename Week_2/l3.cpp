#include <iostream>
using namespace std;

int main(){

    // Implicit Type Casting
    int num1 = 10;
    float num2 = 5.5;
    int result = num1 + num2;   // integer output, so the num2 which is float gets casted into int.
    float r2 = num1 + num2;     // float output
    cout << result << endl;

    char ch = 'a';
    int ab = ch + 1;     // Converts char ch to integer (ASCII Value).
    char ch2 = ab + 1;   // Converts integer a to character.
    cout << ab << ", " << ch2 << endl;

    // Explicit Type Casting
    // 1. double to int
    double pi = 3.14159265;
    int intPi = (int)pi;
    cout << intPi << endl;

    // 2. float to char
    float number = 65.84;       // Ignores the value after the point and keeps the integer part.
    char charVal = (char)number;
    cout << charVal << endl;

    // 3. int to float
    int a = 10;
    float b = 3.0;
    float c = a/((float)b);
    cout << c << endl;

    int x = 10;
    int y = 3;
    float z = x/y;      // Dividing int by int gives int value only. We don't even get 3.0 here in the output.
    cout << z << endl;

    return 0;
}