#pragma once
#include "../include.h"

/*

				-------------- The problem --------------
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
Print the decimal value of each fraction on a new line with 6 places after the decimal.

Note: This challenge introduces precision problems. 
The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.
*/

/*

				-------------- Solution --------------

The solution was:

If the value is 0, I increment the variable amountZeros by 1.
If the value is positive (greater than 0), I increment the variable amountPositives by 1.
If the value is negative, I increment the variable amountNegatives by 1.

After counting the number of positive, negative, and zero elements:

I print the results with a precision of 6 decimal places using setprecision(6).
I divide each count by n (the size of the array) to calculate the fraction (or percentage) of positive, negative, and zero elements in the array.
I do this because I'm interested in the proportion of each type of number in the array.

*/

void plusMinus(vector<int> arr) {
	int n = arr.size();
	int amountZeros = 0;
	int amountPositives = 0;
	int amountNegatives = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) { // si es igual a 0 aumentamos la cantidad de ceros
			amountZeros++;
		}
		else if (arr[i] > 0) { // si es positivo aumentamos la cantidad de positivos
			amountPositives++;
		}
		else {
			amountNegatives++; // si es negativo aumentamos la cantidad de negativos
		}
	}

	cout << fixed; // fixed para el tipo de notacion / notation format
	cout << setprecision(6) << static_cast<double>(amountPositives) / n << endl;
	cout << setprecision(6) << static_cast<double>(amountNegatives) / n << endl;
	cout << setprecision(6) << static_cast<double>(amountZeros) / n << endl;
}
