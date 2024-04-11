//S51 (1б) Напишите функцию reverse(), которая принимает строку и выводит ее на экран в отраженном виде. «Testing» → «gnitseT»
#include <iostream>
#include <cstring>
using namespace std;

void reversee (char ch[])
{
    int number = strlen(ch);

    for (int i = number; i != -1; --i)
    {
        cout << ch[i];
    }
}

int main()
{
    setlocale(0, "Rus");
    char ch[1];
    cout << "Введите строку: ";
    cin >> ch;

    reversee(ch);


    return 0;
}
