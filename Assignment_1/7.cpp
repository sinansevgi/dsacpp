/*
Problem Statement:
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.

1
01
101
0101
10101

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    int chr = 1;
    for (int i = 0; i<lines; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            if (chr == 1)
            {
                cout << chr;
                chr --;
            }
            else
            {
                cout << chr;
                chr++;
            }
        }
        cout << endl;
        if(i % 2 > 0)
        {
            chr = 1;
        }
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
