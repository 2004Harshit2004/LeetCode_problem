class Solution {
public:

    // Time  Complexity = O(n)
    // Space Complexity = O(n)

    int pivotInteger(int n) {
        if(n==1) return 1;
        vector<int> v;
        v.push_back(1);
        for(int i=2;i<=n;++i){
            v.push_back(v[v.size()-1]+i);
        }
        // return v[v.size()-1];

        for(int i=1;i<v.size();++i){
            if(v[i]==(v[v.size()-1]-v[i-1])) return i+1;
        }
        return -1;
    }
};