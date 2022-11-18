#include <bits/stdc++.h>
using namespace std;

int maximumrepetitingelement(int v[], int n)
{
    int i, j, maxElement, count;
     int maxCount = 0;
     maxElement = v[0];
    count = 1;
    /* Frequency of each element is counted and checked.If it's greater than the utmost count element we found till now, then it is updated accordingly  */  
    for(i = 0; i< n-1; i++)   //For loop to hold each element
    {
         
            if(v[i+1] == v[i])
            {
                count++;     //Increment  count
                /* If count of current element is more than 
                maxCount, then update maxElement */
                if(count > maxCount)
                {
                    maxElement = v[i];
                    maxCount = count;
                }
            }
            else{
                count = 1;
            }
        
    }
    // cout << count << endl;
    return maxElement;
}

void solve()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v+n);
    int count = 0;

    if(n == 1)
    {
        cout << "0"<< endl;
        return;
    }
    int k = maximumrepetitingelement(v,n);
    int ct = 0;
    for(int i = 0; i<n; i++)
    {
        if(v[i] == k)
        {
            ct++;
        }
    }
    ct = ct*2;
    
    while(ct < n)
    {
        count++;
        count = count+ct/2;
        ct = ct*2;
    }
    int num = n-ct/2;
    if(num != 0)
    {
        count += num+1;
    }
    
    cout << count << endl;
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