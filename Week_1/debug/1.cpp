#include<iostream>
using namespace std;

int main() {
	  char c;
    cin>>c;
    if (c >= 'a' && c <= 'z'){
        cout << 1;
    }
    else if (c >= 'A' && c <= 'Z'){
        cout << 0;
    }
    else{
        cout << -1;
    }
    return 0;
}