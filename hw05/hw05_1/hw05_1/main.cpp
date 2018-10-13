#include "hw05_1.h"
#include <iostream>
#include <vector>
int main() {
	MyClass myclass;
	std::vector<int> v;
	int t;
	std::cout << "Please input the numbers you wish to sort, and stop with any alphabet: ";
	while (std::cin >> t) v.push_back(t);
	myclass.printOut("Original", v);
	myclass.selectionSort(v);
	myclass.printOut("Sorted", v);
	return 0;
}