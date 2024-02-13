#include <iostream>
#include <cmath>
using namespace std;

/* Decimal to Binary Conversion */

// Division Method
int decimalToBinaryMethod1(int n){
    int bin = 0, i = 0;
    while(n>0){
        int bit = n%2;
        bin = bit * pow(10, i++) + bin;
        n/=2;
    }
    return bin;
}

// Bitwise Method. Faster method.
int decimalToBinaryMethod2(int n){
    int bin = 0, i = 0;
    while(n>0) {
        int bit = (n & 1);
        bin = bit * pow(10, i++) + bin;
        n = n >> 1;
    }
    return bin;
}

// Converting binary to decimal.
int binaryToDecimal(int n){
    int num = 0, i = 0;
    while(n>0){
        int bit = n%10;
        num = bit * pow(2, i++) + num;
        n /= 10;
    }
    return num;
}

int main(){
    int n = 10;
    cout << decimalToBinaryMethod1(n) << endl;
    cout << decimalToBinaryMethod2(n) << endl;
    cout << binaryToDecimal(10111) << endl;
    return 0;
}