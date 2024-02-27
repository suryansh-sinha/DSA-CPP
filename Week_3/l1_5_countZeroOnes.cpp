#include <iostream>
using namespace std;

void countZeroOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0; i<size; i++){
        if(arr[i]==0)
            zeroCount += 1;
        if(arr[i]==1)
            oneCount += 1;
    }

    cout << "Number of zeros: " << zeroCount << endl;
    cout << "Number of ones: " << oneCount << endl;
}

int main(){
    int arr[10] = {1,0,1,1,1,0,0,1,0,1};
    countZeroOne(arr, 10);
    return 0;
}