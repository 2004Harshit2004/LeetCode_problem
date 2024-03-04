class Solution {
public:

    // Time Complexity=O(nlogn)
    // Space Complexity=O(1)

    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int i=0,j=n-1;
        int score=0;
        while(i<=j){
            if(power>=tokens[i]){
                score++;
                power-=tokens[i];
                ++i;
            }
            else if(score>0 && j-i>0){
                score--;
                power+=tokens[j];
                --j;
            }
            else break;
        }

        return score;
    }
};