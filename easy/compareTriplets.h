#pragma once
#include "../include.h"

vector<int> compareTriplets(vector<int> a, vector<int> b) {
	vector<int> result;

	int alice = 0;
	int bob = 0;

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (j == i) {
				if (a[i] > b[j]) {
					alice += 1;
				}
				else if (a[i] < b[j]) {
					bob += 1;
				}

			}
		}
	}
	result.push_back(alice);
	result.push_back(bob);

	return result;


}