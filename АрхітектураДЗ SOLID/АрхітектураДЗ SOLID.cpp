#include <iostream>
#include <windows.h>
using namespace std;

class Number {
private:
    double x;

public:
    Number(double val) : x(val) {}

    double getValue() const {
        return x;
    }
};

class Square {
public:
    static double calculateSquare(const Number& number) {
        return number.getValue() * number.getValue();
    }
};

class Cube {
public:
    static double calculateCube(const Number& number) {
        return number.getValue() * number.getValue() * number.getValue();
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x = 3.0;
    Number number(x);


    double square = Square::calculateSquare(number);
    double cube = Cube::calculateCube(number);

    cout << "Число: " << x << endl;
    cout << "Квадрат числа: " << square << endl;
    cout << "Куб числа: " << cube << endl;

}

