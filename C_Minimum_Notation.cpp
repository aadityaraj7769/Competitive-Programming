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
#define all(x) x.begin(),x.end()
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define rep(i,a,b) for(int i=a; i<b; i++) 
#define even(x)  x % 2 == 0 
#define odd(x)  x % 2 != 0 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    string s;
    cin >> s;
    map<char,int> u;
    int n = s.length();
    rep(i,0,n)
    {
        u[s[i]]++;
    }
    int a = 1;
    string ans = "";
    for(auto val : u)
    {
        string tem = "";
        rep(i,0,s.size())
        {
            if(val.second == 0)
            {
                tem += s[i];
            }
            else if(s[i] == val.first) {
                ans += s[i];
                val.second--;
            }
            else{
                int z = ((int)s[i] - 47);
                int k = min(z, 9);
                tem += to_string(k);
                char te = k + 48;
                u[te]++;
                u[s[i]]--;
            }
            

        }
        s = tem;
    }
    cout << ans << endl;
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