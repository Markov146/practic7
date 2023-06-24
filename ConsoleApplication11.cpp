
#include <iostream>

class PersonException {

public:
    PersonException(std::string message) : message{ message } {}
    std::string getMessage() const { return message; }
private:
    std::string message;
};
class Person {
    
private:
    std::string name;
    int age;
public:
    Person() {
        name = "Denis";
        age = 19;   
        if (!age || age > 90)   
        {
            throw PersonException{ "Недопустимый возраст" };
        }
        this->name = name;
        this->age = age;
    }
   
};
int main()
{
    Person person;
    int age;
    double weight;
    std::cout << "Введите  age: ";
    std::cin >> age;
    std::cout << "Введите name: ";
    std::cin >> weight;
    std::cout << "Age: " << age << "\t Name: " << weight << std::endl;

}
