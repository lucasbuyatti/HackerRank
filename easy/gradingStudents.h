#pragma once
#include "../include.h"


/*


				-------------- The problem --------------

HackerLand University has the following grading policy:

Every student receives a grade in the inclusive range from 0 to 100.

Any grade less than 40 is a failing grade.

Sam is a professor at the university and likes to round each student's grade according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.

If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.

Examples:

grade = 84 rounds to 85 (85 - 84 is less than 3)

grade = 29 do not round (result is less than 38)

grade = 57 do not round (60 - 57 is 3 or higher)

Given the initial value of grade for each of Sam’s n students, write code to automate the rounding process.

Function Description
Complete the function gradingStudents with the following parameter(s):

int grades[n]: the grades before rounding

Returns

int[n]: the grades after rounding

Input Format
The first line contains a single integer, n, the number of students.

Each line i of the n subsequent lines contains a single integer, grades[i].

Constraints
1 <= n <= 60

0 ≤ grades[i] <= 100

Sample Input 0

4
73
67
38
33

Sample Output 0

75
67
40
33

Explanation

Student 1 received a 73, and the next multiple of 5 from 73 is 75.
Since 75 − 73 < 3, the student's grade is rounded to 75.

Student 2 received a 67, and the next multiple of 5 from 67 is 70.
Since 70 − 67 = 3, the grade will not be modified and the student's final grade is 67.

Student 3 received a 38, and the next multiple of 5 from 38 is 40.
Since 40 − 38 < 3, the student's grade will be rounded to 40.

Student 4 received a grade below 33, so the grade will not be modified and the student's final grade is 33.
*/

/*

							-------------- Solution --------------

My solution was: if the grade is less than 38, I don’t round it and leave it as it is.

If that condition isn’t met, then I check if the grade % 5 is 3 — that means the grade is 2 away from the next multiple of 5.

Then, if the grade % 5 is 4, it means it’s 1 away from the next multiple of 5.

Finally, if it doesn’t meet any of those two conditions, it means it’s not within the rounding range, so I just print it without rounding.
*/


vector<int> gradingStudents(vector<int> grades) {
	size_t n = grades.size();

	vector<int> res;

	for (size_t i = 0; i < n; i++) {

		if (grades[i] < 38) { // si es menor a 38, no se redondea.
			res.push_back(grades[i]);
		}
		else {
			if (grades[i] % 5 == 3) { // Si el modulo 5 de grades[i] es igual a 3, significa que esta a 2 numeros del redondeo
				res.push_back(grades[i] + 2);
			} else if(grades[i] % 5 == 4) { // Si el modulo 5 de grades[i] es igual a 4, significa que esta a 1 numeros del redondeo.
				res.push_back(grades[i] + 1);
			}
			else {
				res.push_back(grades[i]); // si no cumple ni una de las 2 anteriores, significa que esta fuera del rango de redondeo al multiplo de 5
			}
		}

	}

	return res;
}




















// Todos reciben un grado del cero al cien
// menores a cuarenta fallan el grado
// redondear a un multiplo de 5 si esta 2 numeros por debajo del mismo.
// ejemplo
// numero 53
// esta 2 numeros del 55, cosa que es multiplo de 5
// entonces redondear a 55

//void gradingStudentsdbg(vector<int> grades) {
//	size_t n = grades.size();
//
//	for (size_t i = 0; i < n; i++) {
//		if (grades[i] < 33) continue;
//
//		if (grades[i] % 5 == 3) {
//			cout << grades[i] << " ... " << (grades[i] % 5) << " ... " << grades[i] + 2 << endl;
//		}
//		else if (grades[i] % 5 == 4) {
//			cout << grades[i] << " ... " << (grades[i] % 5) << " ... " << grades[i] + 1 << endl;
//		}
//		else {
//			cout << grades[i] << " ... " << (grades[i] % 5) << " ... " << grades[i] << endl;
//		}
//	}
//}

