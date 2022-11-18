#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if(s.length() == 1){
        cout << "NO" << endl;
        return;
    }
    if(s[0] != s[1] || s[s.length()-2] != s[s.length()-1])
    {
        cout << "NO" << endl;
        return;
    }
    for(int i = 1; i<s.length()-1; i++)
    {
        if(s[i-1] == s[i+1] && s[i-1] != s[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}