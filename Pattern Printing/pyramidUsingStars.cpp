#include <iostream>

using namespace std;

/*   Half Pyramid 
     
     *
     *  *
     *  *  *
     *  *  *  *
     *  *  *  *  * 
 
*/

void halfPyramid(int rows) {
    for(int i = 0;i < rows; i++) {
        for( int j = 0; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}
/*
 *    Inverted Half Pyramid
      *  *  *  *  *  *
      *  *  *  *  *
      *  *  *  * 
      *  *  *   
      *  *   
      *
*/
void invertedHalfPyramid(int rows) {
    for(int i=rows-1; i >= 0; i-- ) {
        for(int j = 0; j <= i; j++ ) {
            cout << " * " ;
        }
        cout << endl;
    }
}
/*
 *   Hollow Inverted Half Pyramid
      *  *  *  *  *  *
      *           *
      *        * 
      *     *   
      *  *   
      *
*/
void hollowInvertedHalfPyramid(int rows) {
    for(int i=rows-1; i >= 0; i-- ) {
        for(int j = 0; j <= i; j++ ) {
            if(i == rows-1) {
               cout << " * " ; 
            } else if(j == 0 || j == i ) {
                cout << " * ";
            } else {
                cout << "   ";
            }
            
        }
        cout << endl;
    }
}
/* 
 *   Full Pyramid
          *
         * *
        * * *
       * * * *
      * * * * *
     * * * * * *
 * */
void fullPyramid(int rows) {
    int mid = rows/2;
    int noStar = 0;
    int space = (mid - 1)*2;
    
    
    for(int i = 0; i < rows; i++) {
        noStar = i;
        for(int j = 0; j < rows; j++) {
            if(j <= space) {
                cout << " ";
            } else if(noStar >= 0 ) {
                cout << "* ";
                noStar--;
            }
        }
        space--;
        cout << endl;
    }
}
/* 
 *  Inverted Full Pyramid
       * * * * * *
        * * * * *
        * * * *
         * * *
          * *
           *
 * */
void invertedFullPyramid(int rows) {
    int mid = rows/2;
    int noStar = 0;
    int space = 0;
    
     for(int i = rows -1 ; i >= 0; i--) {
        noStar = i;
        for(int j = 0; j < rows; j++) {
            if(j <= space) {
                cout << " ";
            } else if(noStar >= 0 ) {
                cout << "* ";
                noStar--;
            }
        }
        space++;
        cout << endl;
    }
    
}
/* 
 *  Hollow Full Pyramid
          *
         * *
        *   *
       *     *
      *       *
     * * * * * *
 */
void hollowFullPyramid(int rows) {
    int mid = rows/2;
    int space = (mid - 1)*2;
    
    
    for(int i = 0; i < rows-1; i++) {
        for(int j = 0; j <= space; j++) {
            cout << " ";
        }
        cout << "*";
        int k = 0;
        while((i*2-1) > k ){
            cout << " ";
            k++;
        }
        if(i != 0) {
            cout << "*";
        }
        cout << endl;
        space--;
    }
    for(int i = 0; i < rows; i++){
        cout << "* ";
    }
}

int main(){
halfPyramid(6);
invertedHalfPyramid(6);
hollowInvertedHalfPyramid(6);
fullPyramid(6);
invertedFullPyramid(6);
hollowFullPyramid(6);
 return 0;
}


