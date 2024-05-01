#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class solution
{
    public:
    void solve()
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans;
        ll l=0,r=1e18,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll cnt=1;
            for(ll l=0,r=1;r<n;)
            {
                
                if(a[l]+mid+mid>=a[r])  
                {
                    r++;
                }
                else
                {
                    cnt++;
                    l=r;
                    r=l+1;
                }
            }
            if(cnt<4)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
 
        }
        cout<<ans<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solution sol;
        sol.solve();
    }
}