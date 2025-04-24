#pragma once
#include "../include.h"

// Function to calculate the sum of all elements in the array

int simpleArraySum(vector<int> ar) {
	int sum = 0;
	for (int i = 0; i <= ar.size(); i++) {
		sum += ar[i];
	}
	return sum;
}