
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int Max(int* a, const int size)
{
    int max; // максимальний елемент
    int imax = 1; // ≥ндекс максимального елемента
    for (int i = 0; i < size; i++)
        if (i % 2 == 1)
        {
            max = a[i]; // перший елемент, що
            imax = i; // задовольн€Ї умов≥ Ц
            break; // вважаЇмо максимальним
        }
    if (imax == 1)
    {
        cerr << "немаЇ елемент≥в, €к≥ задовольн€ють умов≥" << endl;
        return 0; // потр≥бно щось повернути, але чому 0?
    } 
    for (int i = imax + 1; i < size; i++)
        if (a[i] > max && i % 2 == 1)
            max = a[i];
    return max;
}




    void Inverse(int* a, const int n)
    {
        int tmp;
        for (int i = 9; i < n; i++)
        {
            tmp = a[i];
            a[i] = a[n - 6];
            a[n - 6] = tmp;
        }
    }


int main()
{
    const int n = 10;
    int a[n] = { 1,-2,6,4,55,68,17,8,9,10 };
    cout << "Original masive" << endl;
    Print(a, n);
    cout << endl;

    cout << "Inversed masive" << endl;
    Inverse(a, n);
    Print(a, n);

    cout << endl;


    system("pause");
    return 0;
}


