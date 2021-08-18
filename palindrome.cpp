#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ll test;
cin>>test;
while(test--)
{
  int n1,n2;
  cin>>n1>>n2;
  string name1,name2,temp="";
  cin>>name1;
  cin>>name2;
  deque<char>d;
  int arr[26]={};
  for(int i=0;i<n1;i++)
  arr[name1[i]-'a']++;
  char odd;
  for(int i=25;i>=0;i--)
  {
      if(arr[i]&1)
      odd=(i+'a');
  }
  arr[odd-'a']--;
  for(int i=0;i<26;i++)
  {
      while(arr[i]>=2)
      {
      //if(arr[i]>=2&&arr[i]%2==0)
      //{
          //temp=temp+to_string(i+'a');
          //temp=to_string(i+'a')+temp;
          d.push_front(i+'a');
          d.push_back(i+'a');
          //temp.push_back(i+'a');
          //temp.push_front(i+'a');
          arr[i]-=2;
      //}
      }
  }
  if(name1.size()&1)
  temp+=odd;
  while(d.size())
  {
      temp+=d.front();
      d.pop_front();
      temp=d.back()+temp;
      d.pop_back();
  }
  //cout<<temp;
  d.clear();
  int f=0;
  for(int i=0;i<26;i++)
  {
      //while(arr[i]>0)
      //{
          if(f==0&&arr[i]>0)
          {
              d.push_front(i+'a');
              f=!f;
              arr[i]--;
          }
          else if(f&&arr[i]>0)
          {
              d.push_back(i+'a');
              f=0;
              arr[i]--;
          }
      //}
  }
  //cout<<d.size();
  while(d.size())
  {
      temp+=d.front();
      d.pop_front();
      temp=d.back()+temp;
      d.pop_back();
  }
  map<char,ll>mp;
  for(int i=0;i<n2;i++)
  mp[name2[i]]++;
  int f1=0,f2=0;
  int i=0,j=n1-1;
  //cout<<temp;
  while(i<j)
  {
      if(temp[i]!=temp[j])
      {
         // if(temp[i]<temp[j])
         // {
                 auto it=mp.find(temp[i]);
                 if(it!=mp.end())
                 {
                    // cout<<it->first<<endl;
                    char c=it->first;
                     //swap(temp[i],it->first);
                     temp[i]=c;
                     it->second--;
                 }
                 else f1=1;
        //  }
         /// else 
         // {
                auto itt=mp.find(temp[j]);
                if(itt!=mp.end()&&f1==0)
                {
                    // cout<<it->first<<endl;
                   char c=itt->first;
                     //swap(temp[i],it->first);
                     temp[j]=c;
                     itt->second--;
                }
                else f2=1;
          
      }
      i++;
      j--;
      if(f1==1&&f2==1)
      break;
      f1=0;
      f2=0;
  }
  cout<<temp<<"\n";
  if(f1==1&&f2==1)
  cout<<"NO\n";
  else cout<<"YES\n";
  //cout<<temp;
  //for(auto &i:d) cout<<i<<" ";
}
return 0;
}
