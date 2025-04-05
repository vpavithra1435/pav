#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq; 
        
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        
        vector<int> arr;
        
        while (!pq.empty()) {
            int alice = pq.top(); 
            pq.pop();
            
            int bob = pq.top();
            pq.pop();
            
            arr.push_back(bob);   
            arr.push_back(alice); 
        }
        
        return arr;
    }
};
