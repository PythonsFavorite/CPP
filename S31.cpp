//S31 (1�) �������� ��������� ������ � ���������� ���� �� 0 �� 9. ������������ ������ �����
//� �������� �� ����� ��� ��������.
#include <iostream>
using namespace std;

int main()
{

    setlocale(0,"Rus");
    int number;
    string str[] {"����","����", "���", "���", "������", "����", "�����", "����", "������", "������"};
    cout << "������� �����: ";
    cin >> number;
    if (number < sizeof(str)/sizeof(str[0])) cout << "�� ����� ����� - " << number[str] << endl;

    else if (number >= sizeof(str)/sizeof(str[0])) cout << "����������� ������ ����� � ��������� [0,9]" << endl;


    return 0;
}
