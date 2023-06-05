#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> mergeInt;
    if(intervals.size()==0)
    {
        return mergeInt;
    }
    sort(intervals.begin(),intervals.end());
    vector<int> tempInt=intervals[0];
    for(auto it:intervals)
    {
        if(it[0]<=tempInt[1])
        {
            tempInt[1]=max(it[1],tempInt[1]);
        }
        else
        {
            mergeInt.push_back(tempInt);
            tempInt=it;
        }
    }
    mergeInt.push_back(tempInt);
    return mergeInt;
}