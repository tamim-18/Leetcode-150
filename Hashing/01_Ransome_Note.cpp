class Solution {
public:
    bool canConstruct(string a, string b) {
        int freq_a[26];
        // int freq_b[26];
        for(auto u:b) freq_a[u-'a']++;
        for(auto u:a) {
            if(!freq_a[u-'a']) return false;
            freq_a[u-'a']--;

        }
        return true;
    }
};