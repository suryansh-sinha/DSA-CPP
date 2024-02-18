#include <iostream>
using namespace std;

int main(){
    
    // Bitwise Operators.
    int a = 2;
    int b = 3;
    int c = 4;

    cout << (a&b) << endl;
    cout << (a|c) << endl;


    int i = 1;
    cout << ~i << endl;
    cout << (~i) << endl;
    cout << ~(i) << endl;

    cout << (a^a) << endl;
    cout << (a^a^b) << endl;

    // Left and Right Shift Operators.
    int n = 5;
    int ans = (n<<1);
    cout << ans << endl;
    ans = (n<<5);
    cout << ans << endl;    // Returns n * 2^5.

    n=5;
    ans=(n>>1); // Right shift divides by 2^n where n is number of positions by which we shift.
    cout << ans << endl;
    n = 100;
    ans = (n>>2);   // Divides by 2^2 = 4. So output should be 25.
    cout << ans << endl;

    n = -100;   // This is a signed integer. But compiler handles this case.
    ans = (n>>1);
    cout << ans << endl;

    unsigned int num = -100;    // Since this is an unsigned integer, compiler doesn't handle this case.
    ans = (num>>1);
    cout << ans << endl;

    // Pre/Post Increment/Decrement Operators
    a = 21;
    cout << (++a)*10 << endl;
    cout << (a++)*10 << endl;
    cout << a;

    return 0;
}