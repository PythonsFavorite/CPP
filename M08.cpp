//M08 (3�) ������� get_angle() ��������� ��� ����� - ����� ���� ������ ������������ � ���������� �������� ���� (� ��������),
//�������������� �������� ������ �������. ��������� ������������ �������� ������������������ ������� �� ���������� math.h.
//������� �������� �� ������������ �������� ���������� (>0).

#include <iostream>
#include <math.h>
using namespace std;

float get_angle(float A, float B, float C)
{
    if (A <= 0 || B <= 0)
    {
        cout << "�� 0 ������ ������, ������" << endl;
    }

    else
    {
        float const PI = 3.14159;
        float gradus;
        float COSA = (B*B + C*C - A*A)/(2*A*B);
        gradus = acos(COSA) * 180/PI;

        return gradus;
    }
}

//P.S. ���������� ������� ������� :)
int main()
{
    setlocale(0, "Rus");

    float a, b, c;
    cout << "������� 3 ������� ������������: " << endl;
    cin >> a >> b >> c;
    cout << get_angle(a,b,c) << endl;


    return 0;
}
