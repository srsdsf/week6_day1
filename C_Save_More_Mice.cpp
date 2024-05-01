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
        vector<ll>a(k);
        for(int i=0; i<k;i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        ll cat=0,total=0;
        for(int i=0; i<k;i++)
        {
            if(cat<a[i])
            {
                cat+=(n-a[i]);
                total++;
            }
            else
            {
                break;
            }
        }
        cout<<total<<endl;
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