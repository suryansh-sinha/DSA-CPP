#include <iostream>
using namespace std;

// Print extreme elements in order.
// First, Last, Second, Second Last ....
void printExtremes(int arr[], int size){
    int l=0, r=size-1;
    while(l<=r){
        if(l==r)
            cout << arr[l++] << " ";
        else{
            cout << arr[l++] << " ";
            cout << arr[r--] << " ";
        }
    }
    cout << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    printExtremes(arr, 5);
    return 0;
}