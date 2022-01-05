string printMinNumberForPattern(string S){
    stack<int> st;
    string ans = "";
    int num=1;
    for(int i=0;i< S.size();i++)
    {
        char c = S[i];
        if(c=='D')
            st.push(num++);
        else
        {
            st.push(num++);
            while(!st.empty()){
                char c1 = '0'+st.top();
                ans.push_back(c1);
                st.pop();
            }
        }
    }
    st.push(num++);
    while(!st.empty())
    {
        char c1 = '0'+st.top();
        ans.push_back(c1);
        st.pop();
    }
    return ans;
}
