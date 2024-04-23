#include <iostream>
using namespace std;

int table(int a)
{
    for (int i = 1; i <= a; ++i) {
        for (int b = 1; b <= a; ++b) {
            cout << i * b << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int x;
    cout << "Enter a number between 1 and 10: ";
    cin >> x;

    if (x > 0 && x <= 10)
    {
        table(x);
        // cout << x * 2;
    }
    else
    {
        cout << "the number must be a non-negative";
    }
    return 0;
}