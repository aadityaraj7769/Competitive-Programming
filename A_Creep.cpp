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
    int a, b;
    cin >> a >> b;
    string s = "";
    if(a == b)
    {
        rep(i,0,a)
        {
            s += '1';
            s += '0';
        }

    }else{
        if(a > b)
        {
            rep(i,0,b)
            {
                s += '0';
                s += '1';
            }
            rep(i,0,a-b)
            {
                s += '0';
            }
        }else{
            rep(i,0,a)
            {
                s += '1';
                s += '0';
            }
            rep(i,0,b-a)
            {
                s += '1';
            }
        }
    }
    cout << s << endl;
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