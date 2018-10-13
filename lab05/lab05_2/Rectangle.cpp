#include "Rectangle.h"
#include "Square.h"
#include <iostream>
void Rectangle::convert(Square _sqr){
  this->width = _sqr.side;
  this->height = _sqr.side;
}
int Rectangle::area(){
 return this->width * this->height;
}
void Rectangle::print(){
 std::cout << "width: " << this->width << " height: " << this->height << ", and area:" << this->area() << std::endl;
}
