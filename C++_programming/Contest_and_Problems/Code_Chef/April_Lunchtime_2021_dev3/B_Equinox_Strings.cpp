/*************************************************************************************************
*                                           Written by:                                          *
*   ______________   ______________   _____   ______________   ______________   _            _   *
*  |  __________  | |  __________  | |_   _| |_____   ______| |  __________  | |  \        /  |  *
*  | |          | | | |          | |   | |         | |        | |          | | | |\\      //| |  *
*  | |          | | | |          | |   | |         | |        | |          | | | | \\    // | |  *
*  | |__________| | | |__________| |   | |         | |        | |          | | | |  \\  //  | |  *
*  |  ____________| |  ___  _______|   | |         | |        | |          | | | |   \\//   | |  *
*  | |              | |   \ \          | |         | |        | |          | | | |    \/    | |  *
*  | |              | |    \ \         | |         | |        | |          | | | |          | |  *
*  | |              | |     \ \____   _| |_        | |        | |__________| | | |          | |  *
*  |_|              |_|      \_____| |_____|       |_|        |______________| |_|          |_|  *
*                                                                                                *
*                                             -NEUB-                                             *
*                         Depertment of Computer Science and Engineering                         *
*************************************************************************************************/
#include <iostream>
//#include <bits/stdc++.h>

#define ll long long
#define lli long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        string str;
        ll shi = 0, anu = 0;
        cin >> n >> a >> b;

        for (int i = 0; i < n; i++)
        {
            cin >> str;

            if (str[0] == 'E' || str[0] == 'Q' || str[0] == 'U' || str[0] == 'I' || str[0] == 'N' || str[0] == 'O' || str[0] == 'X')
            {
                shi += a;
            }
            else
            {
                anu += b;
            }
        }
        //cout << " shi: " << shi << " anu: " << anu << endl;
        if (shi > anu)
        {
            cout << "SARTHAK" << endl;
        }
        else if (shi < anu)
        {
            cout << "ANURADHA" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }
}