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

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            v.pb(in);
        }
        int c = 0;
        for (size_t i = 0; i < n-1; i++)
        {
            // cout << v[i] << " ";
            if(v[i] == 0)
            {
                cout << "No" << endl;
                c = 1;
                break;
            }
            else
            {
                c = 0;
            }
            
        }
        if(c ==  0)
        {
            cout << "Yes" << endl;
        }
        
    }
    return 0;
}