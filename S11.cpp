// Циклически перебрать числа от 0 до 100. Если число делится на 3 вывести его на экран
#include <iostream>

using namespace std;

int main()
{
    //Через цикл while
    setlocale(0, "Rus");
    /*int a;
    while (a !=100 ) {
            a++;
    if (a % 3 == 0) cout << a << endl; }
*/
//Через цикл for 
int a;
  for (a; a != 100; a++)
  if ((a % 3== 0) && (a != 0))  cout << a << endl;


    return 0;
}
