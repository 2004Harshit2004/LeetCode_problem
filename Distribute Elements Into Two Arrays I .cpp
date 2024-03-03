class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        int a1=nums[0];
        int a2=nums[1];
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(a1);
        arr2.push_back(a2);
        for(int i=2;i<n;++i){
            if(a1>a2){
                arr1.push_back(nums[i]);
                a1=nums[i];
            }
            else{
                arr2.push_back(nums[i]);
                a2=nums[i];
            }
        }
        for(int i=0;i<arr2.size();++i){
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};