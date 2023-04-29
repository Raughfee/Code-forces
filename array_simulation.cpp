#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int t;
    cin >> t;
    int n, m;
    for (int i = 1; i < t;i++)
    {
        cin >> n >> m;
        int arr[n];
        for (int j = 0; j <= n;j++)
        {
            cin >> arr[i];
        }
        char op;
        int temp;
        for (int k = 0; k < m;k++)
        {
            cin >> op;
            if(op=='S')
            {
                cin >> temp;
                for (int j = 0; j < n;j++)
                {
                    arr[j] += temp;
            
                }
                
            }
            else if(op =='M')
            {
                cin >> temp;
                for (int j = 0; j < n;j++)
                {
                    arr[j] *= temp;
                    
                }
                

            }
            else if(op =='D')
            {
                cin >> temp;
                for (int j = 0; j < n;j++)
                {
                    arr[j] /= temp;
                    
                }
                
            }
            else if(op =='P')
            {
                int x, y;
                cin >> x >> y;
                swap(arr[x], arr[y]);
                
            }

            else if(op =='R')
            {
                int x = 0, y = n - 1;
                while(x<=y)
                {
                    swap(arr[x], arr[y]);
                    x++;
                    y--;
                }
                
            }
        
        }
        printf("case %d:\n", i);
        for (int j = 0; j < n;j++)
        {
            if(j!=n-1)
            {
                printf("%d", arr[j]);
            }
            else
            {
                printf("%d", arr[j]);

            }
        }
        printf("\n");
    }
    return 0;
 }