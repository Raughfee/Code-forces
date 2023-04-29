#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right = n-1;
    int sereja = 0;
    int deema = 0;
    int taken = n;
    int turn = 0;
    while(taken != 0)
    {
        if(turn % 2 == 0)
        {
            if(arr[left]>arr[right])
            {
                sereja += arr[left];
                left++;
            }
            else
            {
                sereja += arr[right];
                right--;
            }
        }
        else
        {
            if(arr[left]>arr[right])
            {
                deema += arr[left];
                left++;
            }
            else
            {
                deema += arr[right];
                right--;

            }
        
        }
        taken--;
        turn++;

    }
    cout << sereja <<" "<< deema;
}