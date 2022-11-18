#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        string s = "";
        if (n % 3 == 0)
        {
            int k = n / 3;
            for (int l = 0; l < k; l++)
            {
                s += "21";
            }
        }
        if (n % 3 == 1)
        {
            int k = n / 3;
            for (int l = 0; l < k; l++)
            {
                s += "12";
            }
            s += "1";
        }
        if(n % 3 == 2)
        {
            int k = n / 3;
            for (int l = 0; l < k; l++)
            {
                s += "21";
            }
            s += "2";
        }

        cout << s << endl;
    }

    return 0;
}