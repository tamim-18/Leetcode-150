// class Solution:
//     def isSubsequence(self, s: str, t: str) -> bool:
//         it=iter(t);
//         return all(c in it for c in s)

        

// c++

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl=0,tl=0;
        while(sl<s.length() and tl<t.length())
        {
            if(s[sl]==t[tl])
                sl++;
            tl++;
        }
        return sl==s.length();

        
    }
};