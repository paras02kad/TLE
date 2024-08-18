#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x_k, y_k, x_q, y_q;
        cin >> x_k >> y_k;
        cin >> x_q >> y_q;

        vector<vector<int> > tester = {{a, b}, {-a, b}, {a, -b}, {-a, -b}, {b, a}, {-b, a}, {b, -a}, {-b, -a}};

       set<pair<int, int>> kings, queens;

        for (auto d : tester)
        {
            int x_1 = x_k + d[0];
            int y_1 = y_k + d[1];
            kings.insert(make_pair(x_1, y_1));

            int x_2 = x_q + d[0];
            int y_2 = y_q + d[1];
            queens.insert(make_pair(x_2, y_2));
        }
        int ans = 0;

        for (auto pos : kings)
        {
            if (queens.find(pos) != queens.end())
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}