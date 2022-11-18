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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll sum = 0;
    rep(i,0,n-1)
    {
        sum += (s[i]-48)*10+(s[i+1]-48);
    }
    if(k == 0)
    {
        cout << sum << endl;
    }
    else if(k == 1)
    {
        if(s[n-2] == '1' && s[n-1] == '0')
        {
            sum -= 10;
        }
        else if(s[0] == '0' && s[1] == '1')
        {
            sum -= 1;
        }
        cout << sum << endl;
    }
    else if(k==2){
        if(s[0] == '0' && s[1] == '1')
        {
            sum -= 1;
        }
        if(s[n-2] == '1' && s[n-1] == '0')
        {
            sum -= 10;
        }
        cout << sum << endl;
    }
    else{
        if(s[n-2] == '1' && s[n-1] == '0')
        {
            sum -= 10;
            k--;
        }
        // cout << sum << endl;
        int m = -1;
        if(s[0] == '1' && s[1] == '1')
        {
            for(int i = 3; i<n; i++)
            {
                if(s[i] == '0')
                {
                    m = i;
                    break;
                }
            }
            if(m != -1)
            {
                if(m-1 <= k)
            {
                sum -= 10;
            k = k-(m-1);
            }
            }
            
        }
        
        int l = -1;
        if(s[n-2] == '1' && s[n-1] == '1')
        {
            for(int i = n-3; i>=0; i--)
            {
                if(s[i] == '0')
                {
                    l = i;
                    break;
                }
            }
            if(l != -1)
            {
                if(n-2-l <= k)
            {
                sum -= 1;
            k -= n-2-l;
            }
            }
            
        }
        if(s[0] == '0' && s[1] == '1')
        {
            sum -= 1;
            k--;
        }
        cout << sum << endl;

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