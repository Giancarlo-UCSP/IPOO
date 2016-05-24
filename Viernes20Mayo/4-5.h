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

//4.5
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

	void push_back(const Point &p);
	void insert(const int position, const int Point &p);
	void remove(const int pos);
	const int getSize() const;
	void clear();
	
	
};


