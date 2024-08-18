#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string data;
        cin >> data;
        unordered_map<char, int> mp;

        for (int j = 0; j < data.length(); j++)
        {
            mp[data[j]]++;
        }

        int odd = 0;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {

            odd += (it->second%2!=0);
        }

        if (k < odd - 1)
        {
            cout << "NO" << endl;
            continue;
        }
            cout << "YES" << endl;
    }

    

    return 0;
}