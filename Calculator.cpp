#include <iostream>
using namespace std;

int bilA, bilB;

void input ()
{
    cout << "Masukan bilangan pertama =";
    cin >> bilA;
    cout << "Masukan bilangan kedua = ";
    cin >> bilB;
}


int penjumlahan(int a, int b)
{
    return a + b; 
}

int pengurangan(int a, int b)
{
    return a - b; 
}

int perkalian(int a, int b)
{
    return a * b; 
}

float pembagian(float a, float b)
{
    return a / b; 
}