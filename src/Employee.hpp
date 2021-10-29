#include <iostream>
#include <string>

// Create the class "Employee" with default values
class Employee {
    public: 
    Employee(const std::string& empName, const std::string& empNi);
    std::string name; 
    std::string niNumber;
    int salary {0};
};

Employee::Employee(const std::string& empName, const std::string& empNi){
    std::string name {empName}; 
    std::string niNumber {empNi};
    int salary {0};
}


#include "Employee.hpp"

int main() {
    Employee jane {"Jane", "BG123456A"};
    std::cout <<jane.name<<"\t" <<jane.niNumber<<"\n";
}