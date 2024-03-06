class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(j==i) return 1;
            if(s[i]!=s[j]) return j-i+1;
            else{
                while(i<j && s[i]==s[i+1]){
                    ++i;
                }
                while(i<j && s[j]==s[j-1]){
                    --j;
                }
                --j;
                ++i;
            }
        }
        return 0;
    }
};