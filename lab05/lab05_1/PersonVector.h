#ifndef PERSONVECTOR
#define PERSONVECTOR
#include "Person.h"
#include "vector"
class PersonVector{
 private:
  std::vector<Person> person_vec;
 public:
  void addPersons();
  void displayPersons();
};
#endif
