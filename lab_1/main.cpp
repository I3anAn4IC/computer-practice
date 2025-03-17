#include <iostream>
#include <windows.h>
#include "complex.hpp"
#include "quad.hpp"

enum Mode{
    exet = 0,
    complexCalcul = 1,
    quadEq = 2,
    incorecct = 3,
};

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Mode mode = Mode::incorecct;
    cout << "Программа выполняет функции: калькулятор комплексных чисел, решение квадратных уравнений.\n";
    while (mode!=Mode::exet){
        mode = Mode::incorecct;
        while (mode != Mode::complexCalcul && mode != Mode::quadEq && mode != Mode::exet) {
            cout << "Если вы хотите завершить программу, введите - 0, \n";
            cout << "Если вам нужен калькулятор комлексных числе, введите - 1, \n";
            cout << "Если вам нужно решить квадратное уравнение, введите - 2. \n";
            int temp;
            cin >> temp;
            mode = static_cast<Mode>(temp);
            if (mode != Mode::exet && mode != Mode::complexCalcul && mode != Mode::quadEq) {
                cout << "Введён некоректный код. \n";
            }
        }
        cout << endl;
        switch (mode)
        {
            case 0:
                break;
            case 1:
                Calculator::complexCalculatorTermin();
                break;
            case 2:
                QuadraticEquationSolver::quadEqTermin();
                break;
        }
    }
    cout << "Программа завершилась.\n";
}
