class Solution {
public:

    //Time complexity = O(n)
    //Space complexity =O(1)

    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;++i){
            if(nums[i]<k) count++;
        }
        return count;
    }
};