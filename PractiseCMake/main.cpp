#include <iostream>
#include "Pet.h"
#include <memory>
#include "CplusplusFeatureTest.h"


int main(int, char**) {
    std::cout << "Hello, world!\n";
    std::string n ="cat";
    std::unique_ptr<Pet> pet(new Pet(n));
    pet->eat();

    Pet p(n);
    p.sound();

    testMoveConstructor();

    testBaseInitialization();

    testDelegateConstructor();
}
