#include <iostream>
#include "ansi_colors.h"

int main() {
    std::cout << RED << "This is red text" << RESET << std::endl;
    std::cout << GREEN << "This is green text" << RESET << std::endl;
    std::cout << BOLD << "This is bold text" << RESET << std::endl;
    std::cout << UNDERLINE << "This is underlined text" << RESET << std::endl;
    std::cout << BG_BLUE << WHITE << "This is white text on a blue background" << RESET << std::endl;
    return 0;
}
