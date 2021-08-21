#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <iomanip>
#include<set>
#include<cmath>
#include<map>
#include<stack>
#include<queue>
#include<deque>
using namespace std;
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define al(n) n.begin(), n.end()
#define all(n) n.rbegin(), n.rend()
#define coma(n) cout<<fixed<<setprecision(n);
#define cat cin.ignore();
void m3mo()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin.tie(0);
}
void fast() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}
void Sieve(ll l,ll n){
vector<bool>prime(n+1,1);
    for (ll p = 2; p * p <= n; p++){
        if (prime[p] == true){
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (ll p = l; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
//int n;
//vector<vector<char,
//char arr[n][n];
//int visit[n][n]={};
//bool valid(int i,int j,int n,int m)
//{return i<n&&i>=0&&j<m&&j>=0;}
int c;
int n;
void fun(int l,int r,vector<vector<char> >&arr,vector<vector<int> >&visit)
{
    if((r>=n||l<0||l>=n||r<0)||arr[l][r]=='X'||visit[l][r]==1) return;
    visit[l][r]=1;
    c++;
    fun(l+1,r,arr,visit);
    fun(l,r+1,arr,visit);
    fun(l-1,r,arr,visit);
    fun(l,r-1,arr,visit);
}
int main()
{
     fast();
    

 //freopen("game.in","r",stdin);
 ll t;
 cin>>t;
 while(t--)
 {
  ll n,m;
  cin>>n>>m;
  ll arr[n];
  ll qer[m]={};
  for(ll i=0;i<n;i++)
  cin>>arr[i];
  ll q;
  cin>>q;
  int j=0;
  map<ll,set<ll>>mp;
  for(ll i=0;i<q;i++)
  {
      ll x;
      cin>>x;
      if(x==1)
      {
          ll idx,val;
          cin>>idx>>val;
          ll old_val=arr[idx-1];
          arr[idx-1]=val;
          
      }
      else if(x==2)
      {
          ll idx,jdx;
          cin>>idx>>jdx;
          mp[jdx-1].insert(idx-1);
      }
      else if(x==3)
      {
          ll jdx;
          cin>>jdx;
          ll sum=0;
          for(auto &i:mp[jdx-1])
          {
              sum+=arr[i];
          }
          cout<<sum<<"\n";
      }
  }
 }
return 0;
}
