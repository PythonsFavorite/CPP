// S22 (1б) Используя цикл прочитать каждое число из файла «output» и вывести на экран в виде:
// «n. Число», где n - порядковый номер числа в файле
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

    //С помощью цикла извелкаем из нащего файла все строки.
   /* while (file_to_read >> str) {
        cout << n << ". "  <<str  << endl;
        n++;
    }*/

    //С помощью цикла извелкаем из нашего файла все целые числа

    int counter;
    while (file_to_read >> counter) {
        cout << n << ". " << counter << endl;
        counter++;
        n++; }


    return 0;
}
