#include <string>
#include <iostream>
#include <iomanip>
#include <utility>
#include "include/CplusplusFeatureTest.h"
struct A
{
    std::string s;
    int k;
    A() : s("test"), k(-1) { }
    A(const A& o) : s(o.s), k(o.k) { std::cout << "move failed!\n"; }
    A(A&& o) noexcept :
           s(std::move(o.s)),       // explicit move of a member of class type
           k(std::exchange(o.k, 0)) // explicit move of a member of non-class type
    { }
};
 
A f(A a)
{
    return a;
}
 
struct B : A
{
    std::string s2;
    int n;
    // implicit move constructor B::(B&&)
    // calls A's move constructor
    // calls s2's move constructor
    // and makes a bitwise copy of n
};
 
struct C : B
{
    ~C() { } // destructor prevents implicit move constructor C::(C&&)
};
 
struct D : B
{
    D() { }
    ~D() { }          // destructor would prevent implicit move constructor D::(D&&)
    D(D&&) = default; // forces a move constructor anyway
};
 
int testMoveConstructor()
{
    std::cout << "Trying to move A\n";
    A a1 = f(A()); // return by value move-constructs the target from the function parameter
    std::cout << "Before move, a1.s = " << std::quoted(a1.s) << " a1.k = " << a1.k << '\n';
    A a2 = std::move(a1); // move-constructs from xvalue
    std::cout << "After move, a1.s = " << std::quoted(a1.s) << " a1.k = " << a1.k << '\n';
 
    std::cout << "Trying to move B\n";
    B b1;
    std::cout << "Before move, b1.s = " << std::quoted(b1.s) << "\n";
    B b2 = std::move(b1); // calls implicit move constructor
    std::cout << "After move, b1.s = " << std::quoted(b1.s) << "\n";
 
    std::cout << "Trying to move C\n";
    C c1;
    C c2 = std::move(c1); // calls copy constructor
 
    std::cout << "Trying to move D\n";
    D d1;
    D d2 = std::move(d1);
}
/*
Output:

Trying to move A
Before move, a1.s = "test" a1.k = -1
After move, a1.s = "" a1.k = 0
Trying to move B
Before move, b1.s = "test"
After move, b1.s = ""
Trying to move C
move failed!
Trying to move D

    Support usRecent changesFAQOffline version 

    What links hereRelated changesUpload fileSpecial pagesPrintable versionPermanent linkPage information 

    In other languages

    DeutschEspañolFrançaisItaliano日本語PortuguêsРусский中文 

    This page was last modified on 18 February 2019, at 03:43. 

    Privacy policy About cppreference.com Disclaimers 

    */