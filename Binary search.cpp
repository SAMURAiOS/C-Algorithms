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
void binary_search(int mas[], int n, int x)
{
    int i, R, L;
    for (L = 0, i = (n - 1) / 2, R = n - 1; L < R + 1; i = ((L + R) / 2))
    {
        if (mas[i] == x)
        {
            cout << "atrada num" << i << endl;
            return;
        }
        else {

            if (mas[i] < x)
            {
                L = i + 1;
            }
            else
                R = i - 1;
        }
    }
    cout << "neatrada";
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
    cout<<"Ievadiet meklejamo skaitli: ";
    cin>>x;
    binary_search(mas, n, x);
    system("pause>>nul");
    return 0;
}