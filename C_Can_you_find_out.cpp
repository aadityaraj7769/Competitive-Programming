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
    int l = s.length(), ct = 0, j = 0, k= 0;
    char a = s[0];
    vi v;
    rep(i,1,l)
    {
        if(s[i] != s[i-1] )
        {
            if(s[i] != s[j] && (i-1) != j)
            {
                ct++;
                v.pb(i-j+1);
                j = i-1; k = i;
                
            }
            else if(s[i] == s[j] && (i-1) != j)
            {
                j = i-1; k = i;
                ct++;
            }
            
            else{
                j = i-1; k = i;
                ct++;
            }
            
        }else{
            if(ct != 0)
            {
                k = i;
                ct +=1;
            }else{
                j = i; k = i;
            }
            
            
        }
    }
    if(v.size() != 0)
    {
        int min = *min_element(v.begin(),v.end());
         cout << min << endl;
    }else{
        cout << 0 << endl;
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