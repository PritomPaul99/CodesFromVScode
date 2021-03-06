#include <bits/stdc++.h>
using namespace std;

string s[50000];
int u = 0, po;

int compare(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

void swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}

int findCeil(char str[], char first, int l, int h)
{
    int ceilIndex = l;

    for (int i = l + 1; i <= h; i++)
        if (str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;

    return ceilIndex;
}

void sortedPermutations(char str[])
{
    int size = strlen(str);

    qsort(str, size, sizeof(str[0]), compare);

    bool isFinished = false;
    while (!isFinished)
    {
        // cout << "x->  " << str << endl;
        s[u] = str;
        u++;

        int i;
        for (i = size - 2; i >= 0; --i)
            if (str[i] < str[i + 1])
                break;

        if (i == -1)
            isFinished = true;
        else
        {
            int ceilIndex = findCeil(str, str[i], i + 1, size - 1);

            swap(&str[i], &str[ceilIndex]);

            qsort(str + i + 1, size - i - 1, sizeof(str[0]), compare);
        }
    }
}

int main()
{
    char str[1000];
    cin >> str;
    int num = strlen(str);
    int k;
    cin >> k;
    sort(str, str+num);
    sortedPermutations(str);
    // cout << u << "\n\n";
    // for (int i = 0; i < u + 1; i++)
    // {
    //     cout << s[i] << " -  ";
    // }
    cout << s[k+1];

    return 0;
}