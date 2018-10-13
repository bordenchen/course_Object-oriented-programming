#include "Rectangle.h"
#include "Square.h"
#include <iostream>
int main(){
  std::cout << "Please input the side of the square: ";
  int side;
  std::cin >> side;
  Rectangle rect;
  Square sqr(side);
  rect.convert(sqr);
  
  std::cout << "The converted Rectangle has: " << std::endl;
  rect.print();
  return 0;
}
