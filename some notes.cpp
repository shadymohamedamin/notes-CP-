
seive prime


string letters="0123456789ABCDEF";
int to_int(char c){return letters.find(c);}
int fromanybasetodecimal(string n,int base)
{
    int res=1;
    for(int i=0;i<n.size();i++){res*=base,res+=to_int(n[i]);}
    return res;
}
string fromdecemiltoanybase(int n,int base)
{
    if(n==0) return "0";
    string res="";
    for(;n;n/=base) res+=letters[n%base];
    return res;
}








#include <bits/stdc++.h>
using  namespace  std;
typedef  long long ll;
using cd = complex<double>;
const double PI = acos(-1);
#define all(x) x.begin(), x.end()
 
//you should really read the stuff at the bottom
ll mod = 1e9 + 7;
const int N = 3e6 + 10;
ll factorial[N];
 
ll power(ll a, ll b){
        if(b < 0) return 1;
        ll res = 1;
        while(b){
                if(b & 1) res = res * a % mod;
                a = a * a % mod;
                b >>= 1;
        }
        return res;
}
 
ll mod_inv(ll n){
        return power(n, mod - 2);
}
 
ll nck(ll n, ll a){
        if(n < a) return 0;
        ll top = factorial[n];
        ll bot = mod_inv(factorial[a]) * mod_inv(factorial[n - a]); bot %= mod;
        ll res = top * bot % mod;
        return res;
}
 
void init(){
        factorial[0] = 1;
        for(int i = 1; i < N; i++){
                factorial[i] = factorial[i - 1] * i;
                factorial[i] %= mod;
        }
}













//intersect of two ectors

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        set_intersection(v1.cbegin(),v1.cend(),v2.cbegin(),v2.cend(),back_inserter(n));
	
	 set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(n));













int count_prime_in_range(int n)
{
    int c=0;
    vector<bool>isprime(n+1,true);
    isprime[0]=isprime[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(isprime[i])
        for(int j=i*2;j<=n;j+=i)
        isprime[j]=0;
    }
    for(int i=0;i<n.size();i++)
        if(isprime[i])
        c++;
    return c;
}






long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}



long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}







 for(ll i=1;i<(1<<n);i++)   //bit masks
 {
     ll bits=0;
     for(ll j=0;j<m;j++)
     {
         if(i&(1<<j))
         {
             bits++;
           
           
           
           
           
           
           
           
           while(~scanf("%lld%lld",&n,&m))

nums.erase( unique( nums.begin(), nums.end() ), nums.end() );   
           
           
           
                  string name=to_string(x);  //from int to string
        long long y=stoll(name);   //from string to int
    tolower  //to lower case of char
    isalpha()      to check if this alpha or not
      
      
      
ll fast_pow(ll a,ll b,ll M)
{
    ll res = 1;
    while ( b > 0 )
    {
        if ( b&1 ) res = (res*a)%M;
        a = (a*a)%M;
        b >>= 1;
    }
    return res;
}

           
           
           
           
           std::partial_sort(v.begin()+s1,v.begin()+s2,v.end());
           
           
           
           
           
           
               for(ll j=0;j<31;j++)
        {
         p=1;
         p=1<<j;
         cout<<p<<" ";
         //1 2 4 8 16 32 64 128 256 512 1024
        }
           
           
           
           
           
           bool isPowerOfTwo (int x) 
{ 
  /* First x in the below expression is       
    for the case when x is 0 */
  return x && (!(x&(x-1)));                //consider 16 : 10000 (16-1) = 15 : 01111 
} 
           
           
           dequeue
//int value = d.at(index);    // index






//v.insert(v.begin() + index, value); 


 #include <stdlib.h> 
#include <time.h> 
 srand(time(0)); 
num = (rand() % (upper – lower + 1)) + lower


  
      char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
 
    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];
     
           
           
           
           
           
           ll index_prime(ll n)
{
    ll idx=0;
    ll temp=0;
    ll first=2;
    while(idx!=n)
    {
        int f=0;
        for(ll i=2;i*i<=first;i++)
        {
            if(first%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            idx++;
            temp=first;
        }
        first++;
    }
    return temp;
}
           
           
           
           
           
           
           
           
           
           
           
           
            double x =(-1+(sqrt(1+8*n)))/2;
    k=x;
    if(x!=k)k++;
           
           
           
           
           
           
           const double  EPS = 1e-6;
int dcmp(double x, double y) {
	if (fabs(x - y) < EPS)
		return 0;
	return (x < y ? -1 : 1);
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
           
           
#define Pi 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679           
           
           
 int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
		 
		 
		 
		 
#include<bits/stdc++.h>
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;
int n,m;
char arr[110][110];
int visit[110][110];
struct info
{
    int x,y,step;
};
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int bfs(int x,int y)//,vector<vector<char> >&arr,vector<vector<int> >&visit)
{
    info now;
    queue<info>q;
    memset(visit,0,sizeof(visit));
    //while(q.size())q.pop();
    now.x=x;
    now.y=y;
    now.step=0;
    q.push(now);
    visit[now.x][now.y]=1;
    while(!q.empty())
    {
     info next;
     now=q.front();
     q.pop();
     if(arr[now.x][now.y]=='X') return now.step;
     for(int i=0;i<4;i++)
     {
         int r=now.x+dx[i];
         int c=now.y+dy[i];
         if(r<n&&r>=0&&c<m&&c>=0&&!visit[r][c]&&(arr[r][c]=='.'||arr[r][c]=='X'))
         {
             visit[r][c]=1;
             next.x=r;
             next.y=c;
             next.step=now.step+1;
             q.push(next);
         }
     }
    }
    return INT_MAX;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        //vector<vector<char> >arr(n,vector<char>(m));
        //vector<vector<int> >visit(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int d_saly=INT_MAX,d_cockroache=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='*')
                {
                    d_cockroache=min(d_cockroache,bfs(i,j));//,arr,visit));
                }
                if(arr[i][j]=='S')
                {
                    d_saly=min(d_saly,bfs(i,j));//,arr,visit));
                }
            }
        }
        if(d_saly<d_cockroache) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
		 
		 
		 
		 
		 
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
    //int n;
     fast();
    cin>>n;
    vector<vector<int> >visit(n,vector<int>(n,0));
    vector<vector<char>>arr(n,vector<char>(n));//<char,>>arr;
    c=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    fun(0,0,arr,visit);
    cout<<c;
	
	
	
	
	
	
	
	
	
	
	
	
	
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
           
           
           
           
