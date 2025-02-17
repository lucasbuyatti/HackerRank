// HackerRank.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int simpleArraySum(vector<int> ar) {
	int sum = 0;
	for (int i = 0; i <= ar.size(); i++) {
		sum += ar[i];
	}
	return sum;
}

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

int diagonalDifference(vector<vector<int>> arr) {
	int n = arr.size();
	int sumPrimary = 0, sumSecondary = 0;

	for (int i = 0; i < n; i++) {
		sumPrimary += arr[i][i];
		sumSecondary += arr[i][n - 1 - i];
	}

	return abs(sumPrimary - sumSecondary);
}

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

string timeConversion(string s) {
	string res;
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == 'P') {
			string sub = s.substr(0, 2);

			if (sub == "12") {
				s.erase(s.end() - 1);
				s.erase(s.end() - 1);
				return s;
			}
			else {
				const char* hhstring = sub.c_str();
				int hhint = atoi(hhstring);

				s.erase(s.end() - 1);
				s.erase(s.end() - 1);
				s.erase(s.begin(), s.begin() + 2);

				res = to_string(hhint + 12) + s;
			}
			
		}
		else if (s.at(i) == 'A') {
			s.erase(s.end() - 1);
			s.erase(s.end() - 1);

			string sub = s.substr(0, 2);

			if (sub == "12") {
				s.erase(s.begin(), s.begin() + 2);
				res = "00" + s;
			} else {
				res = s;
			}

		}
	}

	return res;
}




int main()
{
	return EXIT_SUCCESS;
}

