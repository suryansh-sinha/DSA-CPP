#include <iostream>
using namespace std;

bool checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(f1+f2<=n){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    cout << (checkMember(n)?"Fibonacci":"Hell Nah!") << endl;
    return 0;
}