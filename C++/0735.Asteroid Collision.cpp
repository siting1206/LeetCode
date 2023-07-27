class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto a: asteroids){
            if(st.empty() || a>0) st.push(a);
            else{ // a<0
                while(!st.empty() && st.top()>0 && st.top()<abs(a)){
                    st.pop();
                }
                if(!st.empty() && st.top()==abs(a)) st.pop();
                else{
                    if(st.empty() ||  st.top()<0) st.push(a);
                }
            }
        }
        int sz = size(st);
        vector<int> ans(sz);
        while(!st.empty()){
            ans[--sz] = st.top();
            st.pop();
        }
        return ans;
    }
};
