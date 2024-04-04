//М02 (3б) Функция принимает два параметра: сторона А и число сторон N, и должна вернуть площадь N-угольника со стороной А.
#include <iostream>
#include <math.h>
using namespace std;

float square (float A, int N)
{
    float const PI = 3.141593;
    float grad = 1/tan(180/N * PI/180);  //Перевод ctg из радианов в градусы 
    float S = (N*(A*A)/4) * grad;

    return S;
}



int main()
{
    float side;
    int kolvo_side;
    setlocale(0, "Rus");
    cout << "Введите сторону: ";
    cin >> side;
    cout << endl << "Введите число сторон: ";
    cin >> kolvo_side;
    cout << square(side,kolvo_side) << endl;

    return 0;
}
