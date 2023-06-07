#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++)
    {
        if(i>0&&arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n-2;j++)
        {
           if(j!=i+1&&arr[j]==arr[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                int sum=arr[i]+arr[j]+arr[k]+arr[l];
                if(sum==target) 
                {
                    return "Yes";
                    k++;
                    l--;
                    while(k<l&&arr[k]==arr[k-1]) k++;
                    while(k<l&&arr[l]==arr[l+1]) l--;
                }
                else if(sum<target) k++;
                else l--;
            }
        }
    }
    return "No";
}
