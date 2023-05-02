class Solution {
public:
    int arraySign(vector<int>& num) {
        int cnt=0;
        for(auto it:num){
            if(it==0)
                return 0;
            if(it<0){
                cnt++;
            }
        }
        if(cnt%2==0)
            return 1;
        else
            return -1;
    }
};