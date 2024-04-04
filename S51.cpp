//S51 (1б) Напишите функцию reverse(), которая принимает строку и выводит ее на экран в отраженном виде. «Testing» → «gnitseT»
#include <iostream>
#include <cstring>
using namespace std;

void reversee (char ch[], int Size = 10)
{
    cout << "Введите строку: ";
    cin >> ch;
    for (int i = 0; i <= strlen(ch); i++) {
            cout << ch[strlen(ch+i)];
    }
}

int main()
{
    setlocale(0, "Rus");
    char ch[1];
    reversee(ch);


    return 0;
}
