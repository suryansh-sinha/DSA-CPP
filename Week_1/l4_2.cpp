#include <iostream>
using namespace std;

/* Looping */
int main(){

    /* 
    for (initialization; condition; updation){
        logic
    }
    */

    for (int i=1; i<=10; i++){
        cout << i << "\t";
    }
    cout << endl;

    for(int i=1; i<=3; i++){
        cout << "Outer Loop " << i << endl;
        for(int j=1; j<=3; j++){
            cout << "\t-->Inner Loop " << j << endl;
        }
    }
    cout << endl;
    return 0;
}