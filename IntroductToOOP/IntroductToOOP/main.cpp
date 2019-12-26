#include<iostream>

//#define Construct

class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	//			Constructors:
	Point(double x= 0, double y=0 )
	{
		this->x = x;
		this->y = y;
		std::cout << "DefaultConstruct:" << this << std::endl;
	}
	~Point()
	{
		std::cout << "Destruction:\t" << this << std::endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		std::cout << "CopyConstructor" << this << std::endl;

	}

	//		Operators:
	Point operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		std::cout << "CopyAssigment:" << this << std::endl;
		return *this;
	}

	Point& operator+=(const Point& other)
	{
		this->x += other.x;
		this->y += other.y;
		return *this;
	}

	/*Point operator+(const Point& other) const
	{
		Point result;
		result.x = this->x + other.x;
		result.y = this->y + other.y;
		return result;
	}*/


	//		Methods:
	void print() const
	{
		std::cout << "x = " << x << "\t" << "y = " << y << std::endl;
	}
	double distance(const Point& other) const
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance*x_distance + y_distance * y_distance);
			return distance;
	}

};

Point operator+(const Point& left, const Point& right)   
{
	Point result;
	result.set_x(left.get_x() + right.get_x());
	result.set_y(left.get_y() + right.get_y());
	return result;
}

double distance(const Point& A, const Point& B)
{
	double x_distance = B.get_x() - A.get_x();
	double y_distance = B.get_y() - A.get_y();
	double distance = sqrt(x_distance*x_distance + y_distance * y_distance);
	return distance;
}
void main()
{
setlocale(LC_ALL, "");
//int a;
	//
	//Point A;
	//A.x = 5;
	//A.y = 2;                                   
	//std::cout << A.x << "\t" << A.y << std::endl;
	//Point* pA = &A; //Объявление указателя на Point
	//std::cout << pA->x << "\t" << pA->y << std::endl;                  
	//std::cout << (*pA).x << "\t" << (*pA).y << std::endl;
Point A(5,2), B(8,3), C;

#ifdef Construct
	Point C = 5;
	C.print();
	Point E(5, 2);
	E.print();
	Point F = E;
	F.print();
	Point G;
	G = E;

#endif // Construct
	//Point A(5, 2);
	//Point B(8, 3);
	/*
	A.print();
	B.print();
	
	std::cout << A.distance(B) << std::endl;
	std::cout << distance(A, B) << std::endl;*/
	C = A + B;
	//operator+(B).operator+(C).operator+(A).print();
	C.print();
	A.print();
	B.print();
	
		

}                                                                                                                      
