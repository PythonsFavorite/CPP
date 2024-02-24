/* S01 (1б) создать 4 переменных разного типа, продемонстрировать работу четырех арифметических операторов на выбор */
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");
    long number1;
    double number2;
    short number3;
    float number4;


    cout << "Целочисленная переменная (long): ";
    cin >> number1;
    cout << "Вещественная переменная (double): ";
    cin >> number2;
    cout << "Целочисленная переменная (short): ";
    cin >> number3;
    cout << "Вещественная переменная (float): ";
    cin >> number4;

    //Сложение
    cout << "\nСложение: " << endl;
    cout << "number1 + number2: "<< number1+number2 <<endl;
    cout << "number2 + number3: "<< number2+number3 <<endl;
    cout << "number3 + number4: "<< number3+number4 <<endl;
    cout << "number4 + number1: "<< number4+number1 <<endl;

    //Вычитание
    cout << "\nВычитание: " <<endl;
    cout << "number1 - number2: " << number1 - number2 <<endl;
    cout << "number2 - number3: " << number2 - number3 <<endl;
    cout << "number3 - number4: " << number3 - number4 <<endl;
    cout << "number4 - number1: " << number4 - number1 <<endl;

    //Умножение
    cout << "\nУмножение: " <<endl;
    cout << "number1 * number2: " << number1 * number2 << endl;
    cout << "number2 * number3: " << number2 * number3 << endl;
    cout << "number3 * number4: " << number3 * number4 << endl;
    cout << "number4 * number1: " << number1 * number2 << endl;

    //Деление
    cout << "\nДеление: " <<endl;
    cout << "number1 / number2: " << number1 * number2 << endl;
    cout << "number2 / number3: " << number2 * number3 << endl;
    cout << "number3 / number4: " << number3 * number4 << endl;
    cout << "number4 / number1: " << number4 * number1 << endl;

    return 0;
}
