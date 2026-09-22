#include <iostream>
using std::string;

class Employee {
public:
    string name;
    string company;
    int age;

    void introduceyourself() {
        std::cout << "Name - " <<name <<std::endl;
        std::cout << "Company - " <<company <<std::endl;
        std::cout << "Age - " <<age <<std::endl;
    }
};
int main()