#pragma once
#include "../include.h"

void miniMaxSum(vector<int> arr) {

	long sum = 0;
	long min = 0;
	long max = 0;
	int avoid = 0;

	for (int i = 0; i < arr.size(); i++) {
		sum = 0;
		for (int j = 0; j < arr.size(); j++) {
			if (avoid != j) {
				sum += arr[j];
			}
		}
		avoid++;

		if (i == 0) {
			min = sum;
			max = sum;
		}

		if (sum > max) {
			max = sum;
		}
		if (sum < min) {
			min = sum;
		}
	}
	cout << min << " " << max << endl;
}