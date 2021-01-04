#include <iostream>

using namespace std;
class Point{
  private:
            int x;
            int y;
public:
Point(int x=0, int y=0): x{x}, y{y} {}
Point operator + (const Point& rhs){
    Point p;
    p.x=x+rhs.x;
    p.y=y+rhs.y;
    return p;
}
Point add(const Point& rhs){
    Point p;
    p.x=x+rhs.x;
    p.y=y+rhs.y;
    return p;
}
void display(){
    cout<<"X: "<< x <<" Y: "<<y<<endl;
}
};

int main( )
{
	Point p1(1,2), p2(4,5);
    Point p3= p1+p2; // need to use operator overloading
    Point p4=p1.add(p2);
    //Point p3= p1.operator::+() + p2 (is passing to p1 as perameter)
    p3.display();
    p4.display();
	return 0;
}
