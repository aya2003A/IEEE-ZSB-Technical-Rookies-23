#include <iostream>
#include<bits/stdc++.h>
#include <sstream>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& vec) {
     sort(vec.begin(), vec.end(), greater<int>());
       while(vec.size()-1)
       {
           if(vec[0]==vec[1])
           {
                vec.erase(vec.begin());
                vec.erase(vec.begin());
                if(vec.size()<=1)
                break;
                sort(vec.begin(), vec.end(), greater<int>());
           }
           else
           {
               vec[1]=vec[0]-vec[1];
               vec.erase(vec.begin());
                sort(vec.begin(), vec.end(), greater<int>());
           }
       }
        if(vec.size())
           return vec[0];
           else
           return 0;
    } 
};
