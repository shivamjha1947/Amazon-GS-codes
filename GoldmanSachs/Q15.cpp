bool canPair(vector<int> nums, int k) {
    if(nums.size()%2 != 0) return false;
    map<int,int> mp;
    for(int i=0;i<nums.size();i++) mp[nums[i]%k]++;
    if(mp[0]%2 == 1)return false;
    for(int i=1;i<k;i++)
    {
        if(mp[i] != mp[k-i])
            return false;
    }
    return true;
}
