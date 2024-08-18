




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

int arr_x[4] = {-1,1,0,0};
int arr_y[4] = {0,0,1,-1};

//Using Helper of int return type
int helper(int r,int c,vector<vector<int>>&grid,int count_0,int& ans)
{

	if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == -1)
	{
		return 0;
	}


	if(grid[r][c] == 2)
	{

		if(count_0 == -1)
		{
			
			return 1;
		}
		return 0;
	}

	int temp = grid[r][c];
	grid[r][c] = -1;

	for (int i = 0; i < 4; ++i)
	{
		
		ans += helper(r+arr_x[i],c+arr_y[i],grid,count_0-1,ans);
		grid[r][c] = 0;
	}
	grid[r][c] = temp;

	return ans;

}



int uniquePathsIII(vector<vector<int>>& grid)
{
	int r = grid.size();
	int c = grid[0].size();
	int r_1 = -1,c_1 = -1;
	int count_0 = 0;

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if(grid[i][j] == 1)
			{
				r_1 = i;
				c_1 = j;

			}
			if(grid[i][j]==0)
				count_0++;

		}
	}


	 int ans = helper(r_1,c_1,grid,count_0,ans);
	return ans;

}


int main() 
{
	init_code();







	return 0;
}












