// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         vector<int> vec(n, 0);

//         for (int k = 0; k < n; k++)
//         {
//             int a;
//             cin >> a;
//             if (a > n)
//             {
//                 cout << "NO" << endl;
//                 continue;
//             }

//             vec[k] = a;
//         }
//         if (vec[0] != 1)
//         {
//             cout << "NO" << endl;
//             continue;
//         }

//         vector<int> test = vec;

//         for (int j = 1; j < n - 1; j++)
//         {
//             if (vec[j] > vec[j - 1] && vec[j] > vec[j + 1])
//             {
//                 swap(vec[j], vec[j + 1]);
//             }
//         }

//         sort(test.begin(), test.end());
//         if (test == vec)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        vector<int> vec;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }

        if (vec[0] != 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}