#pragma once
#include "../include.h"

void plusMinus(vector<int> arr) {
	int n = arr.size();
	int amountZeros = 0;
	int amountPositives = 0;
	int amountNegatives = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			amountZeros++;
		}
		else if (arr[i] > 0) {
			amountPositives++;
		}
		else {
			amountNegatives++;
		}
	}

	cout << fixed;
	cout << setprecision(6) << static_cast<double>(amountPositives) / n << endl;
	cout << setprecision(6) << static_cast<double>(amountNegatives) / n << endl;
	cout << setprecision(6) << static_cast<double>(amountZeros) / n << endl;
}
