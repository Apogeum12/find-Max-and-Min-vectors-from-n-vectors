#include <iostream>
#include "MaxMinVec.hpp"

// Implementacja wektora
int main(void) {
	std::cout << "Enter number rows and columns \n";
	int row, col;
	std::vector<std::vector<double>> A;
	std::cin >> row >> col;
	std::cout << "Enter the Matrix: \n";
	for (int i = 0; i < row; i++) {
		std::vector<double> spr;
		for (int j = 0; j < col; j++) {
			double wart;
			std::cin >> wart;
			spr.push_back(wart);
		}
		A.push_back(spr);
	}
	//Sprawdzenie dzialania:
	MaxMinVec *mmV;
	mmV = new MaxMinVec(A);
	mmV->printToConsole();

	std::cout << "\n";
	system("pause");
	return 0;
}