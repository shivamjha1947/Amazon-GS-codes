vector<vector<string>> Anagrams(vector<string> &string_list) {
    unordered_map<string, vector<string>> ans_map;
    for(string &s: string_list) {
        string copy = s;
        sort(copy.begin(), copy.end());
        ans_map[copy].push_back(s);
    }
    vector< vector<string> > ans;
    for(auto v: ans_map) {
        ans.push_back(v.second);
    }
    return ans;
}
