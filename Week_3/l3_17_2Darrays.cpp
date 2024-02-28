#include <iostream>
#include <limits.h>  // For INT_MAX, INT_MIN etc.
using namespace std;

// Need to specify the columns in the array always. In the function definition too!
void print2D(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Accessing each element of array column wise.
void printColWise(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

bool findTarget(int arr[][4], int row, int col, int target){
    // Accessing each element of array row-wise.
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            // If found in array, return true.
            if(arr[i][j] == target)
                return true;
        }
    }
    return false;
}

int findMax(int arr[][4], int row, int col){
    // Initializing with the lowest possible value for an integer.
    int max = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            // If element in array is greater than max, change max to that element.
            if(arr[i][j] > max)
                max = arr[i][j];
        }
    }
    return max;
}

int findMin(int arr[][4], int row, int col){
    // Initializing with the largest possible value for an integer.
    int min = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            // If element in array is smaller than min, change min to that element.
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }
    return min;
}

void rowWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << ": " << sum << endl;
    }
    cout << endl;
}

void colWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout << "Sum of col " << i << ": " << sum << endl;
    }
    cout << endl;
}

// Left to Right Diagonal Sum.
void lrDiagSum(int arr[][4], int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j)
                sum += arr[i][j];
        }
    }
    cout << "Sum of left to right diagonal elements (row-wise) is: " << sum << endl;
    cout << endl;
}

// Right to left diagonal sum.
void rlDiagSum(int arr[][4], int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(j==col-i-1)
                sum += arr[i][j];
        }
    }
    cout << "Sum of right to left diagonal elements (row-wise) is: " << sum << endl;
    cout << endl;
}

// Getting transpose of matrix (n*n).
// Arrays are always passed by reference. 
// Any changes you make to the array in function will reflect in the original array.
// Since we're using arrays, we can't code this for n*m arrays as m is variable, which we can't use.
// IMPORTANT QUESTION.
void transpose(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{
    // Initializing a 2D array.
    // We need to atleast initialize number of columns when creating 2D Array.
    // This is because of the formula (c*i) + j mentioned below.
    int arr[2][4] = {       // 2 rows, 4 columns in array.
        {10,20,30,40},
        {50,60,70,80}
    };

    // In memory, data is placed in a linear fashion, just like a normal array.
    // We can find out the index using formula c*i + j, where c is total columns.

    int brr[][4] = {       
        {10,20,30,40},
        {50,60,70,80}
    };

    // This is not possible. Will throw an error because column size not specified.
    // int crr[][] = {
    //     {10,20,30,40},
    //     {50,60,70,80}
    // };


    // Indexing. Go to function to understand.
    print2D(arr,2,4);
    printColWise(arr,2,4);

    // Linear Search. Go to function to understand.
    int target1 = 11, target2 = 30;
    cout << "Is " << target1 << " in the array: " << findTarget(arr,2,4,target1) << endl;
    cout << "Is " << target2 << " in the array: " << findTarget(arr,2,4,target2) << endl;

    // Finding maximum element in array.
    cout << "Maximum value in the array is: " << findMax(arr, 2, 4) << endl;
    // Finding minimum element in array.
    cout << "Minimum value in the array is: " << findMin(arr, 2, 4) << endl;

    // Printing row-wise sum of each array.
    rowWiseSum(arr,2,4);
    // Printing col-wise sum of each array.
    colWiseSum(arr,2,4);

    int arr2[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {5,4,6,12},
        {2,5,5,8}
    };

    // Printing left to right diagonal sum (row-wise) of n*n array.
    lrDiagSum(arr2,4,4);
    // Printing right to left diagonal sum (row-wise) of n*n array.
    rlDiagSum(arr2,4,4);

    // Printing the transpose of n*n matrix.
    transpose(arr2,4,4);
    print2D(arr2,4,4);

    return 0;
}