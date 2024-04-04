//S42 (2б) Напишите функцию sort(), которая принимает массив из 10 чисел и сортирует их по убыванию
#include <iostream>

using namespace std;

//Во внещнем цикле, мы берём 0 элемент массива и, с помощью внутреннего цикла, сравниваем его с последующим.
//Если следующий элемент больше нашего 0, то мы меняем их местами и т.д.
int sortt(int arr[], int Size = 11)
{
    int save1;
    for (int i = 0; i < Size; i++) {
        for(int j = 0; j < Size-1; j++ ) {
            if(arr[j] < arr[j+1])
            {
                //Либо воспользоваться функцией swap(arr[j], arr[j+1])
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
