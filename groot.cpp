#include <iostream>
#include <limits> // for std::numeric_limits

/**
 * This function flushes stdin until the next \n.
 */
void ignoreLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/**
 * This function takes a user input of non-negetive int.
 * Returns int if the input was positive interger, forces it to be 0 otherwise.
 */
int sanetizedPositiveInput() {
    int input = 0;
tryAgain:
    std::cin >> input;
    ignoreLine();
    if (input < 0) {
        std::cout << "Expected non-negitive value!" << std::endl;
        goto tryAgain;
    }
    if (std::cin.fail()) {
        std::cin.clear(); // Put us back in 'normal' operation mode
        ignoreLine();     // Clears possibly bad input

        std::cout << "Invalid input!" << std::endl;
        goto tryAgain;
    }
    return input;
}

/**
 * Takes a user input and returns its sqrt.
 */
double groot() {
    std::cout << "Enter a number to groot" << std::endl;
    const int input = sanetizedPositiveInput();
    return std::sqrt(input);
}
int main() {
    std::cout << "Groot: " << groot() << std::endl;
    return 0;
}