int longestSubstringContainingAtMostTwoDistinctCharacters(string s){
    int left = 0;
    unordered_map<char,int> freq;
    int ans = 0;

    for(int right = 0; right < s.size(); right++){
        freq[s[right]]++;

        while(freq.size() > 2){
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