#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class solution
{
    public:
    void solve()
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll l=1,r=2e9,mid=0,ans=0;
        while(l<=r)
        {
            mid=l+abs(l-r)/2;
            ll need=0;
            for(ll i=n/2; i<n; i++)
            {
                if(mid>=a[i])
                {
                    need+=abs(a[i]-mid);
                }
                else if(need>=k)
                {
                    break;
                } 
            }
            if(need<=k)
            {
                l=mid+1;
                ans=mid;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
};
int main()
{
    ll t=1;
    while(t--)
    {
        solution sol;
        sol.solve();
    }
   
}