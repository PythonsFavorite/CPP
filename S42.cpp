//S42 (2�) �������� ������� sort(), ������� ��������� ������ �� 10 ����� � ��������� �� �� ��������
#include <iostream>

using namespace std;

//�� ������� �����, �� ���� 0 ������� ������� �, � ������� ����������� �����, ���������� ��� � �����������.
//���� ��������� ������� ������ ������ 0, �� �� ������ �� ������� � �.�.
int sortt(int arr[], int Size = 11)
{
    int save1;
    for (int i = 0; i < Size; i++) {
        for(int j = 0; j < Size-1; j++ ) {
            if(arr[j] < arr[j+1])
            {
                //���� ��������������� �������� swap(arr[j], arr[j+1])
                save1 = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = save1;
            }
        }
    }
    for (int i = 0; i < Size; i++)
        cout << arr[i] << " ";

}

int main()
{
    setlocale(0, "Rus");
    int SIZE = 10;
    int arr[SIZE] {1,5,2,7,9,5,8,1,3,6,7};

    sortt(arr);




    return 0;
}
