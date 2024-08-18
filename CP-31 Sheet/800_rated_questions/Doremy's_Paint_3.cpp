#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        bool flag = true;
        int n;
        cin >> n;
        unordered_map<int, int> mp;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            mp[a]++;
            if (mp.size() > 2)
            {
                flag = false;
                break;
            }
        }

        if (mp.size() == 2)
        {
            int f1 = begin(mp)->second;

            if (f1 != (n / 2) && f1 != ((n + 1) / 2))
            {
                flag = false;
            }
        }

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}