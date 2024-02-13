#include <iostream>
using namespace std;


// Conditionals. if else-if else blocks.
int main(){
    int n = 10;

    if(n>0){
        cout << "Positive" << endl;
    }
    else if (n<0){
        cout << "Negative" << endl;
    }
    else{
        cout << "Zero" << endl;
    }

    if (n%2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
    return 0;
}