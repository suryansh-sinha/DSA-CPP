#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    int c = 0, d = 2;
    while (d < num/2){
        if (num%d == 0)
            c++;
        d++;
    }
    if (c!=2)
        cout << "Not Prime" << endl;
    else
        cout << "Prime" << endl;
    return 0;
}