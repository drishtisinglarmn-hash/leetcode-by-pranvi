class Solution {
public:
    string removeDuplicates(string s) {
        string st;

        if(st.empty()){
            for(char ch:s){
                if(st.empty()){
                    st.push_back(ch);
                }else{
                    if(ch==st.back()){
                        st.pop_back();
                    }else st.push_back(ch);
                }
            }
        }
        return st;
        
    }
};