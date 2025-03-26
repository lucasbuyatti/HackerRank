#pragma once
#include "../include.h"

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
			}
			else {
				res = s;
			}

		}
	}

	return res;
}