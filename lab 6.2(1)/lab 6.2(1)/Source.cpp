#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Print(int* a, const int n, int i)
{
    cout << setw(4) << a[i];
    if (i < n - 1)
        return Print(a, n, i + 1);
    else
        cout << endl;
}
int IFirst(int* a, const int size, int& max, int i)
{
    if (i % 2 == 1)
    {
        max = a[i]; // перший елемент, що
        return i; // задовольняє умові
    } // вважаємо максимальним

    if (i < size - 1)
        return IFirst(a, size, max, i + 1);
    else
        return -1;
}
int Max(int* a, const int size, int max, int i)
{
    if (a[i] > max && i % 2 == 1)
        max = a[i];
    if (i < size - 1)
        return Max(a, size, max, i + 1);
    else
        return max;
}



void Inverse(int* a, const int n, const int i)
{
    int tmp = a[i];
    a[i] = a[n - 6];
    a[n - 6] = tmp;
    if (i < n - 9)
        Inverse(a, n, i + 9);
}

int main()
{
    const int n = 10;
    int a[n] = { 1,-2,6,4,55,68,17,8,9,10 };

    cout << "Original masive" << endl;
    Print(a, n, 0);
    cout << endl;

    cout << "Inversed masive" << endl;
    Inverse(a, n, 0);
    Print(a, n, 0);
    cout << endl;

    system("pause");
    return 0;
}