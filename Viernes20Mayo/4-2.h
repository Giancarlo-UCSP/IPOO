//4.1
class PointArray{
private:
	Point *p;
	int Tamano;
};

//4.2
class PointArray{
private:
	Point *p;
	int Tamano;
public:
	PointArray();
	PointArray(const Point points[], const int Tamano);
	PointArray(const PointArray &pv);
};
