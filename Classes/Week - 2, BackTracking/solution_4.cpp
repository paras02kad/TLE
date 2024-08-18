




#include<bits/stdc++.h>

using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("Error.txt", "w", stderr);
#endif
}
string string_sum(string s1,string s2)
{
	if(s1.size() < s2.size())
		swap(s1,s2);



	int m = s1.length();
	int n = s2.length();
	string ans = "";

	int carry = 0;


	for (int i = 0; i < n; ++i)
	{

		int ds = ((s1[m - 1 - i] - '0') + (s2[n-1-i] - '0') + carry)%10;
		carry = ((s1[m - 1 - i] - '0') + (s2[n-1-i] - '0') + carry)/10;
		ans = char(ds + '0') + ans;
	}

	for (int i = n; i < m; ++i)
	{

		int ds = ((s1[m - 1 - i] - '0') + carry)%10;
		carry = ((s1[m - 1 - i] - '0') + carry)/10;
		ans = char(ds + '0') + ans;
	}


	if(carry)
		ans = char(carry + '0') + ans;

	return ans;


}


bool checkSumutil(string s,int beg,int l1,int l2)
{
	string s1 = s.substr(beg,l1);
	string s2 = s.substr(beg+l1,l2);
	string s3 = string_sum(s1,s2);


	int s3_len = s3.size();


	if(s3_len > s.length() - l1 - l2 - beg)
		return false;

	if(s3 == s.substr(beg + l1 + l2,s3_len))
	{
		if(beg+l1 +l2 + s3_len == s.size())
			return true;

		return checkSumutil(s,beg+l1,l2,s3_len);

	} 

	return false;

}

int isSumString(string S)
{
	int n = S.length();


	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j + i < n; ++j)
		{
			if(checkSumutil(S,0,i,j))
				return true;
		}
	}

	return false;
}


int main() 
{
	init_code();


	string a  = "12243660";
	cout<<isSumString(a)<<endl;




	return 0;
}












