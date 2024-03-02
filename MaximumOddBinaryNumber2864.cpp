class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int j=n-1;
        if(s[j]=='1') --j;
        else{   
            while(s[j]=='0'){
                --j;
            }
            swap(s[j],s[n-1]);
        }
        int i=0;
        while(i<j){
            while(i<n && s[i]!='0'){
                ++i;
            }
            while(j>=0 && s[j]!='1'){
                --j;
            }
            if(i<j) swap(s[i],s[j]);
        }
        return s;
    }
};