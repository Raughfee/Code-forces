#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t;i++)
    {
        int n;
        int m;
        cin >> n >> m;
        if(n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int a = n / 2;
            int b = m / a;
            int sum1 = b * (a - 1);
            int sum2 = m - sum1;
            if(n > 2)
            {
                cout << (2 * (sum1 + sum2)) << endl;
            }
            else
            {
                cout << sum1 + sum2 << endl;
            }
        }
    }
}