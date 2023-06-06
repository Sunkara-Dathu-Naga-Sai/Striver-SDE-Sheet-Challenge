#include <bits/stdc++.h>  
long long mergeAndCount(long long *arr,int low,int mid,int high)
{
    int cnt=0,j=mid+1,k=0;
    vector<int> temp;
    int left=low,right=mid+1;
    while(left<=mid&&right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
            cnt=cnt+(mid-left+1);
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left++]);
    }
    while(right<=high)
    {
        temp.push_back(arr[right++]);
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
    return cnt;
}
long long mergeSort(long long *arr,int low,int high)
{
    if(low>=high) return 0;
    int mid=(low+high)/2;
    int inv=mergeSort(arr,low,mid);
    inv+=mergeSort(arr,mid+1,high);
    inv+=mergeAndCount(arr,low,mid,high);
    return inv;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long cnt=mergeSort(arr,0,n-1);
    return cnt;
}