#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int> st;
    if(n==0) return 0;
    int longest=1,cnt=0;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }    
    for(auto it:st)
    {
        if(st.find(it-1)==st.end())
        {
            cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
        }
        longest=max(longest,cnt);
    }
    return longest;
}