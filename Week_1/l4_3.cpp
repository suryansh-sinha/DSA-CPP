#include <iostream>
using namespace std;

int main(){

    // Square
    int SIDE = 5;
    for(int i=0;i<SIDE;i++){
        for(int j=0; j<SIDE; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // Hollow Rectangle
    cout << endl << endl << endl;
    int ROWS = 5, COLS = 10;
    for(int row=0; row<ROWS; row++)
    {
        for(int col=0; col<COLS; col++){
            if(row==0 || row==ROWS-1){
                cout << "* ";
            }
            else{
                if(col==0 || col==COLS-1)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }

    // Half Pyramid
    cout << endl << endl << endl;
    ROWS = 5;
    for(int row=0; row<ROWS+1; row++){
        for(int col=0; col<row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    // Inverted Half Pyramid
    cout << endl << endl << endl;
    ROWS = 5;
    for(int row=0; row<ROWS; row++){
        for(int col=0; col<ROWS-row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    // Numeric Half Pyramid
    cout << endl << endl << endl;
    ROWS = 5;
    for(int row=0; row<ROWS; row++){
        for(int col=0; col<row+1; col++){
            cout << col+1 << " ";
        }
        cout << endl;
    }

    //Inverted Numeric Half Pyramid
    cout << endl << endl << endl;
    ROWS = 5;
    for(int row=0; row<ROWS; row++){
        for(int col=0; col<ROWS-row; col++){
            cout << col+1 << " ";
        }
        cout << endl;
    }

    // HW - Hollow Inverted Half Pyramid
    cout << endl << endl << endl;
    ROWS = 5;
    for(int row=0; row<ROWS; row++){
        for(int col=0; col<ROWS-row; col++){
            if(row==0 || col==0 || col==ROWS-row-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    //HW - Full Pyramid
    cout << endl << endl << endl;
    ROWS = 5;
    for(int row=0; row<ROWS; row++){
        for(int j=0; j<ROWS+row; j++){
            if (j<ROWS-row-1)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }

    // HW - Hollow Full Pyramid
    cout << endl << endl << endl;
    ROWS = 6;
    for(int row=0; row<ROWS; row++){
        for(int j=0; j<ROWS+row; j++){
            if (j==ROWS-row-1 || j==ROWS+row-1 || row==ROWS-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}