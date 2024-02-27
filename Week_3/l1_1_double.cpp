#include <iostream>
using namespace std;

int main(){

    // Doubling an array.
    int arr[10];
    for(int i=0; i<10; i++){
        cout << "Enter element: ";
        cin >> arr[i];
        arr[i] *= 2;
    }

    for(int i=0; i<10; i++){
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    return 0;
}