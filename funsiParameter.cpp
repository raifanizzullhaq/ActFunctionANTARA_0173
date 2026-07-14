#include <iostream>
using namespace std;

int panjang, lebar;

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

void  output()
{
    cout << "Hasilnya : " << LuasPersegi();
}

int main()
{
    input();
    output();
}