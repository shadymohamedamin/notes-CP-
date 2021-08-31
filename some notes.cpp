            c1+=(arr[i]&1);     //right
            if(arr[i]&1) c1+=arr[i]; //wrong





        //max gcd
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int mx=0;
        for(int i=0;i<n-1;i++)
        {
            mx=max(mx,__gcd(arr[i],arr[i+1]));
        }
        int c=0;
        int mx1=0;
        for(int i=0;i<n;i++)
        {
            if((arr[i]%mx)==0)
            c++,mx1=max(mx1,c);
            else mx1=max(mx1,c),c=0;
        }
//max lcm
lcm(n,n-1);









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
	
	
	
	
	
	getline(cin>>ws,name);
	
	
	
	
	
	
	//bitset

	bitset<32>a1;  // intialize with 32 '0' in binary represention
	bitset<32>a2(30); // decimal convert 30 to binary 
	bitset<6>a3("010101");  // binary 
 
 
	cout << a1 << endl;
	cout << a2 << endl;
	cout << a3 << endl;
 
	// operators  == , !=  , ^ , & , | , << , >> , ~  
 
	// functions any , count , reset 
 
	if (a1.any()){ 
		// return bool true if found any bit with '1'
	}
	cout << a1.count() << endl; // return numbers of ones 
 
	a1.flip(); // flip all bits 1 to 0 and 0 to 1
 
	a1.flip(3); // flip specific bit 
 
	a1.reset(); // make all bits 0 
 
	a1.reset(3); // reset specific bit
 
	a1.set(); // make all bit is 1
 
	a1.set(3,1); // make spcific bit is 1
	a1.set(3, 0); // make specif bit is 0
 
 
 
	// iterate in bitset  
	// Note : index start from right not left
	// a1[0] mean first right of bitset variable 
 
	// 010101  will print 101010 
	// abced
	for (int i = 0; i < a3.size(); i++){
		cout << a3[i];
	}
	cout << endl;
 
	string x = a3.to_string();
 
	cout << x << endl;
	cout << a3.to_ulong() << endl;
	cout << a3.to_ullong() << endl;
}
		 

		 
		 
		 
		 
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef	long long ll;
#define all(v) ((v).begin()),((v).end())
#define PI(n) ((double)acos(n))
int dx8[8] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int dy8[8] = { 0, 0, 1, -1, 1, -1, 1, -1 };
void file(){
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);//freopen("in.txt", "r", stdin);
#else 
#endif
}
void fast(){
	std::ios_base::sync_with_stdio(0); cin.tie(NULL);
}
int main()
{
	int a[5] = { 5, 2, 1, 3, 1 };
	vector<int>v(5);
	v = { 5, 2, 1, 3, 1 };
	string x = "bcdea";
	// array , vector , string
	// sort ,reverse 
	sort(a, a + 5); // sort ( name , name + size )
	sort(a + 3, a + 5); // sort in range [3 , 5)
	reverse(a, a + 5);
 
	sort(v.begin(), v.end()); // sort  ( name.begin(),name.end())
	sort(v.begin() + 3, v.begin() + 5); // sort in range [3,5)
	reverse(v.begin(), v.end());
 
	sort(x.begin(), x.end());
	reverse(x.begin(), x.end());
 
	//Count , binary_search , Lower_bound ,Upper_bound
 
	int  c = count(a, a + 5, 10); // count( name , name + size , value )
	int f  = binary_search(a,a+5,10); // same
 
	// get index of first value equal or greater than value given
	// array must be sorted 
	sort(a, a + 5);
	sort(v.begin(), v.end()); // 1 2 3 4 4
	int idx1 =  lower_bound(a, a + 5, 5) - a;
	int idx2 = lower_bound(v.begin(),v.end(), 2) - v.begin();
	int idx3 = upper_bound(a, a + 5, 2) - a;
	int idx4 = upper_bound(v.begin(),v.end(), 2) - v.begin();
	cout << idx1 << endl;
	cout << idx2 << endl;
	cout << idx3 << endl;
	cout << idx4 << endl;
	// fill , max_element ,  remove , Is_sorted(c++11)
 
	/*fill(a, a + 5, 10);
	fill(v.begin(), v.end(), 5);*/
	int mx = *max_element(a, a + 5);
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl; // 1 2 3 4 5
	remove(a, a + 5, 2); // it not remove actually it replace with last elemnt and decrese size
	remove(v.begin(), v.end(), 5); // remove all values 5 from vector or array
 
	for(int i = 0; i < 5; i++)
		cout << a[i] << " ";
 
	bool ok = is_sorted(a, a + 5);
 
	//next_permutation
	cout << endl;
	x = "abc"; // o(n!)
	do{
		cout << x << endl;
	} while (next_permutation( x.begin() , x.end() ));
}
		 
		 

		 
		 
		 
		 
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
struct point {
	int x, y;
};
struct person {
	string name;
	int age;
};
int main()
{
	file();
	fast();
	// struct pair vector 
	// decleartin and intialize struct 
	point p;
	p.x = 1;
	p.y = 2;
	// take from user 
	cin >> p.x >> p.y;
	cout << p.x << " " << p.y << endl;
	// array of struct 
	point arr[100];
	for (int i = 0; i < 3; i++){
		cin >> arr[i].x >> arr[i].y;
	}
	for (int i = 0; i < 3; i++){
		cout << arr[i].x << " " << arr[i].y << endl;
	}
 
 
	// pair 
	pair<int, int> a; // a.first  a.second 
	cin >> a.first >> a.second;
	cout << a.first << " " << a.second << endl;
 
	// array of pair
	pair<int, int> arr1[100];
	// int arr1[100];
	for (int i = 0; i < 3; i++){
		cin >> arr1[i].first >> arr1[i].second;
	}
	for (int i = 0; i < 3; i++){
		cout << arr1[i].first << " " << arr1[i].second << endl;
	}
 
	// Vector 
	 //  0 1 2 3   4 
	 //  5 3 1 10 20
	// decleration 
	int n;
	cin >> n;
	vector<int> v1(100);  // same as int v1[100];
	for (int i = 0; i < n; i++){
		cin >> v1[i];
	}
	vector<int> v2(n);
	for (int i = 0; i < n; i++){
		cin >> v2[i];
	}
	vector<int> v3;
 
	// 0 5 10 
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		v3.push_back(a);
	}
	int sz = v3.size();
	v3.clear();
	bool isempty = v3.empty();
 
	v3.resize(100);
	v3.resize(n);
 
	vector<int> v4(100, 5);
	// 5 5 5 5 ... 
	v4.pop_back(); // size decrease by 1 
	cout << v4.size() << endl; // size 99
 
	int first = *v4.begin();
	/*
		 erase
	*/
	// 0 1 2 3 
	v4.erase(v4.begin()+3); // erase elemnt with postion 3
 
	v4.erase(v4.begin() + 1, v4.begin() + 5); // erase range from [1 , 5)
 
	// vector 2D 
	vector< vector<int> >v5; // int v5[][];
	vector<vector<int> >v5 (50,vector<int>(50)); // int v5[50][50];
	      // int 
	vector<pair<int, int> > v6;
	vector<point> v8;
	vector<pair<pair<int,int>,float> > v7;
 
	//
	v7[0].first.first;
	v7[0].first.second;
	v7[0].second;
 
	// practise practise practise practise 
 
}
		 
		 
		 
		 
		 
