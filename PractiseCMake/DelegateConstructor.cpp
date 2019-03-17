#include <string>
#include <iostream>

using namespace std;
namespace delegateConstructor{
class class_a {
public:
    class_a() {}
    class_a(double d):m_double{d}{}
    class_a(string str) : m_string{ str } {}
    class_a(string str, double dbl) : class_a(str) { m_double = dbl; }

    // error C3511: a call to a delegating constructor shall be the only member-initializer
    //class_a(string str, double dbl) : class_a(str) , m_double{ dbl } {}

    double m_double{ 1.0 };
    string m_string{ m_double < 10.0 ? "alpha" : "beta" };
};
}


int testDelegateConstructor() {
    delegateConstructor::class_a a{ "hello", 2.0 };  //expect a.m_double == 2.0, a.m_string == "hello"
    int y = 4;
    cout<<"DeletgateConstructor a:"<<
            a.m_double<<","<<
            a.m_string<<std::endl;

    delegateConstructor::class_a b {"abcd"};
    cout<<"DeletgateConstructor b:"<<
            b.m_double<<","<<
            b.m_string<<std::endl;

    delegateConstructor::class_a d {11.0};
    cout<<"DeletgateConstructor d:"<<
            d.m_double<<","<<
            d.m_string<<std::endl;
}