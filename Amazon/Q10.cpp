void matchPairs(char nuts[], char bolts[], int n){
    unordered_map<char, int> hash;
    for (int i = 0; i < n; i++)
        hash[nuts[i]] = i;
    for (int i = 0; i < n; i++){
        if (hash.find(bolts[i]) != hash.end())
            nuts[i] = bolts[i];
    }
    sort(nuts, nuts + n);
    sort(bolts, bolts + n);
}
