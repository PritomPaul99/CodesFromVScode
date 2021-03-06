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
//#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define lli long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         ll x, y, z = 1;

//         for (int i = 1;; i++)
//         {
//             x = a * i;
//             if ((x * 2) % (a * b) == 0)
//             {
//                 cout << "YES" << endl;
//                 cout << x << " " << (x * 2) - x << " " << x * 2 << endl;
//                 z = 0;
//                 break;
//             }
//         }
//         if (z == 1)
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

void solve()
{
    ll a, b;
    cin >> a >> b;

    if ((a * (b - 1) + a) == a * b && (a * (b - 1)) % b && a % b)
    {
        if (a * (b - 1) == a)
        {
            if (b % 2)
                cout << "YES" << endl
                     << a * (b * 2 - 1) << " " << a << " " << a * b * 2 << endl;
            else
                cout << "YES" << endl
                     << a * (b * 3 - 1) << " " << a << " " << a * b * 3 << endl;
        }
        else
            cout << "YES" << endl
                 << a * (b - 1) << " " << a << " " << a * b << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        /* code */
        solve();
    }
    
}