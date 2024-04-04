//�02 (3�) ������� ��������� ��� ���������: ������� � � ����� ������ N, � ������ ������� ������� N-��������� �� �������� �.
#include <iostream>
#include <math.h>
using namespace std;

float square (float A, int N)
{
    float const PI = 3.141593;
    float grad = 1/tan(180/N * PI/180);  //������� ctg �� �������� � �������
    float S = (N*(A*A)/4) * grad;

    return S;
}



int main()
{
    float side;
    int kolvo_side;
    setlocale(0, "Rus");
    cout << "������� �������: ";
    cin >> side;
    cout << endl << "������� ����� ������: ";
    cin >> kolvo_side;
    cout << square(side,kolvo_side) << endl;

    return 0;
}
