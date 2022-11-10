#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
    for (int n=0; n<size; n++)
        a[n] = Low + rand() % (High-Low+1);
}
void Print(int* a, const int size)
{
    for (int n=0; n<size; n++)
        cout << a[n] <<" ";
}
int Max(int* a, const int size)
{
    int max = a[0];
    for (int n=1; n<size; n++)
        if (a[n]>max)
            max=a[n];
return max;
}
int Min(int* a, const int size)
{
    int min = a[0];
    for (int n=1; n<size; n++)
        if (a[n] < min)
            min=a[n];
return min;
}
int main()
{
srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисе
    const int n=5;
    int a[n];
    int Low = -100;
    int High = 100;
    Create(a, n, Low, High);
    Print(a, n);
    cout << endl;
    cout << "max = " << Max(a, n) << endl;
    cout << "min = " << Min(a, n) << endl;
    return 0;
    
}
