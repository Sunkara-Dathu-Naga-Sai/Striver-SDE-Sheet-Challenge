#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  map<int,int> prefixSum;
  int n=arr.size();
  int k=0;
  int sum=0,maxLen=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
    if(sum==k)
    {
      maxLen=max(maxLen,i+1);
    }
    int rem=sum-k;
    if(prefixSum.find(rem)!=prefixSum.end())
    {
      int len=i-prefixSum[rem];
      maxLen=max(maxLen,len);
    }
    if(prefixSum.find(sum)==prefixSum.end())
    {
      prefixSum[sum]=i;
    }
  }
  return maxLen;
}