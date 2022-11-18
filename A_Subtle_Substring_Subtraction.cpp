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


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    if(l == 1)
    {
        int k = s[0]-'a'+1;
        cout << "Bob" << " " << k << endl;
        return;
    }
    int ct = 0;
    rep(i,0,l)
        {
            ct += s[i]-'a' +1;
        }
    if(l%2 == 0)
    {
        cout << "Alice" << " " << ct << endl;
    }else{
        int z = ct - min(s[0]-'a'+1,s[l-1]-'a'+1);
        cout << "Alice" << " " << 2*z - ct  << endl;
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