class Solution {
public:
    string predictPartyVictory(string senate) {
        stack<char>st;
        st.push(senate[0]);
        int i=1;
        while(i<senate.length()){
            if(st.empty()){
                st.push(senate[i]);
                i++;
            }
            else if(st.top()!=senate[i]){
                senate=senate+st.top();
                st.pop();
                i++;
            }
            else{
                st.push(senate[i]);
                i++;
            }
        }
        if(st.top()=='R'){
            return "Radiant";
        }
        return "Dire";
    }
};
        
