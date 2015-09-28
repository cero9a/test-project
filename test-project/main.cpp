#include <iostream>


using namespace std;

int main()
{
    int dan;
    cout << "Vvedit kamin(1) nozn(2) papir(3): ";
    cin >> dan;
    cout << "Vu vvelu: " << dan << '\n';
    int kom;
    kom = rand()%3;
    cout << kom << '\n';
    if (dan ==kom)
        cout << "friend";
    if (dan > kom)
        cout << "looser";
    if (dan < kom)
        cout << "winner";
    return 0;
}

