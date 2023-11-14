#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello C++20" << std::endl;
    int age{21};
    // Printing data
    std::cout << "I am " << age << " years old" << std::endl;
    std::cerr << "Error message : Something went wrong" << std::endl;
    std::clog << "Log message : Something happened" << std::endl;
    // String
    std::string name;
    std::cout << "Enter your Full name : " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Hello " << name << std::endl;
    // std::cout << "Enter your name : " << std::endl;
    // std::cin >> name;
    // std::cout << "Enter your age : " << std::endl;
    // std::cin >> age;
    // std::cout << "Your name is " << name << " and your age is " << age << std::endl;
  
    return 0;
}
