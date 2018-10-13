#include "Person.h"
#include <iostream>
#include <string>
Person::Person(std::string _name, int _age){
 this->name = _name;
 this->age = _age;
}
std::string Person::get_name(){
  return this->name;	
}
int Person::get_age(){
  return this->age;
}
