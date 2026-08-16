class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st;
        for(int asteroid:asteroids){
            bool alive = true;

            while(!st.empty() && asteroid<0 && st.back()>0){
                if (st.back() < abs(asteroid)){
                     st.pop_back();
                }
                else if(st.back()==abs(asteroid )){
                    st.pop_back();
                    alive =false;
                    break;
                }else{
                    alive =false;
                    break;
                }
                
            }
            if(alive){
                st.push_back(asteroid);
            }

        }

        return st;

    }
};