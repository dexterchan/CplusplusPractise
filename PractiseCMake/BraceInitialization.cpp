#include <string>
#include <iostream>
#include "CplusplusFeatureTest.h"
using namespace std;
#include <initializer_list>
#include <map>
#include <vector>
#include <string>
#include <regex>

class class_a {
public:
    class_a() {}
    class_a(string str) : m_string{ str } {
        std::cout<<"Brace initialization:"<<m_string<<std::endl;
    }
    /*
    class_a(string str) : m_string(str ) {
        std::cout<<"Normal initialization:"<<m_string<<std::endl;
    }*/
    class_a(string str, double dbl) : m_string{ str }, m_double{ dbl } {}
double m_double;
string m_string;
};

int testBaseInitialization()
{
    class_a c1{};
    class_a c1_1;

    class_a c2{ "ww" };
    class_a c2_1("xx");

    // order of parameters is the same as the constructor
    class_a c3{  "yy",8.9 };
    class_a c3_1("zz", 5.5);

    initializer_list<int> int_list{5, 6, 7};
    for( int e:int_list){
        std::cout<<e<<",";
    }
    std::cout<<std::endl;

    std::vector<int> v1{ 9, 10, 11 };
    map<int, string> m1{ {1, "a"}, {2, "b"} };
    map<string,class_a> m2 {{"a",{"yy",9.0}}};

    string s{ 'a', 'b', 'c' };
    regex rgx{'x', 'y', 'z'};


    return 0;
}