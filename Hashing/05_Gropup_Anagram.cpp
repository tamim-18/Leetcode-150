class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>m;
        for(auto u:strs){
            string temp=u;
            sort(u.begin(),u.end());
            m[u].push_back(temp);
        }
        for(auto u:m){
            res.push_back(u.second);
        }

        return res;
        
    }
};