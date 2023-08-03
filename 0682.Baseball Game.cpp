class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int add1, add2, ans=0;
        for(auto op: operations){
            if(op=="+"){
                add1 = st.top();
                st.pop();
                add2 = st.top();
                st.push(add1);
                st.push(add1+add2);
            }
            else if(op=="D") st.push(2*st.top());
            else if(op=="C") st.pop();
            else st.push(stoi(op));
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
