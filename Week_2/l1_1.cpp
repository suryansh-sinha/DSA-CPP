#include <iostream>
using namespace std;

int main(){
    
    // 10. Full Pyramid v2
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

    // 11. Inverted Full Pyramid
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

    // 12. Diamond Pattern
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

    // 13. Baseless Hollow Pyramid
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

    // 14. Inverted Baseless Hollow Pyramid
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

    // 15. Hollow Diamond - (Homework Question)
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

    // 16. Diamond Using Spaces
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

    // 17. Star - Number Pattern
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

    // 18. Hollow Inverted Half Pyramid
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

    // 19. Hollow Number Pyramid
    N=5;
    int space;
    for(int row=0; row<N; row++){
        if (row!=0 && row!=N-1)
            space = row;
        else
            space=0;
        for(int col=0; col<row+1+space; col++){
            // Last Row
            if(row==N-1)
                cout << col+1;
            else{
                // First column
                if(col==0){
                    cout << 1;
                    continue;
                }
                // Spaces
                if(space!=0){
                    cout << " ";
                    space -= 1;
                }
                // Last Column
                if(col==row+space){
                    cout << row+1;
                }
            }
        }
        cout << endl;
    }
    cout << endl << endl;

    // 20. Alphabet Palindrome Pyramid
    N=5;
    for(int row=0; row<N; row++){
        for(int col=0; col<row+1; col++){
            char ch = 'A';
            cout << char(ch + col);
        }
        char ch = 'A'+row-1;
        for(int col=0; col<row; col++){
            cout << ch;
            ch = char(ch-1);
        }
        cout << endl;
    }
    cout << endl << endl;

    // 21. Numeric Hollow Inverted Half Pyramid
    N=5;
    for(int row=0; row<N; row++){
        for(int col=0; col<N-row; col++){
            if(col!=0 && col!=N-row-1 && row!=0)
                cout << " ";
            else
                cout << row+col+1;
        }
        cout << endl;
    }

    // 22. Numeric Palindrome Equilateral Pyramid 
    N = 5;
    for(int row=0; row<N; row++){
        // Spaces
        for(int col=0; col<N-row; col++){
            cout << " ";
        }
        // 1, 12, 123, 1234....
        for(int col=0; col<row+1; col++){
            cout << col+1;
        }
        // 1, 21, 321, 4321....
        for(int col=0; col<row; col++){
            cout << row-col;
        }
        cout << endl;
    }
    cout << endl << endl;

    // 23. Fancy Pattern #1
    N = 5;
    for(int row=0; row<N; row++){
        // Stars
        for(int col=0; col<2*N-row-2; col++){
            cout << "* ";
        }
        // Number Star Pattern
        for(int col=0; col<2*row+1; col++){
            if(col%2 == 0)
                cout << row+1 << " ";
            else
                cout << "* ";
        }
        // Stars
        for(int col=0; col<2*N-row-2; col++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl << endl;

    // 24. Solid Half Diamond
    N = 4;
    for(int row=0; row<N; row++){
        for(int col=0; col<row+1; col++)
            cout << "* ";
        cout << endl;
    }
    for(int row=0; row<N; row++){
        for(int col=0; col<N-row-1; col++)
            cout << "* ";
        cout << endl;
    }
    cout << endl << endl;

    // 25. Floyd's Triangle
    N = 6;
    int num=1;
    for(int row=0; row<N; row++){
        for(int col=0; col<row+1; col++){
            cout << num++ << " "    ;
        }
        cout << endl;
    }
    cout << endl << endl;

    // 26. Butterfly Pattern
    N = 4;
    for(int row=0; row<N; row++){
        for(int col=0; col<row+1; col++)
            cout << "* ";
        for(int col=0; col<2*N-2*row-2; col++)
            cout << "  ";
        for(int col=0; col<row+1; col++)
            cout << "* ";
        cout << endl;
    }
    for(int row=0; row<N; row++){
        for(int col=0; col<N-row; col++)
            cout << "* ";
        for(int col=0; col<2*row; col++)
            cout << "  ";
        for(int col=0; col<N-row; col++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}