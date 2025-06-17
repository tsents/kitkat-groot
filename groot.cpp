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
 * If the input is invalid it forces it to be 0, and flushes stdin until input end (\n).
 */
int sanetizedPositiveInput() {
    int input = 0;
    std::cin >> input;
    ignoreLine();
    if (input < 0) {
        return 0;
    }
    return input;
}

int main() {
    std::cout << "Enter a number to groot" << std::endl;
    const int input = sanetizedPositiveInput();
    std::cout << "Groot: " << std::sqrt(input) << std::endl;
    return 0;
}
