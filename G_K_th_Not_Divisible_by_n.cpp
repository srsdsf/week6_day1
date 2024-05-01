#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll l=1,r=INT_MAX,mid,ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll x=mid-mid/n;
            if(x<k)
            {
                l=mid+1;
            }
            else if(x>k)
            {
                r=mid-1;
            }
            else
            {
                ans=mid;
                r=mid-1;
            }
        }
        cout<<ans<<endl;
        
        
    }
}