Log n.          10^18
N                   10^8
N logn.     4*10^7
N^2.              10^3
N^3.               500
N^4.               90
2^N.               20
N!                   11
	
	
	

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
using namespace std;
 
int main()
{
	int x, y, n;
	scanf("%d%d%d", &n, &x, &y);
	long long t;
	scanf("%lld", &t);
 
	double q;
	scanf("%Lf", &q);
 
 
	char s;
	scanf("%c", &s);
 
	printf("%Lf %d %lld %c\n", q, x, t, s);
 
	//scan arrays
	int m;
	char a[10000];
 
	gets(a);
	puts(a);
 
 
	scanf("%s", &a); // ahmed 
 
	// ahmed mohamed ali 
	cin >> t;
	cin.ignore();
	scanf("%[^\n]%*c", a); // with spaces  cin.igonre()
	cout << a << endl;
	string a1 = a;
	string ans1 = "asd";
	printf("%s\n", ans1.c_str());
 
 
	for (int i = 0; i < 5; i++){
		scanf("%d", &a[i]); // x y 
		scanf("%d", a + i);
	}
	for (int i = 0; i<5; i++)
		printf("%d ", a[i]);
 
	int array[5][5];
	int i, k;
	m = 5;
	for (i = 0; i < m; i++){
		for (k = 0; k < m; k++){
			scanf("%d", &(array[i][k]));
		}
	}
 
	for (i = 0; i < m; i++){
		for (k = 0; k < m; k++){
			printf("%d ", array[i][k]);
		}
		printf("\n");
	}
	// setprecison  and outbut double
	double test = 4.4;
	printf("%.9lf\n", test); // 4.40000000
 
}
		 
		 
		 
		 
		 
		 
    
