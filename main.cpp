#include <iostream>
using namespace std;

void read(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

double avg(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];

    return (double)s / n;
}

void analyze(int a[], int n, int &mn, int &mx, int &pass)
{
    mn = mx = a[0];
    pass = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < mn) mn = a[i];
        if (a[i] > mx) mx = a[i];
        if (a[i] >= 50) pass++;
    }
}

int main()
{
    int n;
    cin >> n;

    int a[100];
    read(a, n);

    double av = avg(a, n);

    int mn, mx, pass;
    analyze(a, n, mn, mx, pass);

    cout << "Average: " << av << endl;
    cout << "Max: " << mx << endl;
    cout << "Min: " << mn << endl;
    cout << "Passed: " << pass << endl;
    cout << "Failed: " << n - pass << endl;

    cout << "Above avg: ";
    for (int i = 0; i < n; i++)
        if (a[i] > av)
            cout << a[i] << " ";

    return 0;
}