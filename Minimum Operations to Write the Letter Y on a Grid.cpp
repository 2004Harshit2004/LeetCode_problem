class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_map<int,int> mp1;
        int i=0,j=0;
        while(i<n){
            if(i<=n/2){
                mp1[grid[i][j]]++;
                if(i!=n/2) ++j;++i;
            }
            else{
                mp1[grid[i][j]]++;
                ++i;
            }
        }
        i=0,j=n-1;
        while(j!=n/2){
            mp1[grid[i][j]]++;
            --j;++i;
        }
        
        unordered_map<int,int> mp2;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                mp2[grid[i][j]]++;
            }
        }
        
        int mxf1=0;
        int mxf2=mxf1;
        int mxe1,mxe2;
        for(auto ele:mp2){
            ele.second=ele.second-mp1[ele.first];
            if(ele.second>mxf1){
                mxf2=mxf1;
                mxe2=mxe1;
                mxf1=ele.second;
                mxe1=ele.first;
            }
            else if(ele.second>mxf2){
                mxf2=ele.second;
                mxe2=ele.first;
            }
        }
        
        int Mxf1=0;
        int Mxf2=0;
        int Mxe1,Mxe2;
        for(auto ele:mp1){
            if(ele.second>Mxf1){
                Mxf2=Mxf1;
                Mxe2=Mxe1;
                Mxf1=ele.second;
                Mxe1=ele.first;
            }
            else if(ele.second>Mxf2){
                Mxf2=ele.second;
                Mxe2=ele.first;
            }
        }

        int YE=n+n/2;
        int rem=n*n-YE;
        
        if(mxe1!=Mxe1){
            int count=rem-mxf1+YE-Mxf1;
            return count;
        }
        else{
            int count1=0,count2=0;
            count1=rem-mxf2+YE-Mxf1;
            count2=rem-mxf1+YE-Mxf2;
            return min(count1,count2);
        }

        return 0;
        
    }
};