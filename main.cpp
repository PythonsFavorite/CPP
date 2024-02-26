/* S01 (1á) ñîçäàòü 4 ïåðåìåííûõ ðàçíîãî òèïà, ïðîäåìîíñòðèðîâàòü ðàáîòó ÷åòûðåõ àðèôìåòè÷åñêèõ îïåðàòîðîâ íà âûáîð */
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");
    long number1;
    double number2;
    short number3;
    float number4;


    cout << "Öåëî÷èñëåííàÿ ïåðåìåííàÿ (long): ";
    cin >> number1;
    cout << "Âåùåñòâåííàÿ ïåðåìåííàÿ (double): ";
    cin >> number2;
    cout << "Öåëî÷èñëåííàÿ ïåðåìåííàÿ (short): ";
    cin >> number3;
    cout << "Âåùåñòâåííàÿ ïåðåìåííàÿ (float): ";
    cin >> number4;

    //Ñëîæåíèå
    cout << "\nÑëîæåíèå: " << endl;
    cout << "number1 + number2: "<< number1+number2 <<endl;
    cout << "number2 + number3: "<< number2+number3 <<endl;
    cout << "number3 + number4: "<< number3+number4 <<endl;
    cout << "number4 + number1: "<< number4+number1 <<endl;

    //Âû÷èòàíèå
    cout << "\nÂû÷èòàíèå: " <<endl;
    cout << "number1 - number2: " << number1 - number2 <<endl;
    cout << "number2 - number3: " << number2 - number3 <<endl;
    cout << "number3 - number4: " << number3 - number4 <<endl;
    cout << "number4 - number1: " << number4 - number1 <<endl;

    //Óìíîæåíèå
    cout << "\nÓìíîæåíèå: " <<endl;
    cout << "number1 * number2: " << number1 * number2 << endl;
    cout << "number2 * number3: " << number2 * number3 << endl;
    cout << "number3 * number4: " << number3 * number4 << endl;
    cout << "number4 * number1: " << number1 * number2 << endl;

    //Äåëåíèå
    cout << "\nÄåëåíèå: " <<endl;
    cout << "number1 / number2: " << number1 / number2 << endl;
    cout << "number2 / number3: " << number2 / number3 << endl;
    cout << "number3 / number4: " << number3 / number4 << endl;
    cout << "number4 / number1: " << number4 / number1 << endl;

    return 0;
}
