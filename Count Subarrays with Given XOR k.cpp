#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int cnt=0,xr=0;
    map<int,int> mpp;
    mpp[xr]++;
    for(int i=0;i<arr.size();i++)
    {
        xr=xr^arr[i];
        int k=xr^x;
        cnt+=mpp[k];
        mpp[xr]++;
    }
    return cnt;
}