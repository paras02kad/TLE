




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
int arr_y[4] = {0,0,-1,1};

bool f(int row,int col,vector<vector<char> >&board,string& word,int indx)
{
	

	if(indx == word.size())
	{
		return true;
	}

	if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || word[indx]!= board[row][col])
		return false;

	char temp = board[row][col];
	board[row][col] = '#';

	for (int i = 0; i < 4; ++i)
	{
		bool flag = f(row+arr_x[i],col+arr_y[i],board,word,indx+1);
		if(flag)
			return true;
	}

	board[row][col] = temp;

	return false;
}

bool exist(vector<vector<char> >& board, string word) 
{

	char start = word[0];
	vector<vector<int> >vec;

	for (int i = 0; i < board.size(); ++i)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if(board[i][j] == start)
			{
				vector<int>veca;
				veca.push_back(i);
				veca.push_back(j);
				vec.push_back(veca);
			}
		}
	}


	for (int i = 0; i < vec.size(); ++i)
	{
		if(f(vec[i][0],vec[i][1],board,word,0))
			return true;
	}


	return false;
}


int main() 
{
	init_code();

	
	vector<vector<char> > board;

 char row1[] = {'A', 'B', 'C', 'E'};
    char row2[] = {'S', 'F', 'C', 'S'};
    char row3[] = {'A', 'D', 'E', 'E'};

    // Push each row array into the board vector
    board.push_back(vector<char>(row1, row1 + 4));
    board.push_back(vector<char>(row2, row2 + 4));
    board.push_back(vector<char>(row3, row3 + 4));


	string word = "ABCB";

	cout << exist(board,word) << endl;



	return 0;
}








