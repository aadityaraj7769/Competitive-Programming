#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int A[n], B[n], C[2*n];
    for(int i = 0; i<n; i++) {
        cin >> A[i];
        C[i] = A[i];
    }
    for(int i = 0; i<n; i++){
         cin >> B[i];
         C[i+n] = B[i];
    }
    long long sum = 0;
    for(int i = 0; i<n; i++)
    {
        if(A[i] < B[i])
        {
            int temp;
            temp = A[i];
            A[i] = B[i];
            B[i] = temp;
        }
    }
    for(int i = 0; i<n-1; i++)
    {
        sum += abs(A[i] - A[i+1]) + abs(B[i] - B[i+1]);
        //sum += abs(B[i] - B[i+1]);
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }

    return 0;
}