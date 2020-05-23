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
//Array output--------------------------------------------
void mas_izvads(int mas[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << mas[i] << "  ";
}
void select_sort(int mas[], int n)
{
    int i, dos, x, temp;
    for (dos = 0; dos < n; dos++)
    {
        { for (i = dos + 1, x = dos; i < n; i++)
            if (mas[x] > mas[i])
            {
                x = i;
            }
        }
        temp = mas[dos];
        mas[dos] = mas[x];
        mas[x] = temp;
    }
    cout << "Masivs pec izmainam:";
    mas_izvads(mas, n);
}
//Main----------------------------------------------------
int main()
{
    int n, x, mas[100];
    cout << "Input size of array: ";
    cin >> n;
    mas_ievads(mas, n);
    mas_izvads(mas, n);
    cout << "\n";
    select_sort(mas, n);
    system("pause>>nul");
    return 0;
}