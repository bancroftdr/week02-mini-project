#include <iostream>
#include <iomanip>

int main() {
    double temp;
    char unit;

    if (!(std::cin >> temp >> unit)) {
        std::cout << "Invalid input\n";
        return 0;
    }

    std::cout << std::fixed << std::setprecision(2);

    if (unit == 'C') {
        std::cout << "Result: " << temp * 9.0 / 5.0 + 32.0 << " F\n";
    } else if (unit == 'F') {
        std::cout << "Result: " << (temp - 32.0) * 5.0 / 9.0 << " C\n";
    } else {
        std::cout << "Unsupported direction\n";
    }
}