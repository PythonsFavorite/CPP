//S41 (1�) �������� ������� squared_sum(), ������� ��������� ��� ������� ����� � ���������� ������� �� �����
#include <iostream>

using namespace std;

float squared_sum(float a, float b)
{
    float summa = a + b;
    float squred = summa * summa;
    return squred;
}


int main()
{
    setlocale(0, "Rus");
    float number1, number2;
    cout << "������� ����� 1: ";
    cin >> number1;
    cout << "������� ����� 2: ";
    cin >> number2;

    cout << squared_sum(number1, number2)<< endl;



    return 0;
}
