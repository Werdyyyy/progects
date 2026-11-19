#include <iostream>
#include <cmath>

using namespace std;

const double a_dom = 0.9;
const double b_dom = 0.9;

double sum(double x, double eps) {
    int k = 1;
    double a = x, s = 0;
    x = -x * x;
    while (abs(a) >= eps) {
        s += a;
        k += 2;
        a *= x / k / (k - 1);
    }
    return s += a;
}

int main() {
    cout << "The author of this program is me." << endl;
    cout << "This program calculates the value of the series" << endl;
    cout << "Variant 153." << endl;

    double x = 0;
    double eps = 0;

    cout << "Enter a real from [0.9; 0.9]: ";
    cin >> x;
    if (cin.fail() || x < a_dom || x > b_dom) {
        cout << "*****\nerror" << endl;
        cout << "('At time of getting x', 'Incorrect value or input error.')" << endl;
        return 0;
    }

    cout << "Enter positive eps: ";
    cin >> eps;
    if (cin.fail() || eps <= 0) {
        cout << "*****\nerror" << endl;
        cout << "('At time of getting eps', 'Incorrect value or input error.')" << endl;
        return 0;
    }

    cout << "***** do calculations ";
    double result = sum(x, eps);
    cout << "done" << endl;

    cout.precision(7);
    cout << scientific;
    cout << "for x = " << x << endl;

    cout.precision(9);
    cout << "for eps = " << eps << endl;

    cout.precision(8);
    cout << fixed;
    cout << "result = " << result << endl;

    return 0;
}