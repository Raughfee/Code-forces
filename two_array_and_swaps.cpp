#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr1[n];
        int arr2[n];
        int sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            
            cin >> arr1[i];
            sum1 += arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
        reverse(arr2, arr2 + n);
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] < arr2[i])
            {
                swap(arr1[i], arr2[i]);
                b++;
                if(b==k)
                {
                    break;
                }
            }

        }
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            sum2 += arr1[i];
        }
        if(k==0)
        {
            cout << sum1 << endl;
        }
        else
        {
            cout << sum2 << endl;
        }
    }

}