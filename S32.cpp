//S32 (1�) ������������ ������ ������. ��������� ��������� �� ������, �������� ������ ����� � ������ �� 1 (a > b, b>c �)
//(������ ������ �������� ������) ����� ������ ����� �������� �������� strlen() �� ���������� cstring.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(0, "rus");
    char per;
    char *pointer;
    char input[100];
    cout << "������� ������: ";
    cin >> input;
    pointer = input;

    for (int i=0; i < strlen(input); i++) {
        cout << *pointer++ << " ---> ";
        per = input[i] + 1;
        cout << per << endl;
    }



    return 0;
}
