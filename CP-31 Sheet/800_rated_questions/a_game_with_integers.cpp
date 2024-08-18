#include <iostream>

using namespace std;

int f(int n, int times)
{
    if (n % 3 == 0)
        return 1;
    else if (times >= 10)
        return 0;

    f(n - 1, times + 1);
    f(n + 1, times + 1);
    return 0;
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (f(n, 0))
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }

    return 0;
}