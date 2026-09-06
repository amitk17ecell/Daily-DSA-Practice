#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std ; 

class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n=position.size() ; 
        vector<pair<int,int>> robot ; 
        for(int i=0 ;i<n ; i++)
        {      robot.push_back({position[i],speed[i]}) ; 
        }
        sort(robot.begin(),robot.end()) ; 
        vector<double>merge(n,1e18) ;  
        for(int j=n-2 ; j>=0 ; j--){
            int  pos1 = robot[j].first ;
            int  spd1 = robot[j].second ; 
            auto pos2 = robot[j+1].first ;
            auto spd2 = robot[j+1].second ;
            if(pos2-pos1 <= distance) {
                merge[j]= 0 ; 
            }
            else if(spd1>spd2){
                     double t = (double)(pos2 - pos1 - distance) / (spd1 - spd2);
                if(t>=0) merge[j] = min (t,merge[j+1]) ; 
            }
        }
        int group = 0 ;
        double current = -1 ; 
        for(int i=0 ; i<n ; i++)
        {
            if(merge[i]>current)
            {
                group++ ; 
                current = merge[i] ; 
            }
        }
        return group ; 
    }
};