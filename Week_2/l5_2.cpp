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
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
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
void factorial(long long int n){
    long long int factorial=1;
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

// 15. Reverse an integer
void revInt(int n){
    int rev = 0;
    while (n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n/=10;
    }
    cout << "Reversed Number is: " << rev << endl;
}

// 16. KM To Miles
void kmToMiles(double n){
    cout << n << " km is equivalent to " << 0.62*n << " miles." << endl;
}

// 17. Celsius to Kelvin and Fahrenheit
void tempConverter(double n){
    double kelvin = n + 273.15;
    double fahrenheit = n*1.80 + 32;
    cout << "Temperature in Kelvin: " << kelvin << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}

// 19. Count number of set bits in number.
void setBitsCount(int n){
    int count = 0;
    while(n>0){
        if((n&1) == 1)  // & operation with 1 gives the value of last bit.
            count+=1;   
        n = (n >> 1);   // Right shift by 1 position to check the next least significant bit.
    }
    cout << "Number of set bits in: " << n << ": " << count << endl;
}

// 20. Set the Kth bit in number.
void setKthBit(int n, int k){
    int bit = 1;
    bit = bit << k;
    n = (n|bit);
    cout << "Value after setting " << k << "th bit: " << decToBin(n) << endl;
}

// 21. Check if number is even or not using bitwise.
void checkEven(int n){
    if(n&1)
        cout << "Not Even";
    else
        cout << "Even";
}



int main(){

    printSum(11, 12, 13);
    cout << "Sum is: " << returnSum(11, 12, 13) << endl;
    cout << "Maximum number is " << findMax(19, 13, 19) << endl;
    return 0;
}