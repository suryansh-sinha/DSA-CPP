#include<iostream>
using namespace std;

void printPairs(int arr[], int size){
    for(int i=0; i<size; i++){
            for(int j=0; j<size; j++)
                cout << "(" << arr[j] << ", " << arr[i] << ")   ";
            cout << endl;
        }
}

// This has very bad time complexity though. O(n^3)
void printTriplets(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++)
                cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")   ";
        cout << endl;
        }
    }
}

int main()
{
    int arr1[] = {10, 20, 30};
    int arr2[] = {1,2,3,4,5};
    printPairs(arr1, 3);
    cout << endl << endl;
    printTriplets(arr2, 5);
    return 0;
}