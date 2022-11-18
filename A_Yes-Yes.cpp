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
    int n = s.length();
    bool b = true;
    if(n == 2)
    {
        if((s[0] == 'Y' and s[1] == 'e') or (s[0] == 'e' and s[1] == 's') or (s[0] == 's' and s[1] == 'Y'))
        {
            cout << "YES" << endl;
            return;
        }else{
            cout <<"NO" << endl;
            return;
        }
    }
    if(n == 1)
    {
        if(s[0] == 'Y' or s[0] == 'e' or s[0] == 's')
        {
            cout << "YES" << endl;
            return;
        }else{
            cout <<"NO" << endl;
            return;
        }
    }
    rep(i,0,n-2)
    {
        if(s[i] == 'Y' and s[i+1] == 'e' and s[i+2] == 's')
        {
            b = true;
        } 
        else if(s[i] == 'e' and s[i+1] == 's' and s[i+2] == 'Y') continue;
        else if(s[i] == 's' and s[i+1] == 'Y' and s[i+2] == 'e') continue;
        else{
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

    while(t--)
    {
        solve();
    }



    return 0;
}