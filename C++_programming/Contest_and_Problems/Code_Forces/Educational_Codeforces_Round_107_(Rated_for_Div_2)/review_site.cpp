/************************************************************************
 *    |||||||||| |||||||||| || |||||||||| |||||||||| ||\\      //||     *
 *    ||      || ||      || ||     ||     ||      || || \\    // ||     *
 *    ||      || ||      || ||     ||     ||      || ||  \\  //  ||     *
 *    |||||||||| |||||||||| ||     ||     ||      || ||   \\//   ||     *
 *    ||         ||\\       ||     ||     ||      || ||          ||     *
 *    ||         || \\      ||     ||     ||      || ||          ||     *
 *    ||         ||  \\_    ||     ||     |||||||||| ||          ||     *
 * **********************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int r[50];
        int c1 = 0, c2 = 0;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];

            if (r[i] == 1)
            {
                c1++;
            }
            else if (r[i] == 2)
            {
                c2++;
            }
            else if (r[i] == 3)
            {
                c1++;
            }
        }

        cout << c1 << endl;
    }
}