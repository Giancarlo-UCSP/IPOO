#include <iostream>
#include "geometry.h"
using namespace std;

Point::Point(int u = 0, int v = 0) : x(u), y(v) {}

int Point::getX() const{
	
	return x;
	
}

int Point::getY() const{
	
	return y;
	
}

void Point::setX(const int newX){
	
	x = newX;
	
}
void Point::setY(const int newY){
	
	y = newY;
	
}

int main(){
	
	Point p(4, 10);
	
	cout << p.getX() << ", " << p.getY() << endl;
	
	p.setX(1);
	p.setY(2);
	
	cout << p.getX() << ", " << p.getY() << endl;
	
	return 0;
	
}
