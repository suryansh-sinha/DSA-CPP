#include <iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void input(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    // static memory allocation of array
    // int arr[5] = {1,2,3,4,5};

    // dynamic array
    int n;
    cin >> n;
    int *arr = new int[n];  // each element would be zero/garbage by default
    input(arr, n);
    print(arr, n);

    // The problem with this approach is that if the user enters let's say 50 as size.
    // Then the array created will have 50 elements only.
    // If we want to add more elements, we can't do that. Size remains constant.
    // To fix this, we use STL's implementation.

    return 0;
}