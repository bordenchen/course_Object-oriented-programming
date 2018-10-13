#ifndef SQUARE
#define SQUARE
 class Rectangle;
 class Square{
  friend class Rectangle;
  private:
   int side;
  public:
   Square(int _side);
 };
#endif
