//Используя другой тип цикла, перебрать числа от 1 до 1000 с шагом 4. Найти сумму всех чисел, которые делятся на 7 без остатка
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
    //Через цикл while
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
