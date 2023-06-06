#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    int cnt1=0,cnt2=0;
    int el1=INT_MIN,el2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(cnt1==0&&arr[i]!=el2)
        {
            cnt1=1;
            el1=arr[i];
        }
        if(cnt2==0&&arr[i]!=el1)
        {
            cnt2=1;
            el2=arr[i];
        }
        else if(arr[i]==el1) cnt1++;
        else if(arr[i]==el2) cnt2++;
        else cnt1--,cnt2--;
    }
    cnt1=0,cnt2=0;
    vector<int> ls;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==el1) cnt1++;
        if(arr[i]==el2) cnt2++;
    }
    int mini=floor(n/3);
    if(cnt1>mini) ls.push_back(el1);
    if(cnt2>mini) ls.push_back(el2);
    return ls;

}