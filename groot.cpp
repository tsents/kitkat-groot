#include <iostream>
#include <limits> // for std::numeric_limits

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

unsigned int sanetizedInput()
{
    unsigned int x = 0;
    std::cin >> x;
    ignoreLine();
    return x;
}

int main()
{
    std::cout << "Enter a number to groot" << std::endl;
    int input = sanetizedInput();
    std::cout << "Groot: " << std::sqrt(input) << std::endl;
}