#include<bits/stdc++.h>
using namespace std;
// long long int a[1000000];
int main()
{
    int t;
    int sum1;
    int sum2;
    int n;
    cin >> t;
    while(t--)
    {
        
        cin >> n;
        sum1 = sum2 = 0;

        if(n % 4 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for(int j = 2; j <= n; j += 2)
            {
                cout << j <<" ";
                sum1 += j;
            }
            for (int k = 1; k <= n - 2; k += 2)
        
            { 
                sum2 += k;
                cout << k <<" ";
                
                
                
            }
             cout << sum1 - sum2  << endl;
            
        } 
        
            
    }
    
}
