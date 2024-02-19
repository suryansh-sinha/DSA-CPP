/*
Pattern for N = 4
   1
  212
 32123
4321234
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0,gaps = n-1;
    while(i<n){
        // For Spaces On Left
        int k=0,gaps=n-1-i;
        while(k<gaps){
            cout<<" ";
            k++;
        }

        // For Numbers Part A
        int num = i+1;
        while(num>0){
            cout<<num;
            num = num - 1;
        }

        // For Numbers Part B
        k = 2;
        while(k<=(i+1)){
            cout<<k;
            k++;
        }

        i++;
        cout<<"\n";
    }

    return 0;
}