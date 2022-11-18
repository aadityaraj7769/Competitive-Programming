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
    int n;
    cin >> n;
    vi v(n), w(n);
    rep(i,0,n) cin >> v[i];
    int k = n,  a =0;
    while(k--)
    {
        int num;
        string s;
        cin >> num >> s;
        int up = 0, dow = 0;
        rep(i,0,num)
        {
            if(s[i] == 'U') up++;
            else dow++;
        }
        if(up > dow)
        {
            v[a] = v[a]-(up-dow);
            if(v[a] >= 0) w[a] = v[a];
            else{
                if(v[a]%10 == 0) w[a] = 0;
                else {
                    v[a]*=-1;
                    v[a] %= 10;
                    w[a] = 10-v[a];
                }
            }
        }
        else if(up < dow)
        {
            v[a] = v[a]+(dow-up);
            if(v[a] < 10) w[a] = v[a];
            else{
                if(v[a]%10 == 0) w[a] = 0;
                else {
                    
                    v[a] %= 10;
                    w[a] = v[a];
                }
            }
        }
        else w[a] = v[a];
        a++;
    }
    rep(i,0,n){
        cout << w[i] << " ";
    }
    cout << endl;
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