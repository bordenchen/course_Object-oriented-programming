#include "hw05_1.h"
#include <iostream>
int MyClass::findMin(const std::vector<int>& vec, int start) {
	int min_value = start;
	for (int i = start; i < vec.size(); i++) {
		if (vec[i] <= vec[min_value]) {
			min_value = i;
		}
	}
	return min_value;
}
void MyClass::swithPos(std::vector<int>& vec, int pos1, int pos2) {
	int temp = vec[pos1];
	vec[pos1] = vec[pos2];
	vec[pos2] = temp;
}

void MyClass::selectionSort(std::vector<int>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		int min_pos = findMin(vec, i);
		swithPos(vec, i, min_pos);
	}
}

void MyClass::printOut(std::string s, const std::vector<int>& vec)
{
	std::cout << s.c_str() << ": ";
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}
