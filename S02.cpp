/* S02 (1�) �������� ������ ���������� ������� ������ � ����������� ������� �� ������� */
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");
    int number1, number2;
    cout << "������� ������ �����: ";
    cin >> number1;
    cout << "������� ������ �����: ";
    cin >> number2;

    cout << "������� ������: " << number1 / number2 << endl;
    cout << "������� �� �������: " << number1 % number2 << endl;

    return 0;
}
