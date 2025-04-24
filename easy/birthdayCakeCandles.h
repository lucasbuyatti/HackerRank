#pragma once
#include "../include.h"

// The problem:
/*
You are in charge of the cake for a child's birthday. 
It will have one candle for each year of their total age.
They will only be able to blow out the tallest of the candles.
Your task is to count how many candles are the tallest.

Example

candles = [4, 4, 1, 3]

The tallest candles are 4 units high.There are 2 candles with this height, so the function should return 2.

Function Description

Complete the function birthdayCakeCandles with the following parameter(s) :

	int candles[n] : the candle heights
	Returns
	int : the number of candles that are tallest

	Input Format

	The first line contains a single integer, , the size of candlesp[].
	The second line contains  space - separated integers, where each integer  describes the height of candles[i].

	Constraints
	1 <= n <= 10 ^ 5
	1 <= candles[i] <= 10 ^ 7

	Sample Input 0

	4
	3 2 1 3

	Sample Output 0

	2

*/

// How i solved it
/*
Reasoning: 
My reasoning was simple: 
Try to find the highest number. 
If I find a number greater than the previous maximum, I reset res to 0 because I have found a new maximum. 
If I find a number equal to the maximum, I only increment res to count how many times that maximum value appears.
*/

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
