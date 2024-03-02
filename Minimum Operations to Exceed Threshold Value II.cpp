class Solution {
public:
    
    //Time Complexity=O(n)
    //Space Complexity=O(n)
    
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<n;++i){
            pq.push(nums[i]);
        }
        
        int count=0;
        while(pq.top()<k){
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();
            long long hg = (long long) min(x, y) * 2 + (long long) max(x, y);
            pq.push(hg);
            count++;
        }
        return count;
    }
};