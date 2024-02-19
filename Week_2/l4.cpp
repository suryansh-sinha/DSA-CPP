#include <iostream>
using namespace std;

int main(){

    // Switch Case Statements 
    float a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    int op;
    cout << "What operation do you want to do ?" << endl;
    cin >> op;
    float ans = 0;
    // op 0 --> add, op 1 --> subtract, op2 --> multiply, op3 --> divide else invalid operation.
    switch (op)
    {
    case 0:
        ans = a + b;
        cout << "Add Case " << endl;
        break;
    
    case 1:
        ans = a - b;
        cout << "Subtract Case " << endl;
        break;

    case 2:
        ans = a*b;
        cout << "Multiply Case " << endl;
        break;

    case 4:
        ans = a/b;
        cout << "Divide Case " << endl;
        break; 

    default:
        cout << "Invalid Value of Operator. Please enter a value between 0 and 3." << endl;
        return 0;
        break;
    }

    cout << "Your answer is: " << ans << endl;
    return 0;
}