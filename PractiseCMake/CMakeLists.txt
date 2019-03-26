cmake_minimum_required(VERSION 3.0.0)


set (CMAKE_CXX_STANDARD 11)

#set(ETH_CMAKE_DIR "${CMAKE_CURRENT_LIST_DIR}/cmake" CACHE PATH "The path to the cmake directory")
#list(APPEND CMAKE_MODULE_PATH ${ETH_CMAKE_DIR})

#set(HUNTER_CONFIGURATION_TYPES Release CACHE STRING "Hunter configuration types")
#set(HUNTER_JOBS_NUMBER 4 CACHE STRING "Hunter jobs number")
#set(HUNTER_CACHE_SERVERS "https://github.com/ethereum/hunter-cache" CACHE STRING "Hunter cache servers")
#set(HUNTER_PASSWORDS_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Hunter/passwords.cmake CACHE STRING "Hunter password path")


#include(HunterGate)
#HunterGate(
#    URL "https://github.com/ruslo/hunter/archive/v0.23.44.tar.gz"
#    SHA1 "c4cfcc0cd39fdae8de08f6205b7f34cab4a7ba79"
#    LOCAL
#)



project(HelloWorld VERSION 0.1.0)
enable_testing()
include(CTest)


#set(BOOST_ROOT  /usr/local/Cellar/boost/1.68.0_1)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
find_package(Boost 1.68 )
find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
#hunter_add_package(Boost COMPONENTS program_options filesystem system thread context fiber log)

if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS} include)
  message("-Boost found-")
  add_executable(TestPet testclass.cpp Pet.cpp)
  
  target_link_libraries(TestPet ${Boost_LIBRARIES} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
endif()


add_executable(HelloWorld main.cpp 
                Pet.cpp 
                MoveConstructor.cpp 
                BraceInitialization.cpp
                DelegateConstructor.cpp)
target_include_directories(HelloWorld PUBLIC include)

set_target_properties(HelloWorld PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS ON
)

set_target_properties(TestPet PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS ON
)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
