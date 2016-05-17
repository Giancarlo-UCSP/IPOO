#include <iostream>
using namespace std;

class Point{
	
	private:
	
	int x, y ;
	
	public :
		
		Point (int u = 0, int v = 0) : x(u), y(v) {}
		
		int getX() { return x; }
		int getY() { return y; }
		
		void setX(int newX);
		void setY(int newY);
		
};

void Point::setX(int newX) { x = newX; }
void Point::setY(int newY) { y = newY; }

int main(){
	
	Point p(4, 10);
	
	cout << p.getX() << ", " << p.getY() << endl;
	
	p.setX(1);
	p.setY(2);
	
	cout << p.getX() << ", " << p.getY() << endl;
	
	return 0;
	
}
