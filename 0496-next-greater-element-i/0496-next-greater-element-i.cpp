class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>st;
        unordered_map<int, int> nge;
        vector<int>ans;

        int n=nums2.size()-1;
        int i=n;

        while(i>=0){
            if(st.empty()){
                st.push_back(nums2[i]);
                nge[nums2[i]]=-1;
                i--;
            }else{
                if(st.back()<nums2[i]){
                    st.pop_back();
                }else{
                    nge[nums2[i]]=st.back();
                    st.push_back(nums2[i]);
                    i--;
                }
            }
        }

        for (int x : nums1) {
            ans.push_back(nge[x]);
        }

        return ans;
    }
};