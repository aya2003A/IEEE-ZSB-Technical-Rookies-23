#include <bits/stdc++.h>

using namespace std;
class DetectSquares {
public:
    vector<vector<int>>points_c{1001,vector<int>(1001,0)};
    vector<vector<int>>points;
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        points.push_back(point);
        points_c[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        int x1=point[0],y1=point[1];
        int ans=0;
        for(auto& p3 :points)
        {
            int x3=p3[0],y3=p3[1];
            if(x1==x3 || abs(x1-x3)!=abs(y1-y3))
            continue;
            ans+=points_c[x1][y3]*points_c[x3][y1];
        }
        return ans;
    }
};
int main()
{
    
	return 0;
}

