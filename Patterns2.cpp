#include <iostream>
using namespace std;

void halfTriangle(int n)
{
    /*
        *
        * *
        * * *
        * * * *
        * * * * *
     */
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
    /*
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5
    */
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
    /*
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
    */
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
    /*
        1
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i - j << " ";
        }
        cout << endl;
    }
}

void charIncrementRectangle(int n)
{
    /*
    A A A
    B B B
    C C C
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << char('A' + i) << " ";
        }
        cout << endl;
    }
}
void charInLineIncrementRectangle(int n)
{
    /*
    A B C
    A B C
    A B C
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

void charIncrement(int n)
{
    /*
    A B C
    D E F
    G H I
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << char('A' + (i * 3 + j)) << " ";
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
    charIncrementRectangle(3);
    charInLineIncrementRectangle(3);
    charIncrement(3);

    return 0;
}