class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int aToB[256];
        int bToA[256];
        memset(aToB, -1, sizeof(aToB));
        memset(bToA, -1, sizeof(bToA)); 
        // // memset causing issues

        // for (int i = 0; i <256 ; ++i) {
        //     aToB[i] = -1;
        //     bToA[i] = -1;
        // }
        for(int i=0;i<s.size();i++){
            int sId=s[i];
            int tId=t[i];
            if(aToB[sId]==-1 and bToA[tId]==-1){
                aToB[sId]=tId;
                bToA[tId]=sId;
            }
            else if(aToB[sId]!=tId or bToA[tId]!=sId) return false;
        }

        return true;
        
    }
};