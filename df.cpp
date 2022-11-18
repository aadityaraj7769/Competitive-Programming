#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
#define vc vector<char>
#define vi vector<int>
#define us unordered_set<int> 
#define um unordered_map<int,int>
#define vvl vector<vector<long long>>
#define vpl vector<pair<long long, long long>>
#define ml map<long long, long long>
#define mpl map<pair<long long, long>, pair<long long, long long>>
#define pl pair<long long, long long>
#define sort(x) sort(x.begin(), x.end())
#define rsort(x) sort(x.begin(), x.end(),greater<long long>())
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a; i<b; i++) 
 
 
// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;
int  v[N][3], var=0;
int dp[N][3];
int f(int n)
{
    rep(i,0,3)
    {
        dp[0][i] = v[0][i];
    }

    rep(i,1,n)
    {
        rep(j,0,3)
        {
            if(j == 0)
            {
                if(v[i][j+1] > v[i][j+2])
                {
                    // cout << dp[i-1][j] << endl;
                    dp[i][j+1] = max(dp[i][j+1] ,dp[i-1][j] + v[i][j+1]);
                }
                else{
                    dp[i][j+2] = max(dp[i][j+2] , dp[i-1][j] + v[i][j+2]);
                }
            }
            if(j == 1)
            {
                if(v[i][j-1] > v[i][j+1])
                {
                    dp[i][j-1] = max(dp[i][j-1],dp[i-1][j] + v[i][j-1]);
                }
                else{
                    dp[i][j+1] = max(dp[i][j+1], dp[i-1][j] + v[i][j+1]);
                }
            }
            if(j == 2)
            {
                if(v[i][j-1] > v[i][j-2])
                {
                    dp[i][j-1] = max(dp[i][j-1] , dp[i-1][j] + v[i][j-1]);
                }
                else{
                    dp[i][j-2] =  max(dp[i][j-2] , dp[i-1][j] + v[i][j-2]);
                }
            }
            if(dp[i][j] == -1)
            {
                dp[i][j] = v[i][j];
            }
            
        }
    }
    // rep(i,0,n)
    // {
    //     rep(j,0,3)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return max(max(dp[n-1][0],dp[n-1][1]),dp[n-1][2]);

}
void solve()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    rep(i,0,n)
    {
        rep(j,0,3) cin>>v[i][j];
    }
    cout<<f(n)<<endl;

}

int main()
{
    int t = 1;
    
    while(t--)
    {
      solve();
    }
}