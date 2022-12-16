#include <iostream>
#include<bits/stdc++.h>
#include <sstream>
using namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     vector<long> s(points.size());
    for (int i = 0; i < points.size(); ++i)
      s[i] = (static_cast<long>(points[i][0] * points[i][0] + 
                                points[i][1] * points[i][1]) << 32) | i;
    sort(begin(s), end(s));
    
    vector<vector<int>> ans(k);
    for (int i = 0; i < k; ++i)
      ans[i] = points[static_cast<int>(s[i])];
    return ans;
  }   
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    return 0;
}