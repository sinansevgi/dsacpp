/*
Problem Statement:
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.

1      1
12    21
123  321
12344321

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    for (int i = 0; i<=lines; i++)
    {
        for (int j = 1; j<=2*lines; j++)
        {
            if(i>=j || i > 2*lines - j)
            {
                if(j>lines)
                {
                    cout << 2*lines-j+1;
                }
                else
                {
                    cout << j;
                }
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;

    }

}

int main()
{
    int lines = 0;
    cout << "Please enter amount of lines you want to :" << endl;
    cin >> lines;
    cout << endl;
    linePrinter(lines);

}
