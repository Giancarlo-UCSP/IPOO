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

//4.3
class PointArray{
private:
	Point *p;
	int Tamano;
public:
	PointArray();
	PointArray(const Point points[], const int Tamano);
	PointArray(const PointArray &pv);
	~PointArray();
};

//4.4
class PointArray{
private:
	Point *p;
	int Tamano;
	void resize(int numero);
public:
	PointArray();
	PointArray(const Point points[], const int Tamano);
	PointArray(const PointArray &pv);
	~PointArray();
};
