




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


void f(vector<vector<int> >&ans,vector<int>curr,vector<int>&candidates,int target,int indx)
{
	

		if(target == 0)
		{

			ans.push_back(curr);
			return;
		}
	
	

	for (int i = indx; i < candidates.size(); ++i)
	{
		if(i > indx && candidates[i] == candidates[i-1])
		
				continue;
		if(target < candidates[i])
			break;

		curr.push_back(candidates[i]);
		f(ans,curr,candidates,target-candidates[i],i+1);
		curr.pop_back();
	}
}

vector<vector<int> > combinationSum2(vector<int>& candidates, int target)
{
	sort(candidates.begin(),candidates.end());
	vector<vector<int> >ans;
	vector<int>curr;

	f(ans,curr,candidates,target,0);
	return ans;

}


int main() 
{
	init_code();

vector<int>candidates;

candidates.push_back(10);
candidates.push_back(1);
candidates.push_back(2);
candidates.push_back(7);
candidates.push_back(6);
candidates.push_back(1);
candidates.push_back(5);

int target = 8;


vector<vector<int> >ans = combinationSum2(candidates,target);
debug(ans);


	return 0;
}












