/* S01 (1�) ������� 4 ���������� ������� ����, ������������������ ������ ������� �������������� ���������� �� ����� */
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");
    long number1;
    double number2;
    short number3;
    float number4;


    cout << "������������� ���������� (long): ";
    cin >> number1;
    cout << "������������ ���������� (double): ";
    cin >> number2;
    cout << "������������� ���������� (short): ";
    cin >> number3;
    cout << "������������ ���������� (float): ";
    cin >> number4;

    //��������
    cout << "\n��������: " << endl;
    cout << "number1 + number2: "<< number1+number2 <<endl;
    cout << "number2 + number3: "<< number2+number3 <<endl;
    cout << "number3 + number4: "<< number3+number4 <<endl;
    cout << "number4 + number1: "<< number4+number1 <<endl;

    //���������
    cout << "\n���������: " <<endl;
    cout << "number1 - number2: " << number1 - number2 <<endl;
    cout << "number2 - number3: " << number2 - number3 <<endl;
    cout << "number3 - number4: " << number3 - number4 <<endl;
    cout << "number4 - number1: " << number4 - number1 <<endl;

    //���������
    cout << "\n���������: " <<endl;
    cout << "number1 * number2: " << number1 * number2 << endl;
    cout << "number2 * number3: " << number2 * number3 << endl;
    cout << "number3 * number4: " << number3 * number4 << endl;
    cout << "number4 * number1: " << number1 * number2 << endl;

    //�������
    cout << "\n�������: " <<endl;
    cout << "number1 / number2: " << number1 * number2 << endl;
    cout << "number2 / number3: " << number2 * number3 << endl;
    cout << "number3 / number4: " << number3 * number4 << endl;
    cout << "number4 / number1: " << number4 * number1 << endl;

    return 0;
}
