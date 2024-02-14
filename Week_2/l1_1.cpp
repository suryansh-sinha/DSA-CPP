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
    cout << endl << endl;

    // Diamond Using Spaces.
    N=4;
    for(int row=0; row<N; row++){
        // Left star pattern.
        for(int col=0; col<N-row; col++)
            cout << "* ";
        // Pyramid of Spaces
        for(int col=0; col<2*row+1; col++)
            cout << "  ";
        // Last Pyramid
        for(int col=0; col<N-row; col++)
            cout << "* ";
        cout << endl;
    }
    for(int row=0; row<N; row++){
        // Left star pattern.
        for(int col=0; col<row+1; col++)
            cout << "* ";
        // Pyramid of Spaces
        for(int col=0; col<2*(N-row)-1; col++)
            cout << "  ";
        // Last Pyramid
        for(int col=0; col<row+1; col++)
            cout << "* ";
        cout << endl;
    }
    cout << endl << endl;

    // Star - Number Pattern
    N = 5;
    for(int row=0; row<N; row++){
        for(int col=0; col<2*row+1; col++){
            if(col%2 == 0)
                cout << row+1 << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    for(int row=0; row<N-1; row++){
        for(int col=0; col<2*N-2*row-3; col++){
            if(col%2 == 0)
                cout << N-row-1 << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    cout << endl << endl;

    // Hollow Inverted Half Pyramid
    N = 6;
    for(int row=0; row<N; row++){
        for(int col=0; col<N-row; col++){
            if (row==0 || col==0 || col==N-row-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl << endl;

    return 0;
}