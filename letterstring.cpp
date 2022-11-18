#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_map<char,int> m;
    unordered_map<char,int> p;
    unordered_map<string,int> q;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin >> s;
        char k = s[0], l=s[1];
        m[k]++;
        p[l]++;
        q[s]++;
    }
    long long ct = 0;
    for(auto a : m){
        ct += ((a.second)*(a.second-1))/2;
    }
    for(auto b : p){
        ct += ((b.second)*(b.second-1))/2;
    }
    for(auto c : q){
         ct -= ((c.second)*(c.second-1));
        /*if(c.second == 2)
        {
            // ct -= ((c.second)*(c.second-1))/2;
            ct -= c.second;
        }
        else if(c.second > 2)
        {
            ct -= 2*c.second;
        }*/
        // ct -= c.second;
    }
    cout << ct << endl;
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