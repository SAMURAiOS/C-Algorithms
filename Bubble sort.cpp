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
void bubble_sort(int mas[], int n)
{
    int uno, dos, tres;
    for (tres = n - 1; tres > 0; tres--)
    {
        for (uno = 0; uno < tres; uno++)
        {
            if (mas[uno] > mas[uno + 1])
            {
                dos = mas[uno];
                mas[uno] = mas[uno + 1];
                mas[uno + 1] = dos;
            }
            mas_izvads(mas, n);
            cout << endl;
        }
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
    bubble_sort(mas, n);
    system("pause>>nul");
    return 0;
}