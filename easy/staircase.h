#pragma once
#include "../include.h"

/*
			-------------- The problem --------------
Its base and height are both equal to n.
It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size n.
*/

/*
			-------------- The solution --------------

In simple terms, what I’m doing is printing a staircase made of # symbols:

I start with a row that has many spaces and only one #.

For each subsequent row, I reduce the number of spaces and add more #.

I continue this until I’ve printed all the necessary rows to form the staircase.

*/


void staircase(int n) {

	int last = n - 1;

	for (int i = 0; i < n; i++) { 
		for (int j = 1; j <= n; j++) { // filas
			if (j > last) { // si j es igual al ultimo - 1, entonces imprimir #
				cout << "#";
			}
			else { // Si no se cumple, espacio
				cout << " ";
			}
		}
		last--; // Decremento last para poder imprimir mas almoadillas #
		cout << endl;
	}
}