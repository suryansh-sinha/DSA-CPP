#include <iostream>
using namespace std;

// 1. Print sum of 3 numbers
void printSum(int a, int b, int c){
    int answer = a + b + c;
    cout << "Sum is: " << answer << endl;
}

// 2. Return sum of 3 numbers
int returnSum(int a, int b, int c){
    return a+b+c;
}

// 3. Find max of 3 numbers
int findMax(int a, int b, int c){
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}

// 4. Counting from 1 to n
int counter(int N){
    for(int i=1; i<=N; i++)
        cout << i << "\t";
    cout << endl;
}

// 5. Check prime or not
bool checkPrime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i!=0)
            return false;
    }
    return true;
}

// 6. Check even or odd
void evenOrOdd(int n){
    if(n%2==0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;
}

// 7. Sum of numbers till N
void summation(int n){
    int sum=0;
    for(int i=1; i<=n; i++)
        sum += i;
    cout << "Sum is: " << sum << endl;
}

// 8. Sum of even numbers upto N
void evenSum(int n){
    int sum=0;
    for(int i=2; i<=n; i+=2){
        sum+=i;
    }
    cout << "Sum is: " << sum << endl;
}

// 9. Find area of circle
void circleArea(int r){
    float area = 3.1415962 * r * r;
    cout << "Area is: " << area << endl;
}

// 10. Factorial of number
void factorial(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    cout << "Factorial is: " << factorial << endl;
}

// 11. Prime numbers from 1 to N.
void primeList(int n){
    for(int i=2; i<=n; i++){
        if (checkPrime(i)==true)
            cout << i << "\t";
    }
    cout << endl;
}

// 12. Print all digits of integer
void printDigits(int n){
    while(n!=0){
        cout << n%10 << " ";
        n/=10;
    }
    cout << endl;
}

// 13. Create a number using digits.
void createNumber(int a, int b, int c){
    int num = a;
    num = num*10 + b;
    num = num*10 + c;
    cout << "The number created is: " << num << endl;
}

// 14. Print binary representation of a decimal number.
void decToBin(int n){
    int binary = 0;
    while(n!=0){
        int bit = n%10;
        binary = bit*10 + binary;
    }
}

int main(){

    printSum(11, 12, 13);
    cout << "Sum is: " << returnSum(11, 12, 13) << endl;
    cout << "Maximum number is " << findMax(19, 13, 19) << endl;
    return 0;
}