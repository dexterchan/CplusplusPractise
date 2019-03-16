#include <iostream>
#include <ComplexNumber.h>

ComplexNumber::ComplexNumber(double real,double img){
	this->_real=real;
	this->_img=img;
	this->_refcounter=0;
}
ComplexNumber::ComplexNumber(const ComplexNumber& c){
	this->_real=c._real;
	this->_img=c._img;
	this->_refcounter=c._refcounter;
}
ComplexNumber::~ComplexNumber(){

}

std::ostream &operator<<(std::ostream &output, const ComplexNumber& c){
	output<<&c;
	return output;
}
std::ostream &operator<<(std::ostream &output, const ComplexNumber* c){
	output<<c->_real;
	if(c->_img>0){
		output<<"+";
	}
	if(c->_img!=0){
		output<<c->_img<<"j";
	}
	return output;
}
ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b){
	ComplexNumber tmp(a);

	tmp._real-=b._real;
	tmp._img-=b._img;
	return tmp;
}
ComplexNumber ComplexNumber::operator +(const ComplexNumber &c){
	ComplexNumber tmp(*this);

	tmp._real+=c._real;
	tmp._img+=c._img;

	return tmp;
}
ComplexNumber& ComplexNumber::operator+=(const ComplexNumber& c){
	this->_real+=c._real;
	this->_img+=c._img;
	return (*this);
}
bool ComplexNumber::operator==(const ComplexNumber& c) const{
	return (this->_real==c._real)&&(this->_img==c._img);
}
bool ComplexNumber::operator!=(const ComplexNumber& c) const{
	return !(*this==c);
}

ComplexNumber& ComplexNumber::operator++(){
	this->_refcounter++;

	return *this;
}

ComplexNumber ComplexNumber::operator++(int cnt){
	ComplexNumber c(*this);

	this->_refcounter++;

	return c;
}

int ComplexNumber::getCounter(){
	return this->_refcounter;
}
