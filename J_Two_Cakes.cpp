#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class solution
{
    public:
        void solve()
        {
            ll n,a,b;
            cin>>n>>a>>b;
            ll l=1,r=min(a,b),ans=1;
            while(l<=r)
            {
                ll mid=(l+r)/2;
                if((a/mid)+(b/mid)>=n)
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
        sol. solve();
    }
   
}