#include "MaxMinVec.hpp"

MaxMinVec::MaxMinVec(std::vector<std::vector<double>> A) {
	this->A = A;
	this->searchMaxMinA();
}

void MaxMinVec::searchMaxMinA() {
	size_t size_row = A.size();
		std::vector<double> max_a;
		std::vector<double> min_a;
		double compare1, compare2;
		double sum1 = 0, sum2 = 0;
		int ite1 = 0, ite2 = 0;
		for (int i = 0; i < size_row; i++) {
			size_t size_col = A.at(i).size();
			for (int j = 0; j < size_col; j++) {
				sum1 += A.at(i).at(j)*A.at(i).at(j);
				sum2 += A.at(i).at(j)*A.at(i).at(j);
			}
			max_a.push_back(sum1);
			min_a.push_back(sum2);
			sum1 = 0;
			sum2 = 0;
		}
	
		compare1 = sqrt(max_a.at(0));
		compare2 = sqrt(min_a.at(0));
		for (int i = 0; i < max_a.size(); i++) {
			if (compare1 >= sqrt(max_a.at(i))) ite1;
			else { ite1 = i; compare1 = sqrt(max_a.at(i)); }
		}
		
		for (int i = 0; i < min_a.size(); i++) {
			if (compare2 <= sqrt(min_a.at(i))) ite2;
			else { ite2 = i; compare2 = sqrt(min_a.at(i)); }
		}

	for (int i = 0; i < this->A.at(ite1).size(); i++) {
		this->MaxA.push_back(this->A.at(ite1).at(i));
	}
	
	for (int i = 0; i < this->A.at(ite2).size(); i++) {
		this->MinA.push_back(this->A.at(ite2).at(i));
	}
	
	min_a.clear();
	max_a.clear();
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
