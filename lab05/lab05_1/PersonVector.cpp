//#include "Person.h"
#include "PersonVector.h"
#include <iostream>
#include <string>
void PersonVector::addPersons(){
  int person_num;
  std::cout<<"How many person(s) to add?";
  std::cin >>person_num;
  for (int i = 0; i<person_num ;i++){
    std::string _name;
    int _age;
    std::cout << i+1 << " Person to add:";
    std::cin >> _name;
    std::cin >> _age;
    Person P(_name, _age);
    this->person_vec.push_back(P);
  }
}
void PersonVector::displayPersons(){
  for(int i = 0; i < this->person_vec.size();i++){
    Person P = person_vec[i];
    std::cout << "name: " << P.get_name() << " age: " << P.get_age() << std::endl; 
  }
}
