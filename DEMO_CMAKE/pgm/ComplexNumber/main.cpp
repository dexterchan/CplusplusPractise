#include <iostream>
#include <fstream>
#include "ComplexNumber.h"


void testWithoutSmartPtr(){
    std::cout<<"Testing Complex Number"<<std::endl;
    ComplexNumber * c1=NULL;
    c1 = new ComplexNumber(1,2);
    ComplexNumber * c2 = new ComplexNumber(2,-5);
    std::cout<<*c1<<std::endl;
    std::cout<<(*c1)+(*c2)<<"="<<*c1<<" + "<<*c2<<std::endl;
    std::cout<<((*c1)+=(*c2))<<std::endl;
    std::cout<<(*c1)<<std::endl;
    std::cout<<"("<<*c1<<")"<<"-"<<"("<<*c2<<")"<<"="<<((*c1)-(*c2))<<std::endl;
    bool b = (*c1)!=(*c2);
    
    std::cout<<"Ref Counter:"<<std::endl;
    std::cout<<"Ref counter c1:"<<(++(*c1)).getCounter()<<std::endl;
    std::cout<<"Ref counter c1 finish:"<<c1->getCounter()<<std::endl;
    std::cout<<"Ref counter c1:"<<((*c1)++).getCounter()<<std::endl;
    std::cout<<"Ref counter c1 finish:"<<c1->getCounter()<<std::endl;
}

void testSmartStr(){
    std::cout<<"Testing Complex Number with smart pointer"<<std::endl;
    std::unique_ptr<ComplexNumber> c1 (new ComplexNumber(1,2));
    std::cout<<*c1<<std::endl;
}

int main (int argc, char** argv){

    testSmartStr();

	return 0;
}
