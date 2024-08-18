#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> val_on_boxes;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            val_on_boxes.push_back(a);
        }

        if (k == 1 && !is_sorted(val_on_boxes.begin(), val_on_boxes.end()))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}