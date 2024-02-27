#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void linearSearch(int arr[], int size, int target){
    int i;
    bool flag = 0;
    for(i=0; i<n; i++){
        if (arr[i] == target){
            flag = 1;
            break;
        }
    }

    if (flag){
        cout << "The element is found at index: " << i << endl;
    }
    else
        cout << "Element is not found" << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    printArray(arr, size);
    linearSearch(arr, size, )
    return 0;
}