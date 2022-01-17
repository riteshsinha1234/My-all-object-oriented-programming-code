#include <iostream>

using namespace std;

class Square
{
  public:
    int side;
    
    int area(int side);
    int perimeter(int side);
    
};

int Square::area(int side)
{
  return side*side;
}

int Square::perimeter(int side)
{
  return 4*side;
} 

int main()
{
  //creating object of Square class
  Square s;
  
  s.side = 5;
  
  cout << "Area of a square of side "<< s.side << " is " << s.area(s.side) << "\n";
  cout << "Perimetr of a square of side " << s.side << " is " << s.perimeter(s.side) ;
 	
  return 0;
}
