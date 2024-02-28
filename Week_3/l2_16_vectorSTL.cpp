#include<iostream>
#include <vector>
using namespace std;

// STL provides a collection of template classes that implement commonly used data structures.
// Vector is a dynamic array (memory allocated dynamically).
// Can grow and shrink in size.
// Has continuous memory locations just as in arrays.

void print(vector<int> v){
    int size = v.size();
    cout << "Printing Vector: " << endl;
    for(int i=0; i<size; i++){
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

void print2(vector<int> v){
    cout << "Printing vector using another method: " << endl;
    // for-each loop
    for(auto it:v){
        cout << it << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;  // We don't need to specify the size here.

    // Inserting elements. It automatically manages allocations.
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Printing array/vector.
    print(v);

    // Deleting elements.
    // Elements from the last are deleted first.
    // In this case 1 --> 2 --> 3.
    // 3 removed first, then 2 and then 1.
    // Using pop when length is 0 throws an error.
    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    v.pop_back();
    print(v);


    // Each time the vector is full and we push back one more element, the vector doubles it's capacity.
    int i=20;
    vector<int> v2;
    while(i--){
        v2.push_back(1);
        cout << "Capacity: " << v2.capacity() << ", Size: " << v2.size() << endl;
    }
    cout << endl << endl;

    // We can also access elements using v.at(i) --> Same as v[i].
    // To clear the vector, we use v.clear();
    print(v2);
    v2.clear(); // Capacity remains same after using clear.
    cout << "Capacity of vector after clearing: " << v2.capacity() << endl;
    print(v2);

    // Vector Initialization.
    vector<int> arr(5,-1); // Creates a vector with -1 given 5 times.
    print(arr);

    vector<int> arr1 = {1,2,3,4,5};
    print(arr1);

    vector<int> arr2 {1,2,3,4,5};
    print(arr2);

    vector<int> arr3(arr2); // Initializing with values of vector arr2.
    print(arr3);

    vector<int> arr4(5);    // Initializes vector with capacity = 5. All zeros/garbage.
    cout << "Capacity of arr4: " << arr4.capacity() << endl << endl;
    print(arr4);
    arr4 = {1,2,3,4,5};
    arr4.push_back(15);
    cout << "Capacity of arr4: " << arr4.capacity() << endl << endl;
    print(arr4);

    // To print first and last elements -
    cout << "Front element: " << arr1[0] << endl;
    cout << "Front element: " << arr1.front() << endl;
    cout << "Back element: " << arr1[arr1.size()-1] << endl;
    cout << "Back element: " << arr1.back() << endl;

    return 0;
}