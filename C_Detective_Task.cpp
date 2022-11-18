#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
#define vi vector<int>
#define vvl vector<vector<long long>>
#define vpl vector<pair<long long, long long>>
#define ml map<long long, long long>
#define mpl map<pair<long long, long>, pair<long long, long long>>
#define pl pair<long long, long long>
#define sort(x) sort(x.begin(), x.end())
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a; i<b; i++) 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    unordered_map<char, int> u;
    if(l == 1)
    {
        cout << 1 << endl;
        return;
    }
    rep(i,0,l)
    {
        u[s[i]]++;
    }
    if(u.size() == 1)
    {
        for(auto p : u)
        {
            if(p.first == '1' || p.first == '0')
            {
                cout << 1 << endl;
            }else{
                cout << l << endl;
            }
        }
        return;
    }
    else if(u.size() == 2)
    {
        char a, b;
        int x = 0;
        for(auto p:u)
        {
            if(x == 0)
            {
                a = p.first;
                x++;
            }else{
                b = p.first;
            }
        }
        if((a == '1' && b == '0') || (a == '0' && b == '1'))
        {
            cout << 2 << endl;
            return;
        }
        else if((a == '1' && b == '?') || (a == '?' && b == '1'))
        {
            int g = -1;
            rep(i,0,l)
            {
                if(s[i] == '1')
                {
                    g = i;
                }
            }
            cout << l-g << endl;
        }
        else if((a == '0' && b == '?') || (a == '?' && b == '0'))
        {
            int h = -1;
            rep(i,0,l)
            {
                if(s[i] == '0')
                {
                    h = i;
                    break;
                }
            }
            cout << h+1 << endl;
        }

    }
    else{
        int q = -1, r = -1;
        rep(i,0,l)
        {
            if(s[i] == '1')
            {
                q = i;
            }
            else if(s[i] == '0')
            {
                r = i;
                break;
            }
        }
        cout << r-q+1 << endl;
    }

}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}