#include "MaxMinVec.hpp"

MaxMinVec::MaxMinVec(std::vector<std::vector<double>> A) {
	this->A = A;
	this->searchMaxA();
	this->searchMinA();
}

void MaxMinVec::searchMaxA() {
	size_t size_row = A.size();
		std::vector<double> max_a;
		double compare;
		double sum = 0;
		int ite = 0;
		for (int i = 0; i < size_row; i++) {
			size_t size_col = A.at(i).size();
			for (int j = 0; j < size_col; j++) {
				sum += A.at(i).at(j)*A.at(i).at(j);
			}
			max_a.push_back(sum);
			sum = 0;
		}
		compare = sqrt(max_a.at(0));
		for (int i = 0; i < max_a.size(); i++) {
			if (compare >= sqrt(max_a.at(i))) ite;
			else { ite = i; compare = sqrt(max_a.at(i)); }
		}

	for (int i = 0; i < this->A.at(ite).size(); i++) {
		this->MaxA.push_back(this->A.at(ite).at(i));
	}
	max_a.clear();
}

void MaxMinVec::searchMinA() {
	size_t size_row = A.size();
	std::vector<double> min_a;
	double compare = 0;
	double sum = 0;
	int ite = 0;
	for (int i = 0; i < size_row; i++) {
		size_t size_col = A.at(i).size();
		for (int j = 0; j < size_col; j++) {
			sum += A.at(i).at(j)*A.at(i).at(j);
		}
		min_a.push_back(sum);
		sum = 0;
	}
	compare = sqrt(min_a.at(0));
	for (int i = 0; i < min_a.size(); i++) {
		if (compare <= sqrt(min_a.at(i))) ite;
		else { ite = i; compare = sqrt(min_a.at(i)); }
	}

	for (int i = 0; i < this->A.at(ite).size(); i++) {
		this->MinA.push_back(this->A.at(ite).at(i));
	}
	min_a.clear();
}

void MaxMinVec::printToConsole() {
	std::cout << "Max_vector Equal is: \n";
	for (int i = 0; i < this->getMaxA().size(); i++) {
		std::cout << this->getMaxA().at(i) << " ";
	}
	std::cout << "\n";

	std::cout << "Min_vector Equal is: \n";
	for (int i = 0; i < this->getMinA().size(); i++) {
		std::cout << this->getMinA().at(i) << " ";
	}
}