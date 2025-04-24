#pragma once
#include "../include.h"

/*


				-------------- The problem --------------
Problem Statement:

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example:

arr = [1, 3, 5, 7, 9]
The minimum sum is 1 + 3 + 5 + 7 = 16 and the maximum sum is 3 + 5 + 7 + 9 = 24.
The function prints:

16 24
Function Description

Complete the miniMaxSum function with the following parameter(s):

arr[5]: an array of 5 integers

Print

Print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 elements. No value should be returned.

Note: For some languages, like C, C++, and Java, the sums may require that you use a long integer due to their size.

Input Format

A single line of five space-separated integers.

Constraints

Sample Input

1 2 3 4 5
Sample Output

10 14
Explanation:

The numbers are 1, 2, 3, 4, and 5.
Calculate the following sums using four of the five integers:

Sum everything except 1 -> 2 + 3 + 4 + 5 = 14

Sum everything except 2 -> 1 + 3 + 4 + 5 = 13

Sum everything except 3 -> 1 + 2 + 4 + 5 = 12

Sum everything except 4 -> 1 + 2 + 3 + 5 = 11

Sum everything except 5 -> 1 + 2 + 3 + 4 = 10

From those, the minimum is 10 and the maximum is 14.

Hint:
Beware of integer overflow! Use a 64-bit integer to store the sums.

*/

/*

							-------------- Solution --------------

This function finds the minimum and maximum sums that can be obtained by summing four out of five numbers from the array.

- The 'avoid' variable is used to skip a different number on each iteration of the first for loop.
- In the second for loop, all elements of the array are summed except the one that needs to be skipped.
- After each sum, the function checks if it's the smallest ('min') or largest ('max') sum found so far.
- Finally, the minimum and maximum sums are printed.
*/

void miniMaxSum(vector<int> arr) {

	long sum = 0; 
	long min = 0; 
	long max = 0;
	int avoid = 0;

	for (int i = 0; i < arr.size(); i++) {
		sum = 0; // reiniciar suma
		for (int j = 0; j < arr.size(); j++) {
			if (avoid != j) { // Si el indice actual no es el que estamos evitando, sumamos
				sum += arr[j];
			}
		}
		avoid++;

		// Inicio de comparacion, asignando la primera suma a min y max
		if (i == 0) {
			min = sum;
			max = sum;
		}

		// Si sum es mayor al al valor maximo, actualizamos
		if (sum > max) {
			max = sum;
		}
		// Si sum es menor al valor maximo, actualizamos
		if (sum < min) {
			min = sum;
		}
	}
	cout << min << " " << max << endl;
}