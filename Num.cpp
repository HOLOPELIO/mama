#include <iostream>
#include <string>

using namespace std;

double devide(int a, int b) {
    if (b != 0) {
        double result = static_cast<double>(a) / b;
        return result;
    }
    throw string{"На нуль делить нельзя,на буквы тоже,осел\n"};
}

int main() {
    int a, b;

    cout << "Введите два целых числа: ";
    cin >> a >> b;

    try {
        double result = devide(a, b);
        cout << "Результат деления: " << result << endl;
    } catch (string error_message) {
        cout << error_message;
    }

    return 0;
}
