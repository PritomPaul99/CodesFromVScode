// #include <iostream>
#include <bits/stdc++.h>

// Data Types
#define ll long long
#define lli long long int
#define ld long double
typedef unsigned long int uint32;
typedef unsigned long long int uint64;
// Constant Values & Numbers
#define pi acos(-1)
const ll Mod = 1e9 + 7;
#define POW(_x, _y) _x << _y
// File handling
#define f_input freopen("input.txt", "r", stdin)
#define f_output freopen("output.txt", "w", stdout)
#define nl '\n'
#define FastIO ios_base::sync_with_stdio(false), cin.tie(NULL)
// Loops
#define fs(i, s, e) for (int i = s; i < e; i++)
#define fo(i, e) for (int i = 0; i < e; i++)
#define fr(i, s, e) for (int i = s; i >= e; i--)
#define fi(n) for (int i = 0; i < n; i++)
// Strings
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
// Array
#define mems(a, x) memset(a, x, sizeof(a))        // Works only for 0 and -1
#define ass_vel(ar, n, x) fo(i, n) ar[i] = x      // Set value in array
#define parr(ar, n) fo(i, n) cout << ar[i] << " " // Print array
#define eol cout << endl
#define a_sort(ar, size) sort(ar, ar + size)
#define d_sort(arr, size) sort(arr, arr + size, greater<int>())
#define min_el(arr, size) *min_element(arr, arr + size)
#define max_el(arr, size) *max_element(arr, arr + size)
#define _min_el(x) *min_element(x.begin(), x.end())
#define _max_el(x) *max_element(x.begin(), x.end())
#define ain(arr, n) fo(i, n) cin >> arr[i]
#define aout(arr, n)                \
    fo(i, n) cout << arr[i] << " "; \
    cout << nl
#define find_(a, n, x) find(a, a + n, x) - a
// cout << fixed << setprecision(__n) << x << endl;
#define FSP(x) fixed << setprecision(x)
#define pop_cnt(n) __builtin_popcount(n) // Assign it to a value to find the number of 1 in a binary number
#define numBits(n) log2(n) + 1           // Assign it to a value to get the number of bits in an integer
#define DigitNum(n) log10(n) + 1         // Assign it to a value to get the number of digit in an integer
// Vector
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
// debug
#define cpoint cout << "_________________CHECK POINT_________________\n";
#define _debug(x) cout << x << endl
#define Yes printf("Yes\n")
#define No printf("No\n")
#define YES printf("YES\n")
#define NO printf("NO\n")
#define out(x) cout << x << '\n'

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end());

    int k = 0;
    while (a[0] != 0)
    {
        if (a[n - 1] == 0)
        {
            if (k % 2 == 0)
            {
                cout << "Bob" << nl;
                return;
            }
            else
            {
                cout << "Alice" << nl;
                return;
            }
        }
        swap(a[0], a[n - 1]);
        a[n - 1] = a[n - 1] - 1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (i == 0)
            {
                break;
            }
            else if (a[i] > a[i - 1])
            {
                break;
            }
            else
            {
                swap(a[i], a[i - 1]);
            }
        }

        k++;
    }
}

int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    double start = clock();
    f_input;
    f_output;
#endif

    int ttt = 1, ca = 1;
    cin >> ttt;
    while (ttt--)
    {
        // cout << "Case " << ca << ": ";
        solve();
        // ca++;
    }

#ifndef ONLINE_JUDGE
    double time = (clock() - start) / CLOCKS_PER_SEC;
    cerr << "Running Time : " << time << "\n";
#endif
    return 0;
}

/**
#Some Caution
* 1) Want to add character in the end of a string? Use push_back().
* 2) Max size of locally declared array is 1e5 and globally declared array is 1e7.
* 3) To find sum of array/vector, use accumulate(start_, end_, x), x = starting values to add other values to.
* 4) 1 << n == 2 ^ n.
* 5) x & (1 << i) == 0, ith bit of x is not 0.
* 6) x & (1 << i) != 0, ith bit of x is 1.
*/

/***************************************************************************************************\
*                                            Written by:                                            *
*                                                                                                   *
*     ██▓███   ██▀███   ██▓▄▄▄█████▓ ▒█████   ███▄ ▄███▓     ██▓███   ▄▄▄       █    ██  ██▓        *
*    ▓██░  ██▒▓██ ▒ ██▒▓██▒▓  ██▒ ▓▒▒██▒  ██▒▓██▒▀█▀ ██▒    ▓██░  ██▒▒████▄     ██  ▓██▒▓██▒        *
*    ▓██░ ██▓▒▓██ ░▄█ ▒▒██▒▒ ▓██░ ▒░▒██░  ██▒▓██    ▓██░    ▓██░ ██▓▒▒██  ▀█▄  ▓██  ▒██░▒██░        *
*    ▒██▄█▓▒ ▒▒██▀▀█▄  ░██░░ ▓██▓ ░ ▒██   ██░▒██    ▒██     ▒██▄█▓▒ ▒░██▄▄▄▄██ ▓▓█  ░██░▒██░        *
*    ▒██▒ ░  ░░██▓ ▒██▒░██░  ▒██▒ ░ ░ ████▓▒░▒██▒   ░██▒    ▒██▒ ░  ░ ▓█   ▓██▒▒▒█████▓ ░██████▒    *
*    ▒▓▒░ ░  ░░ ▒▓ ░▒▓░░▓    ▒ ░░   ░ ▒░▒░▒░ ░ ▒░   ░  ░    ▒▓▒░ ░  ░ ▒▒   ▓▒█░░▒▓▒ ▒ ▒ ░ ▒░▓  ░    *
*    ░▒ ░       ░▒ ░ ▒░ ▒ ░    ░      ░ ▒ ▒░ ░  ░      ░    ░▒ ░       ▒   ▒▒ ░░░▒░ ░ ░ ░ ░ ▒  ░    *
*    ░░         ░░   ░  ▒ ░  ░      ░ ░ ░ ▒  ░      ░       ░░         ░   ▒    ░░░ ░ ░   ░ ░       *
*                ░      ░               ░ ░         ░                      ░  ░   ░         ░  ░    *
*                                           ╔╗╔╔═╗╦ ╦╔╗                                             *
*                                        ───║║║║╣ ║ ║╠╩╗───                                         *
*                                           ╝╚╝╚═╝╚═╝╚═╝                                            *
*                                 ╔╦╗┌─┐┌─┐┌┬┐   ┌─┐┌─┐  ╔═╗╔═╗╔═╗                                  *
*                              ─── ║║├┤ ├─┘ │    │ │├┤   ║  ╚═╗║╣ ───                               *
*                                 ═╩╝└─┘┴   ┴ o  └─┘└    ╚═╝╚═╝╚═╝                                  *
\***************************************************************************************************/