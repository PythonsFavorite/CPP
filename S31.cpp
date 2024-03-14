//S31 (1б) Создайте текстовый массив с названиями цифр от 0 до 9. Пользователь вводит число
//и получает на экран его название.
#include <iostream>
using namespace std;

int main()
{

    setlocale(0,"Rus");
    int number;
    string str[] {"Ноль","Один", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять"};
    cout << "Введите число: ";
    cin >> number;
    if (number < sizeof(str)/sizeof(str[0])) cout << "Вы ввели число - " << number[str] << endl;

    else if (number >= sizeof(str)/sizeof(str[0])) cout << "Принимаются только числа в диапозоне [0,9]" << endl;


    return 0;
}
