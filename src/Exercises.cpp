#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
    double height;
};

int main()
{
    Person dave {"Dave", 24, 1.74}
    std::cout <<dave.name<< std::endl ;
    dave.age = 25; 
    std::cout <<dave.age<< std::endl ;
}