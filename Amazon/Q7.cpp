string FirstNonRepeating(string A){
    queue<char> nrcq;
    vector<int> used(26, false);
    string ans = "";
    for(int i = 0; i < A.size(); ++i) {
        char c = A[i];
        char output;
        if(used[c - 'a'] < 1) {
            nrcq.push(c);
        }
        ++used[c - 'a'];
        while(!nrcq.empty() && used[nrcq.front() - 'a'] > 1) {
            nrcq.pop();
        }
        if(nrcq.empty()) {
            output = '#';
        }
        else {
            output = nrcq.front();
        }
        ans += output;
    }
    return ans;
}
