/*
Problem Statement:
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.

*****
 ***
  *

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    for (int i = lines; i>0; i--)
    {
        int amount = lines - i;
        for ( int j = 0; j < (2*lines-1); j++)
        {
            if (amount > 0 || (i+lines) - j  <= 1)
            {

                cout << ' ';
                amount--;
            }
            else
            {
                cout << '*';
                amount--;
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
