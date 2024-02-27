#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int size){
    int zeroCount=0, oneCount=0;
    // Count all zeros and ones.
    for(int i=0; i<size; i++){
        if(arr[i]==0)
            zeroCount++;
        if(arr[i]==1)
            oneCount++;
    }

    // Place zeros first
    for(int i=0; i<zeroCount; i++)
        arr[i] = 0;
    for(int i=zeroCount; i<size; i++)
        arr[i] = 1;
}

int main()
{
    int arr[] = {0,1,0,1,1,0,0,0,0};
    int size = 9;

    return 0;
}