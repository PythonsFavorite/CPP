/* S02 (1б) Покажите работу операторов деления нацело и определения остатка от деления */
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");
    int number1, number2;
    cout << "Введите первое число: ";
    cin >> number1;
    cout << "Введите второе число: ";
    cin >> number2;

    cout << "Деление нацело: " << number1 / number2 << endl;
    cout << "Остаток от деления: " << number1 % number2 << endl;

    return 0;
}
