int longestSubstring(string s, int k){
    int left = 0;
    int ans = 0;

    unordered_map<char,int> freq;

    for(int right = 0; right < left ; right++){

        freq[s[right]]++;

        while(freq.size() > k){
            freq[s[left]]--;

            if(freq[s[left]] == 0){
                freq.erase(s[left]);
            }
            left++;
        }
        ans = max(ans,right - left + 1);
    }
    return ans;
}