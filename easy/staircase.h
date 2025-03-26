#pragma once
#include "../include.h"

void staircase(int n) {

	int last = n - 1;

	for (int i = 0; i < n; i++) { // columnas
		for (int j = 1; j <= n; j++) { // filas
			if (j > last) {
				cout << "#";
			}
			else {
				cout << " ";
			}
		}
		last--;
		cout << endl;
	}
}