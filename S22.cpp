// S22 (1�) ��������� ���� ��������� ������ ����� �� ����� �output� � ������� �� ����� � ����:
// �n. �����, ��� n - ���������� ����� ����� � �����
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n = 1;
    string str;
    ifstream file_to_read;
    file_to_read.open("output.txt");

    //� ������� ����� ��������� �� ������ ����� ��� ������.
   /* while (file_to_read >> str) {
        cout << n << ". "  <<str  << endl;
        n++;
    }*/

    //� ������� ����� ��������� �� ������ ����� ��� �����

    int counter;
    while (file_to_read >> counter) {
        cout << n << ". " << counter << endl;
        counter++;
        n++; }


    return 0;
}
