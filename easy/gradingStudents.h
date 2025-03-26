#pragma once
#include "../include.h"

//vector<int> gradingStudents(vector<int> grades) {
//	size_t n = grades.size();
//
//	for (size_t i = 0; i < n; i++) {
//		if (i < 38) {
//
//		}
//	}
//}

// Todos reciben un grado del cero al cien
// menores a cuarenta fallan el grado
// redondear a un multiplo de 5 si esta 2 numeros por debajo del mismo.
// ejemplo
// numero 53
// esta 2 numeros del 55, cosa que es multiplo de 5
// entonces redondear a 55

void gradingStudentsdbg(vector<int> grades) {
	size_t n = grades.size();

	for (size_t i = 0; i < n; i++) {
		if (grades[i] <= 33) {
			cout << grades[i] << " ... " << (grades[i] % 5) << " ... " << 33 << endl;
		}
		else if (grades[i] % 5 == 3) {
			cout << grades[i] << " ... " << (grades[i] % 5) << " ... " << grades[i] + 2 << endl;
		}
		else if (grades[i] % 5 == 4) {
			cout << grades[i] << " ... " << (grades[i] % 5) << " ... " << grades[i] + 1 << endl;
		}
		else {
			cout << grades[i] << " ... " << (grades[i] % 5) << " ... " << grades[i] << endl;
		}




	}
}

