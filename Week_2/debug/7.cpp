/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0,gaps = n-1;
    while(i<n){
        int k=0,gaps=n-i;
        while(k<gaps){
            cout<<k+1;
            k++;
        }
        gaps=2*i;
        while(gaps!=0){
            cout<<"*";
            gaps--;
        }
        k = n-i;
        while(k>0){
            cout<<k;
            k--;
        }
        i++;
        cout<<"\n";
    }
    return 0;
}