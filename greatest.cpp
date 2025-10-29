#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";

    std::cin >> num1 >> num2 >> num3;

    int greatest;

    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }

    std::cout << "The greatest number is: " << greatest << std::endl;

    return 0;
}
