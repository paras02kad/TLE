




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

vector<vector<string> >ans;

bool isValidate(int row,int col,vector<string>&grid)
{

	for (int i = row-1; i >=0 ; --i)
	{
		if(grid[i][col] == 'Q')
			return false;
	}

	for (int i = row-1,j = col-1; i>=0 && j>=0; --i,--j)
	{
		if(grid[i][j] == 'Q')
			return false;
	}

	for (int i = row-1,j = col+1; i>=0 && j < grid.size(); --i,++j)
	{
		if(grid[i][j] == 'Q')
			return false;
	}

	return true;
}


void f(int n,int row,vector<string>&grid)
{
	if(row == n)
	{
		vector<string>temp;
		for (int i = 0; i < n; ++i)
		{
			string str;
			for (int j = 0; j < n; ++j)
			{
				str = str + grid[i][j];
			}
			temp.push_back(str);
		}

		ans.push_back(temp);
		return;
	}

	
	for (int i = 0; i < n; ++i)
	{
		grid[row][i] = 'Q';
		if(isValidate(row,i,grid))
			f(n,row+1,grid);
		grid[row][i] = '.';
	}

}

vector<vector<string> >sudokuSolver(int n)
{
	ans.clear();
	vector<string>grid(n,string(n,'.'));
	f(n,0,grid);
	return ans;

}


int main() 
{
	init_code();

	int n  = 4;


	vector<vector<string> >ans = sudokuSolver(n);

	debug(ans);



	return 0;
}












