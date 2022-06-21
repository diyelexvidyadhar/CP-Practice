#include <iostream>

using namespace std;

/*   Solid Rectangle 
 *   * * * * * *
 *   * * * * * *
 *   * * * * * * 
 * 
 *   Hollow Rectangle
 *   * * * * * *  
 *   *         *
 *   * * * * * *
*/


void solidRectangle(int rows, int columns) {
   
    for(int i = 0; i < row; i++ ) {
        for(int j = 0; j < column; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}

void hollowRectangle(int rows, int columns) {
    for(int i = 0; i < rows; i++ ){
        for(int j = 0; j < columns; j++) {
            if(i == 0 || i == rows-1 ) {
                cout << " * ";
            } else if(j == 0 || j == columns-1 ){
               cout << " * ";  
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

int main(){
 solidRectangle(3,5);
 hollowRectangle(3,5);
 return 0;
}


