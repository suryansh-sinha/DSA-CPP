#include <iostream>
using namespace std;

// This is a function.
void printName(string name){
    for(int i=0; i<5; i++){
        cout << name << endl;
    }
}

int main(){

    printName("Accha Bhai");
    printName("Theek Hai Fir");
    return 0;
}