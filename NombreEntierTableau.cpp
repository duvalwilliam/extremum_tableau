#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>

void chercher_extremum(int *tableau, int *min, int *max) {
	*max = tableau[1];
	*min = tableau[1];
	for (int i = 0; i < 10; i++) {
		if (tableau[i] > *max) {
			*max = tableau[i];
		}
		if (tableau[i] < *min) {
			*min = tableau[i];
		}
	}


}


int main()
{	
	int tableau[10];
	int min = 0, max = 0;
	std::cout << "Rentrez 10 entiers \n";
	for (int i = 0; i < 10; i = i ++) {		std::cin >> tableau[i];
	}
	std::cout << "\n";
	
	
	chercher_extremum(tableau, &min, &max);

	std::cout << "Le nombre maximum est donc ";
	std::cout << max;
	std::cout << "\n";
	std::cout << "Le nombre minimum est donc ";
	std::cout << min;
}