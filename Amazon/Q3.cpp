vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
    priority_queue<pair<int, int>> MAXQ;
    for(int i = 0; i < k; ++i) {
        MAXQ.push({arr[i], i});
    }
    vector<int>ans;
    ans.push_back(MAXQ.top().first);
    for(int i = k; i < n; ++i) {
        MAXQ.push({arr[i], i});

        while(!MAXQ.empty() && MAXQ.top().second <= i - k) {
            MAXQ.pop();
        }

        ans.push_back(MAXQ.top().first);
    }
    return ans;
}
