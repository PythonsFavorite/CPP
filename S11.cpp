// ���������� ��������� ����� �� 0 �� 100. ���� ����� ������� �� 3 ������� ��� �� �����
#include <iostream>

using namespace std;

int main()
{
    //����� ���� while
    setlocale(0, "Rus");
    /*int a;
    while (a !=100 ) {
            a++;
    if (a % 3 == 0) cout << a << endl; }
*/
//����� ���� for
int a;
  for (a; a != 100; a++)
  if ((a % 3== 0) && (a != 0))  cout << a << endl;


    return 0;
}
