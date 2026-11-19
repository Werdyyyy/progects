#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::cout << "Виконавець: Такташов Артем, група ІТК-12\n";
    std::cout << "Програма обчислює значення математичної функції для варіанту №153\n\n";

    std::cout << "Введіть дійсне число x (x >= 10): ";
    double x;
    if (!(std::cin >> x)) {
        std::cout << "\n***** do calculations ... done\n";
        std::cout << "result = undefined\n";
        return 0;
    }

    std::cout << "\n***** do calculations ... done\n";
    std::cout << "for x = " << std::fixed << std::setprecision(5) << x << "\n";

    double denominator = (x - 3) * (x + 15) - 13 * std::cos(x + 9) - std::sqrt(x - 10);
    bool is_defined = (x >= 10) && (std::abs(denominator) > 1e-9);

    if (is_defined) {
        double numerator = 51.0 * M_E * 6.0;
        double term1 = std::sin(563.0) + 3.0 * M_PI;
        double result = term1 - (numerator / denominator);

        std::cout << "result = " << std::fixed << std::setprecision(9) << result << "\n";
    }
    else {
        std::cout << "result = undefined\n";
    }

    return 0;
}