#include<iostream>
#include<vector>
using namespace std;

void print2D(vector<vector<int>> arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

int main()
{
    // Initialize a 2D vector
    vector<vector<int>> v;

    // Creates a 5x10 vector with 0 in each element.
    vector<vector<int>> arr(5, vector<int>(10,0));

    // Jagged Array. Multi-dimensional array with different number of elements in each row.
    vector<vector<int>> brr;

    vector<int> v1(10,0);
    vector<int> v2(5,1);
    vector<int> v3(7,0);
    vector<int> v4(8,1);
    vector<int> v5(20,0);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);
    brr.push_back(v5);

    // Indexing works just like a 2D array. Can use arr[i][j] format.
    print2D(arr);
    print2D(brr);
    return 0;
}