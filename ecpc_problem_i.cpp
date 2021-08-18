#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ll test;
cin>>test;
while(test--)
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
        {
            ll c=0;
            for(ll k=i;k<=j;k++)
            {
                c+=arr[k];
                //cout<<arr[k]<<" ";
            }
            sum+=c;
            //cout<<endl;
        }
    }
    //arr[i]*i*(n-i+1)       //base 1
    //cout<<sum;
    cout<<1.0*(1.0*sum/((n*(n+1))/2));
}
return 0;
}
