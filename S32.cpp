//Пользователь вводит строку. Используя указатель на строку, сдвиньте каждую букву в строке на 1 (a > b, b>c …)
//(каждый символ задается числом) длину строки можно получить функцией strlen() из библиотеки cstring.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(0, "rus");
    char per;
    char *pointer;
    char input[100];
    cout << "Введите текст: ";
    cin >> input;
    pointer = input;

    for (int i=0; i < strlen(input); i++) {
        cout << *pointer++ << " ---> ";
        per = input[i] + 1;
        cout << per << endl;
    }



    return 0;
}
