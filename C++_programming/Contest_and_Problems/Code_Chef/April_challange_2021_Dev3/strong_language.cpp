
/**************************************************************************************
             ***************************************************************************
            *****************************************************************************
           *******************************************************************************
          *****                                                                       *****
         ******   |||||||||| |||||||||| |||||| |||||||||| |||||||||| ||\\      //||   ******
        *******   ||      || ||      ||   ||       ||     ||      || || \\    // ||   *******
       ********   ||      || ||      ||   ||       ||     ||      || ||  \\  //  ||   ********
      *********   |||||||||| ||||||||||   ||       ||     ||      || ||   \\//   ||   *********
     **********   ||         ||\\         ||       ||     ||      || ||          ||   **********
    ***********   ||         || \\        ||       ||     ||      || ||          ||   ***********
   ************   ||         ||  \\     ||||||     ||     |||||||||| ||          ||   ************
  *************                                                                       *************
 ***************************************************************************************************
*****************************************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, k, count(0), c(0), max(0);
        char ch[1000000];

        cin >> n >> k;
        getchar();
        cin >> ch;

        for (size_t i = 0; i < n; i++)
        {
            if (ch[i] == '*')
            {
                c = 1;
            }
            else
            {
                c = 0;
            }

            if (c == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }

            if (max < count)
            {
                max = count;
            }
            if (max >= k)
            {
                break;
            }
        }
        if (max >= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}