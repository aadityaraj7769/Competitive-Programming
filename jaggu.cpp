#include <bits/stdc++.h>
using namespace std;
const int N=1e6+5;
using ll = long long ;
ll arr[N];
bool check(ll x,ll n,ll h)
{
    ll hrs=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= x)
        {
            hrs += 1;
        }else{
            if(arr[i] % x == 0)
            {
                hrs += arr[i]/x;
            }else{
                hrs += arr[i]/x + 1;
            }
        }
        if(hrs>h) return 0;
    }
    return 1;
} 
void solve()
{
    ll n,h;
    cin>>n>>h;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    sort(arr,arr+n);
    ll lo=0,hi=mx,mid,ans=0;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(check(mid,n,h))
        {
            ans=mid;
            hi=mid-1;
        }
        else 
        {
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}