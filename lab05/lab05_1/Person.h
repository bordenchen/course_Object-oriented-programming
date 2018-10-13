#ifndef PERSON
#define PERSON
#include <string>
class Person{
private:
 std::string name;
 int age;
public:
 Person(std::string _name, int _age);
 std::string get_name();
 int get_age();
}; 

#endif 
