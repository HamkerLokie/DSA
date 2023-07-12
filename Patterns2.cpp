#include <iostream>
using namespace std;

void halfTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void halfNumberTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}
void halfNumberIncrementTriangle(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}
void halfNumberDecrementTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i - j << " ";
        }
        cout << endl;
    }
}

int main()
{
    halfTriangle(5);
    halfNumberTriangle(5);
    halfNumberIncrementTriangle(5);
    halfNumberDecrementTriangle(5);

    return 0;
}