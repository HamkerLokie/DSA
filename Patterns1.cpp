#include <iostream>
using namespace std;

void rectangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void number(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void reverseNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }
}

void countIncrement(int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << n++ << " ";
        }
        cout << endl;
    }
}

int main()
{

    rectangle(4);
    number(4);
    reverseNumber(6);
    countIncrement(1);

    return 0;
}