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
//Insert Sort---------------------------------------------
void insert_sort(int mas[], int n)
{
    int i, swap, barrier;
    for (barrier = 1; barrier < n; barrier++)
    {
        for (i = barrier;mas[i] < mas[i - 1]; i--)
        {
                swap = mas[i];
                mas[i] = mas[i - 1];
                mas[i - 1] = swap;
                cout << endl;
                mas_izvads(mas, n);
                cout << endl;
        }
    }
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
    insert_sort(mas, n);
    //select_sort(mas, n);
    mas_izvads(mas, n);
    system("pause>>nul");
    return 0;
}