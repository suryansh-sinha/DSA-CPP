#include <iostream>
using namespace std;

int main(){
    
    // Full Pyramid v2
    int N = 5;
    for(int row=0; row<N; row++){
        // Spaces
        for(int col=0; col<N-row-1; col++)
            cout << " ";
        // Stars
        for(int col=0; col<row+1; col++)
            cout << "* ";
        cout << endl;
    }
    cout << endl << endl;

    // Inverted Full Pyramid
    N=4;
    for(int row=0; row<N; row++){
        // Spaces
        for(int col=0; col<row; col++)
            cout << " ";
        // Stars
        for(int col=0; col<N-row; col++)
            cout << "* ";
        cout << endl;
    }
    cout << endl << endl;

    // Diamond Pattern
    N=5;
    for(int row=0; row<N; row++){
        // Spaces
        for(int col=0; col<N-row-1; col++)
            cout << " ";
        // Stars
        for(int col=0; col<row+1; col++)
            cout << "* ";
        cout << endl;
    }
    for(int row=0; row<N; row++){
        // Spaces
        for(int col=0; col<row; col++)
            cout << " ";
        // Stars
        for(int col=0; col<N-row; col++)
            cout << "* ";
        cout << endl;
    }
    cout << endl << endl;

    // Baseless Hollow Pyramid
    N = 4;
    for(int row=0; row<N; row++){
        for(int col=0; col<N-row-1; col++)
            cout << " ";
        for(int col=0; col<row+1; col++){
            if(col == 0 || col==row)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl << endl;

    // Inverted Baseless Hollow Pyramid
    N = 4;
    for(int row=0; row<N; row++){
        // Spaces
        for(int col=0; col<row; col++)
            cout << " ";
        // Stars
        for(int col=0; col<N-row; col++){
            if (col == 0 || col == N-row-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl << endl;

    // Hollow Diamond - (Homework Question)
    N = 4;
    for(int row=0; row<N; row++){
        for(int col=0; col<N-row-1; col++)
            cout << " ";
        for(int col=0; col<row+1; col++){
            if(col == 0 || col==row)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for(int row=0; row<N; row++){
        // Spaces
        for(int col=0; col<row; col++)
            cout << " ";
        // Stars
        for(int col=0; col<N-row; col++){
            if (col == 0 || col == N-row-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}