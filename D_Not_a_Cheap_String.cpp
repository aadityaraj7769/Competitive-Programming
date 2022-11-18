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
    int p;
    cin >> p;
    ll ct = 0;
    rep(i,0,s.length())
    {
        ct += s[i]-'a'+1;
    }
    if(ct <= p)
    {
        cout << s << endl;
    }else{
        string k = s, an = "", rea = "";
        map<char, int> ma;

        sort(k);
        ll r = 0;
        rep(i,0,s.length())
        {
            r += k[i]-'a'+1;
            if(r <= p)
            {
                an += k[i];
                ma[k[i]]++;
            }else{
                break;
            }
        }

        rep(i,0,s.length())
        {
            if(ma[s[i]] > 0)
            {
                rea += s[i];
                ma[s[i]]--;
            }
        }

       
        cout << rea << endl;

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