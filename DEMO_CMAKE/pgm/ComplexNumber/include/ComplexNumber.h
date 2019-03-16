#include <list>
#include <math.h>
#include <iostream>


class ComplexNumber{
	friend std::ostream &operator<<(std::ostream &output, const ComplexNumber& c);
	friend std::ostream &operator<<(std::ostream &output, const ComplexNumber* c);
	friend ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b);

public:
	ComplexNumber(double real,double img);
	ComplexNumber(const ComplexNumber& c);
	~ComplexNumber();
	ComplexNumber operator+(const ComplexNumber& c);
	ComplexNumber& operator+=(const ComplexNumber& c);
	bool operator==(const ComplexNumber& c) const;
	bool operator!=(const ComplexNumber& c) const;
	ComplexNumber& operator++();
	ComplexNumber operator++(int);
	int getCounter();
private:
	double _real;
	double _img;
	int _refcounter;
};
