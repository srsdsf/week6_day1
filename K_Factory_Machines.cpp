#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class solution
{
    public:
        void solve()
        {
        ll n,t;
        cin>>n>>t;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll l=0,r=1e18,mid;
        ll time_n=0;
        while(l<=r)
        {
        
            mid=(l+r)/2;
            ll products=0;
            for(ll i: a)
            {
                products+=mid/i;
                if(products>=t)
                {
                    break;
                }
            }
            if(products>=t)
            {
            time_n= mid;
            r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<time_n<<endl; 
        }
};
int main()
{
    ll t=1;
    
    while(t--)
    {
        solution sol;
        sol. solve();
    }
   
}