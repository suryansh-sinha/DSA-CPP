#include <iostream>
using namespace std;

// Creating a new array, start from last value in original and put that in new array.
void reverseArray(int arr[], int size){
    int rev[size];
    for(int i=0; i<size; i++){
        rev[i] = arr[size-i-1];
    }
    cout << "Reversed array is: ";
    for(int i=0; i<size; i++)
        cout << rev[i] << " ";
    cout << endl;
}

// Two pointer approach. Left starts at 0, right starts at end.
// Swap the two locations, and move further inside the array.
void betterReverse(int arr[], int size){
    int l=0, r=size-1;
    while(l<=r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    cout << "Reversed array is: ";
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    reverseArray(arr, 5);
    betterReverse(arr, 5);
    return 0;
}