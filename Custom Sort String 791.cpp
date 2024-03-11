class Solution {
public:

    // solved by hashmap
    // time complexity = O(n)
    // space complexity = O(nw)

    string customSortString(string order, string s) {
        int n=s.size();
        int m=order.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;++i){
            mp[s[i]]++;
        }
        string ans="";
        for(int i=0;i<m;++i){
            if(mp.find(order[i])!=mp.end()){
                while(mp[order[i]]!=0){
                    ans+=order[i];
                    mp[order[i]]--;
                }
                
            }
        }

        if(mp.size()==0) return ans;
        for(auto ele:mp){
            while(ele.second>0){
                ans+=ele.first;
                ele.second--;
            }
        }
        return ans;
    }
};