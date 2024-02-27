#include <iostream>
using namespace std;

int main(){
    // Linear Search in array
    int arr[5] = {1, 2, 3, 5, 10};
    int target = 10;
    int n = 5, i = 0;
    bool flag = 0;

    for(i=0; i<n; i++){
        if (arr[i] == target){
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "The element is found at index: " << i << endl;
    else
        cout << "Element is not found" << endl;
}