#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int blanks = 0;
        int val = 0;
        bool flag = true;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '.')
            {
                val++;
                blanks++;
                if (blanks >= 3)
                {
                    cout << 2 << endl;
                    flag = false;
                    break;
                }
            }
            if (s[j] != '.')
                blanks = 0;
        }
        if (flag)
            cout << val << endl;
    }

    return 0;
}