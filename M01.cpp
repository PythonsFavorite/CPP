#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

cout << "\t";
for (int horizont=1; horizont < 10; horizont++)
    cout << horizont << "\t";
cout << endl;
for (int horizont=1; horizont < 10; horizont++) {
    cout << horizont << "\t";
    for (int vertical=1; vertical < 10; vertical++)
        cout << horizont * vertical << "\t";
        cout << endl;
}


    return 0;
}
