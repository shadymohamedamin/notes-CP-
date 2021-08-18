#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ll test;
cin>>test;
while(test--)
{
vector<ll>v;   
int r=log10(1000000)+1;
for(int i=0;i<r;i++)
{
    int t=t*10+1;
    for(int j=1;j<=9;j++)
    {
        v.push_back(j*t);
    }
}
map<ll,ll>mp;
vector<int>visit(101,0);
for(auto &i:v)
mp[i]++;

ll n;
cin>>n;
vector<ll>arr(n),temp;
for(ll i=0;i<n;i++)
cin>>arr[i];
for(ll i=0;i<n;i++)
{
    auto itt=mp.find(arr[i]);
    if(itt!=mp.end())
    {
       visit[arr[i]]=1;
       temp.push_back(itt->first);
       mp.erase(itt->first);
    }
}
int mn;
ll sum=0;
vector<ll>::iterator tt=v.begin();
for(ll i=0;i<n;i++)
{
    if(visit[arr[i]]==0)
    {
    int it=lower_bound(v.begin(),v.end(),arr[i])-v.begin();
    //cout<<arr[i]<<" "<<v[it]<<" "<<v[it-1]<<endl;
    mn=min(abs(arr[i]-v[it]),abs(arr[i]-v[it-1]));
    if(it>0&&mn==(abs(arr[i]-v[it-1])))
    {
       // tt=v.begin()+(it-1);
       // v.erase(tt);
        //arr[i]=v[it-1];
        //temp.push_back(v[it-1]);
        v.erase(v.begin()+(it-1));
        sum+=mn;
    }
    else if(mn==(abs(arr[i]-v[it])))
    {
       //tt=v.begin()+it;
       //v.erase(tt);
       //temp.push_back(v[it]);
       //arr[i]=v[it];
       v.erase(v.begin()+it);
       sum+=mn; 
    }
    }
}
cout<<sum<<"\n";
//for(auto &i:temp) cout<<i<<" ";
}

return 0;
}
