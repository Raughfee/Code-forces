#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    int maxindex = 0;
    int minindex = 0;
    int maxvalue = 0;
    int minvalue = 1000;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        if(x > maxvalue)
        {
            maxindex = i;
            maxvalue = x;

        }
        if(x <= minvalue)
        {
            minindex = i;
            minvalue = x;
        }

    }
    if(maxindex > minindex)
    {
        cout << (maxindex - 1) + (n1 - minindex) - 1;
    }
    else
    {
        cout << (maxindex - 1) + (n1 - minindex);
    }

    
}