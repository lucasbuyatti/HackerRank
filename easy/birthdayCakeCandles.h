#pragma once
#include "../include.h"

// Averiguar {1,2,1,2,2} cual es el mas grande del vector. Contar cuantos mas grandes hay.
// 3

int birthdayCakeCandles(vector<int> candles) {
	int n = candles.size();
	int max = 0;
	int res = 0;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			max = candles[i];
		}

		if (candles[i] > max) {
			res = 0;
		}

		if (candles[i] >= max) {
			max = candles[i];
			res++;
		}
	}
	return res;
}