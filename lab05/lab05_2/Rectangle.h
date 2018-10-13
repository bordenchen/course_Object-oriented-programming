#ifndef RECT
#define RECT 
#include "Square.h"
class Rectangle{
 public:
  int area();
  void convert(Square _sqr);
  void print();
 private:
  int width;
  int height;
};
#endif 
