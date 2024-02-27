#include <iostream>
#include <limits.h>
using namespace std;

void findMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < min)
            min = arr[i];
    }

    cout << "The minimum value in the array is: " << min << endl;
}

int main(){
    int arr[10] = {12,123,134,6543,412,123,-1231,124,-1,2};
    findMin(arr, 10);
    return 0;
}