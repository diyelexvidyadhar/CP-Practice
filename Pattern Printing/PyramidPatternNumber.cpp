// PyramidPatternNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

/*

1
121
12321
1234321
123454321

*/
void palindromePyramidNumbers(int rows) {

	for (int i = 0; i < rows; i++) {
		int mid = i;
		int k = 1;
		for (int j = 0; j < (i * 2 + 1); j++) {
			if (j < mid) {
				cout << k;
				k++;
			}
			else {
				cout << k;
				k--;

			}

		}
		cout << endl;
	}
}
/*

1
12
123
1234
12345
123456

*/
void halfPyramidNumbers(int rows) {
	for (int i = 0; i < rows; i++) {
		int count = 1;
		for (int j = 0; j <= i; j++) {
			cout << count;
			count++;
		}
		cout << endl;
	}
}

/*

1
12
1 3
1  4
1   5
123456

*/
void hollowHalfPyramid(int rows) {
	int space = 0;
	for (int i = 0; i < rows; i++) {
		int count = 1;
		for (int j = 0; j <= i; j++) {
			int temp = 0;
			if (i == rows - 1) {
				cout << count;
				count++;
			}
			else if (j == 0 || j == i) {
				cout << count;
				count = i + 1;
			}
			else if (space > temp) {
				cout << " ";
				temp++;
			}
		}
		space++;
		cout << endl;

	}
}

/*
	1
   121
  12321
 1234321
123454321
*/
void palindromeFullPyramidNumber(int rows) {
	int no = 1;
	int spaces = rows;
	for (int i = 0; i < rows; i++) {
		int mid = i;
		int k = 1;
		for (int k = 1; k < spaces; k++) {
			cout << " ";
		}

		for (int j = 0; j < (i * 2 + 1); j++) {
			if (j < mid) {
				cout << k;
				k++;
			}
			else {
				cout << k;
				k--;

			}

		}
		spaces--;
		cout << endl;

	}

}

/*

A
ABA
ABCBA
ABCDCBA
ABCDEDCBA

*/

void palindromeAlphabet(int rows) {

	for (int i = 0; i < rows; i++) {
		int mid = i;
		int k = 65;
		for (int j = 0; j < (i * 2 + 1); j++) {
			if (j < mid) {
				cout << char(k);
				k++;
			}
			else {
				cout << char(k);
				k--;

			}

		}
		cout << endl;
	}
}


int main()
{
	palindromePyramidNumbers(5);
	cout << endl;
	palindromeFullPyramidNumber(5);
	cout << endl;
	palindromeAlphabet(5);
	cout << endl;
	halfPyramidNumbers(6);
	cout << endl;
	hollowHalfPyramid(6);
}

