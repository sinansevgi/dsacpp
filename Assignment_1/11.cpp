/*
Problem Statement:
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    for (int i = 0; i<2*lines-1; i++)
    {
        for ( int j = lines-1; j>=0; j--)
        {
            if(lines-j > i)
            {
                cout << ' ';
            }
            else if (lines - i < 0 && j <= -1*(lines-i))
            {
                cout << ' ';
            }
            else
            {
                cout << '*';
            }
        }
        for ( int j = 0; j<lines; j++)
        {
            if(j < lines-i)
            {
                cout << ' ';
            }
            else if (lines - i < 0 && j <= -1*(lines-i))
            {
                cout << ' ';
            }
            else
            {
                cout << '*';
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
