#pragma once
#include "../include.h"

/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix arr is shown below :

1 2 3
4 5 6
9 8 9

The left - to - right diagonal = 1 + 5 + 9 = 15.
The right - to - left diagonal = 3 + 5 + 9 = 17.
Their absolute difference is |15 - 17| = 2.

Function description

Complete the diagonalDifference function with the following parameter:

int arr[n][m]: a 2-D array of integers

Return

	int: the absolute difference in sums along the diagonals

	Input Format

	The first line contains a single integer, n, the number of rows and columns in the square matrix arr.
	Each of the next n lines describes a row, arr[i], and consists of n space - separated integers .

	Constraints

	-100 <= arr[i][j] <= 100

	Sample Input

	STDIN       Function
	------      --------
	3           arr[][] sizes n = 3, m = 3
	11 2 4      arr = [[11, 2, 4], [4, 5, 6], [10, 8, -12]]
	4 5 6
	10 8 - 12

	Sample Output

	15
	
	Explanation

	The primary diagonal is:

	11
		5
		  -12

	Sum across the primary diagonal: 11 + 5 - 12 = 4.

	The secondary diagonal is:

		   4
		5
	10

	Sum across the secondary diagonal 4 + 5 + 10 = 10:
	Difference: |4 - 19| = 15

	Note: | x | is the absolute value of x.
*/

// How i solved it
/*
For this problem, my idea was to give values to the variables sumPrimary and sumSecondary using just one for loop. How?

For the primary diagonal: when the indexes i and j match, you're going through the main diagonal.

For the secondary diagonal: I took the size of the array, subtracted 1, and then subtracted the current row index i.

If that’s not clear, here’s what I mean: when you're accessing elements from the top-right to the bottom-left, the column index decreases while the row index increases. So for each row i, the column is (n - 1 - i).
*/


int diagonalDifference(vector<vector<int>> arr) {
	int n = arr.size();
	int sumPrimary = 0, sumSecondary = 0;

	for (int i = 0; i < n; i++) {
		sumPrimary += arr[i][i];
		sumSecondary += arr[i][n - 1 - i];
	}

	return abs(sumPrimary - sumSecondary);
}
