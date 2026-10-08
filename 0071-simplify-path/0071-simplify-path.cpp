class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;

        string part="";

        for(int i=0;i<=path.size();i++){

            if(i==path.size() || path[i] == '/'){
                if (part == "..") {
                    if (!st.empty())
                        st.pop_back();
                }
                else if (part != "" && part != ".") {
                    st.push_back(part);
                }

                part = "";
            }
            else{
                part+=path[i];
            }

        }
        string ans = "";

        for (string folder : st) {
            ans += "/" + folder;
        }

        return ans.empty() ? "/" : ans;
 }
  
};
