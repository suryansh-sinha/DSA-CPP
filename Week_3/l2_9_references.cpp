#include <iostream>
using namespace std;

// The value passed in the function is by value.
// The original variable in the main function is not passed. Instead the value is passed.
// This is call by value.
int incrementBy1(int n){
    n = n+1;
    return n;
}

// Since we passed a reference in the function, it changes the original n.
// This is call by reference
void incrementOriginalBy1(int &n){
    n=n+1;
}

int main(){
    int n = 5;
    n = incrementBy1(n);
    cout << n << endl;
    incrementOriginalBy1(n);
    cout << n << endl;
    return 0;
}