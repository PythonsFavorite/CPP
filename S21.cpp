//S21 (1б) Получить от пользователя два числа А, В (В>A). Пройти циклом от А до В, вывести значение каждого числа
//умноженного на 3 в файл «output»
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "Rus");
    int A,B, counter;
    cout << "Введите число А: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;

    if (B <= A) cout << "Условие не выполнено"; //Можно проверку включить в цикл, добавив return, чтобы текст не выводился бесконечно

    ofstream file_to_write;
    file_to_write.open("output.txt");
    for (counter = A; counter <= B; counter++)
    {
        file_to_write << counter * 3  << endl;
    }
    file_to_write.close();
    return 0;
}
