/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define shady ios_base::sync_with_stdio(false);cin.tie(NULL);
bool vowel(char c) {return (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');}
int main()
{
    shady
    /*string name="FOXEN";
    int arr[26]={0};
    for(int i=0;i<name.size();i++)
    arr[name[i]-'A']++;
    for(int i=0;i<26;i++)cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<26;i++)cout<<(char)(i+'A')<<" ";*/
    ll t;
    cin>>t;
    while(t--)
    {
         string name;
         cin>>name;
         int arr[26]={0};
         ll c=0,v=0;
         set<char>s;
         for(int i=0;i<name.size();i++)
         {
            if(vowel(name[i])) v++;
            else c++;
         arr[name[i]-'A']++;
         s.insert(name[i]);
         }
         if(s.size()==1) {cout<<0<<"\n";continue;}
         if(c>0&&v==0) {cout<<c<<"\n";continue;}
         if(c==0&&v>0){cout<<v<<"\n";continue;}
         int mn=INT_MAX;
         for(int i=0;i<26;i++)
         {
             if(arr[i]>0)
             {
             int sum=0;
             for(int j=0;j<26;j++)
             {
                 if(i!=j&&arr[i]>0)
                 {
                    if(vowel((char)(i+'A'))&&vowel((char)(j+'A'))) sum+=2*arr[j];
                    else if((!vowel((char)(i+'A')))&&(!vowel((char)(j+'A')))) sum+=2*arr[j];
                    else if((vowel((char)(i+'A')))&&(!vowel((char)(j+'A')))) sum+=arr[j];
                    else if((!vowel((char)(i+'A')))&&(vowel((char)(j+'A')))) sum+=arr[j];
                 }
             }
             mn=min(sum,mn);
             }
         }
         cout<<mn<<"\n";
    }
    return 0;
}
