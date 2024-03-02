class Solution {
public:

    // Time Complexity=O(n)
    // Space Complexity=O(n)

    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;++i){
            if(nums[i]<0) nums[i]=-nums[i];
            else break;
            j=i;
        }
        
        vector<int> ans;
        int i=j+1;
        while(1){
            if(i>n-1){
                while(j>=0){
                    ans.push_back(nums[j]*nums[j]);
                    --j;
                }
                break;
            }
            if(j<0){
                while(i<=n-1){
                    ans.push_back(nums[i]*nums[i]);
                    ++i;
                }
                break;
            }
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                ans.push_back(nums[j]*nums[j]);
                --j;
            }
            else{
                ans.push_back(nums[i]*nums[i]);
                ++i;
            }
        }
        return ans;
    }
};