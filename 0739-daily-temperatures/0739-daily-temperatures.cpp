class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);

        vector<int>st;

        for(int i=n-1;i>=0;i--){

            while(!st.empty() && temperatures[i]>=temperatures[st.back()]){
                st.pop_back();
            }

            if(st.empty()){
                ans[i]=0;
                st.push_back(i);
            }else{
                ans[i]= st.back()-i;
                st.push_back(i);
            }
        }
        return ans;

    }
};