// S21 (1�) �������� �� ������������ ��� ����� A,B (B>A). ������ ������ �� � �� �, ������� �������� ������� �����
// ����������� �� 3 � ���� <output>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "Rus");
    int A,B, counter;
    cout << "������� ����� �: ";
    cin >> A;
    cout << "������� ����� B: ";
    cin >> B;

    if (B <= A) cout << "������� �� ���������"; //����� �������� �������� � ����, ������� return, ����� ����� �� ��������� ����������

    ofstream file_to_write;
    file_to_write.open("output.txt");
    for (counter = A; counter <= B; counter++)
    {
        file_to_write << counter * 3  << endl;
    }
    file_to_write.close();
    return 0;
}
