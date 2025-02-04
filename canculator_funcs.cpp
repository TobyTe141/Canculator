//includes the header
#include "canculator_funcs.hpp"

// Variables
std::string all_options; 
int x; 
int y; 

// Function definitions
int add(int x, int y) {
    return x + y; 
}
int sub(int x, int y) {
    return x - y; 
}
int multiply(int x, int y) {
    return x * y; 
}
int divide(int x, int y) {
    return x / y; 
}
std::string options() {
    all_options = "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division";
    std::cout << all_options << std::endl;
    return ""; 
}
void menu_options(std::string menu_option) {
    if (menu_option == "1") {
        std::cout << "What is the first number you would like to add?" << std::endl; 
        std::cin >> x;
        std::cout << "What is the second number you would like to add?" << std::endl; 
        std::cin >> y;  
        std::cout << add(x, y) << std::endl; 
    }
    else if (menu_option == "2") {
        std::cout << "What is the first number you would like to subtract?" << std::endl; 
        std::cin >> x;
        std::cout << "What is the second number you would like to subtract?" << std::endl; 
        std::cin >> y;  
        std::cout << sub(x, y) << std::endl; 
    }
    else if (menu_option == "3"){
        std::cout << "What is the first number you would like to multiply?" << std::endl; 
        std::cin >> x;
        std::cout << "What is the second number you would like to multiply?" << std::endl; 
        std::cin >> y;  
        std::cout << multiply(x, y) << std::endl; 
    }
    else if (menu_option == "4"){
        std::cout << "What is the first number you would like to divide?" << std::endl; 
        std::cin >> x;
        std::cout << "What is the second number you would like to divide?" << std::endl; 
        std::cin >> y;  
        std::cout << divide(x, y) << std::endl; 
    }
    else {
        std::cout << "Invalid option" << std::endl; 
    }
}
