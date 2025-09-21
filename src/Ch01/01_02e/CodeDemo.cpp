// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>

int main(){
    std::string str;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> str;
    std::cout << "Hello, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
