#include <iostream>
using namespace std;

void input()
{
    cout << "Masukan Panjang :";
    cin >> panjang;
    cout << "Masukan Lebar :";
    cin >> lebar;
}

int LuasPersegi()
{
    return panjang * lebar;
}