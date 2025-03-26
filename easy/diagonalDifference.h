#pragma once
#include "../include.h"

int diagonalDifference(vector<vector<int>> arr) {
	int n = arr.size();
	int sumPrimary = 0, sumSecondary = 0;

	for (int i = 0; i < n; i++) {
		sumPrimary += arr[i][i];
		sumSecondary += arr[i][n - 1 - i];
	}

	return abs(sumPrimary - sumSecondary);
}