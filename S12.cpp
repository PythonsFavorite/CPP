//��������� ������ ��� �����, ��������� ����� �� 1 �� 1000 � ����� 4. ����� ����� ���� �����,������� ������� �� 7 ��� �������
#include <iostream>

using namespace std;

int main()
{
    int a, summa;
    summa = 0;
for (a=1; a <1000; a+= 4)
if (a % 7 == 0) {
    summa += a;
    cout << summa << endl;
}
    //����� ���� while
    /*int a, summa;
    summa = 0;
    while (a < 1000) {
        a += 4;
        if (a % 7 == 0) {
            summa += a;
            cout << summa << endl;
        }
    }
*/







    return 0;
}
