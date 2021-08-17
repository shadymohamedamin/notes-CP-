#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    /*ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],c=0;
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        for(ll i=0;i<n;i++)
        {
            for(ll j=i;j<n;j++)
            {
                int sum=0;
                for(ll k=i;k<=j;k++)
                {
                    sum+=arr[k];
                }
                //cout<<sum<<endl;
                if(sum==1899)
                c++;
            }
        }
        cout<<c<<"\n";
    }*/
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll c=0,temp=0;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            sum+=arr[i];
            //mp[arr[i]]--;
            if(mp[sum-1899])
            c+=mp[sum-1899];
            if(sum==1899) c++;
            mp[sum]++;
            
        }
        cout<<c<<"\n";
    }
return 0;
}
