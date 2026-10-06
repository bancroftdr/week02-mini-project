#include <iostream>
int main() {
    double temp;
    char unit;

    if (!(std::cin >> temp >> unit)) {
        std::cout << "Invalid input\n";
        return 0;
    }

    if (unit == 'C' || unit == 'c') {
        double f = temp * 9.0 / 5.0 + 32.0;
        std::cout << temp << " C = " << f << "F\n";
    } else if (unit == 'F' || unit == 'f') {
        double c = (temp - 32.0) * 5.0 / 9.0;
        std::cout << temp << " F = " << c << "C\n";
    } else {
        std::cout << "Unsupported direction\n";
    }
}