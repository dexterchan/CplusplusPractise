#include "Pet.h"
#include <string>
#include <iostream>

#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( my_test )
{
    std::string n ="cat";
    Pet test_object( n);
    std::cout<< (test_object.getName()==n ) << std::endl;
    //BOOST_CHECK( test_object.getName()==n );
}