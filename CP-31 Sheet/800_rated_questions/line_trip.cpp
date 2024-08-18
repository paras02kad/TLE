#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        vector<int> vec;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }

        int min_vol = vec[0];

        for (int k = 0; k < n - 1; k++)
        {
            min_vol = max(abs(vec[k+1] - vec[k]), min_vol);
        }

        min_vol = max(min_vol, 2 * abs(x - vec[n - 1]));

        cout << min_vol << endl;
    }

    return 0;
}