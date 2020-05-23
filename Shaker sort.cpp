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
void shaker_sort(int mas[], int n)
{
    int uno, dos, tres, d, k;

    for (tres = 0, d = n, k = 0; tres < n - 1; tres++)
        if (tres % 2 <= 0)
        {
            d--;
            for (uno = d; uno > k; uno--)
                if (mas[uno] < mas[uno - 1])
                {
                    dos = mas[uno];
                    mas[uno] = mas[uno - 1];
                    mas[uno - 1] = dos;
                }
        }
        else
        {
            for (uno = k; uno < d; uno++)
                if (mas[uno] > mas[uno + 1])
                {
                    dos = mas[uno];
                    mas[uno] = mas[uno + 1];
                    mas[uno + 1] = dos;
                }
        }
    k += 1;
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
    shaker_sort(mas, n);
    system("pause>>nul");
    return 0;
}