class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int mn_sz=INT_MAX;
        int n=strs.size();
        for(auto u:strs) mn_sz=min(mn_sz,(int)u.size());
        // s[0][0], s[1][0], s[2][0] ......... s[n-1][0] 
        // s[0][1] .........s[n-1][1] 
        for(int i=0;i<mn_sz;i++){
            char c=strs[0][i];
            for(int j=1;j<n;j++){
                if(c!=strs[j][i]) return res;

            }
            res+=c;
        }

        return res;
        
    }
};