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
    int n,m;
    cin >> n >> m;
    int a[n][m];
    rep(i,0,n){
        rep(j,0,m){
            cin >> a[i][j];
        }
    }
    unordered_set<int> u;
    int k = 0, l = 0, d = 0, e = 0;
    rep(i,0,n){
        rep(j,0,m-1){
            if(a[i][j] > a[i][j+1]){
                
                u.insert(j+1);
                k++;
            }
        }
    }
    if(u.size() > 2 || (u.size() == 1 && m!=2)){
        cout << -1 << endl;
        return;
    }
    else if(m==2 && u.size()==1){
        cout << 1 << " " << 2 << endl;
        return;
    }
    else if(u.size() == 0){
        cout << 1 << " " << 1 << endl;
        return;
    }
    else if(u.size() != 0 && k != 2*n){
        cout << -1 << endl;
        return;
    }
    else{
        for(auto s: u){
            if(d == 0){
                d = s;
                continue;
            }
            e = s;
            // if(s != u.end()){
                // cout << " ";
            // }
        }
    }
    int x = min(d,e);
    int y = max(d,e);
    y++;
    // cout << x << " " << y << endl;
    rep(i,0,n){
        if(a[i][x-1] < a[i][y-2] || (a[i][x-1] > a[i][y] && y!=m) || a[i][y-1] > a[i][x] || (a[i][y-1] < a[i][x-2] && x!= 1) ){
            cout << -1 << endl;
            return;
        }
    }
    cout << x << " " << y << endl;
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