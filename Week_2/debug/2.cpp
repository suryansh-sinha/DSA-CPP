#include<iostream>
using namespace std;

// Convert Binary To Decimal
int main() {
    int n,sum=0,factor=1;
    cin>>n;
    while(n!=0){
        int digit = n%2;
        sum = sum + digit*factor;
        factor = 10*factor;
        n = n/2;
    }
    cout << sum << endl;
    return 0;
}