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
*                         Department of Computer Science and Engineering                         *
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        if (x % k == 0)
        {
            cout << "Yes" << endl;
        }
        else if (x % k - n == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// /*************************************************************************************************
// *                                           Written by:                                          *
// *   ______________   ______________   _____   ______________   ______________   _            _   *
// *  |  __________  | |  __________  | |_   _| |_____   ______| |  __________  | |  \        /  |  *
// *  | |          | | | |          | |   | |         | |        | |          | | | |\\      //| |  *
// *  | |          | | | |          | |   | |         | |        | |          | | | | \\    // | |  *
// *  | |__________| | | |__________| |   | |         | |        | |          | | | |  \\  //  | |  *
// *  |  ____________| |  ___  _______|   | |         | |        | |          | | | |   \\//   | |  *
// *  | |              | |   \ \          | |         | |        | |          | | | |    \/    | |  *
// *  | |              | |    \ \         | |         | |        | |          | | | |          | |  *
// *  | |              | |     \ \____   _| |_        | |        | |__________| | | |          | |  *
// *  |_|              |_|      \_____| |_____|       |_|        |______________| |_|          |_|  *
// *                                                                                                *
// *                                             -NEUB-                                             *
// *                         Department of Computer Science and Engineering                         *
// *************************************************************************************************/
// //#include <iostream>
// #include <bits/stdc++.h>

// #define ll long long
// #define lli long long int
// #define ld long double
// #define pi acos(-1)
// #define pb push_back
// #define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

// using namespace std;

// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, x, k;
//         cin >> n >> x >> k;
//         int flag = 1;

//         for (int i = 0; i < n + 2; i++)
//         {
//             ll hole1 = i * k;
//             if (hole1 == x)
//             {
//                 cout << "YES" << endl;
//                 flag = 0;
//                 break;
//             }
//         }

//         if (flag == 1)
//         {
//             for (int i = n + 1, j = 0; i >= 0; i--, j++)
//             {
//                 ll hole2 = (n + 1) - (j * k);
//                 if (hole2 == x)
//                 {
//                     cout << "YES" << endl;
//                     flag = 0;
//                     break;
//                 }
//             }
//         }
//         if(flag == 1)
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }