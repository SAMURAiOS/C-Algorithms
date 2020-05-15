#include <iostream>
#include <stdlib.h>

using namespace std;

//Array input---------------------------------------------
void mas_ievads(int mas[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Ievadiet mas [" << i << "] = ";
        cin >> mas[i];
    }
}
//Array output---------------------------------------------
void mas_izvads(int mas[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << mas[i] << "  ";
}
//Linear search algorithm------------------------------------------
void linear_search(int mas[], int n, int x)
{
    int i;
    for (i = 0; i < n && mas[i] != x; i++);
    if (mas[i] == x)
        cout << "Atrada numura: " << i << "\n";
    else
        cout << "Neatrada";
}
//Main-----------------------------------------------
int main()
{
    int n, x, mas[100];
    cout << "Input size of array: ";
    cin >> n;
    mas_ievads(mas, n);
    mas_izvads(mas, n);
    cout << "\n";
    cout<<"Ievadiet meklejamo skaitli: ";
    cin>>x;
    linear_search(mas,n,x);
    system("pause>>nul");
    return 0;
}
