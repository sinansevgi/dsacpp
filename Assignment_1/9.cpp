/*
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.
1 <= x <= 26

E
DE
CDE
BCDE
ABCDE

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = lines-1; i >= 0; i--)
    {
        for (int j = lines - i; j > 0; j--)
        {
            cout << alph[lines-j];
        }
        cout <<endl;
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
