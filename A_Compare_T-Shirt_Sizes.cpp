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
    string s, t;
    cin >> s >> t;
    if(s == t)
    {
        cout << "=" << endl;
        return;
    }
    int l = s.length(), m = t.length();
    if(s[l-1] == t[m-1])
    {
        if(s[l-1] == 'S')
        {
            if(l == m) cout << "=" << endl;
            else if(l > m) cout << "<" << endl;
            else cout << ">" << endl;
        }
        if(s[l-1] == 'L')
        {
            if(l == m) cout << "=" << endl;
            else if(l > m) cout << ">" << endl;
            else cout << "<" << endl;
        }
    }
    else if(s[l-1] == 'S' and t[m-1] == 'L')
    {
        cout << "<" << endl;
    }
    else if (s[l-1] == 'L' and t[m-1] == 'S')
    {
        cout << ">" << endl;
    }
    else if(s[l-1] == 'M')
    {
        if(t[m-1] == 'S')
        {
            cout << ">" << endl;
        }
        if(t[m-1] == 'L')
        {
            cout << "<" << endl;
        }
    }
    else if(s[l-1] == 'S')
    {
        if(t[m-1] == 'M')
        {
            cout << "<" << endl;
        }
        if(t[m-1] == 'L')
        {
            cout << "<" << endl;
        }
    }
    else if(s[l-1] == 'L')
    {
        if(t[m-1] == 'S')
        {
            cout << ">" << endl;
        }
        if(t[m-1] == 'M')
        {
            cout << ">" << endl;
        }
    }
    else if(t[l-1] == 'M')
    {
        if(s[m-1] == 'S')
        {
            cout << "<" << endl;
        }
        if(s[m-1] == 'L')
        {
            cout << ">" << endl;
        }
    }
    else if(t[l-1] == 'S')
    {
        if(s[m-1] == 'M')
        {
            cout << ">" << endl;
        }
        if(s[m-1] == 'L')
        {
            cout << ">" << endl;
        }
    }
    else if(t[l-1] == 'L')
    {
        if(s[m-1] == 'S')
        {
            cout << "<" << endl;
        }
        if(s[m-1] == 'M')
        {
            cout << "<" << endl;
        }
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