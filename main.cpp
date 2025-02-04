//incldes the header
#include "canculator_funcs.hpp"

// Variables
bool run = true;
std::string menu_option; 

// Main code 
int main() {
    while (run) {
        std::cout << "What would you like to do?" << std::endl;
        options(); 
        std::cin >> menu_option;
        menu_options(menu_option); // Call the menu_options function
    }
    return 0; 
}
