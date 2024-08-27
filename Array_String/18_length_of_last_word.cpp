class Solution {
public:
    int lengthOfLastWord(string s) {
        // Remove trailing spaces
        int i = s.length() - 1;
        while (i >= 0 && s[i] == ' ') i--;
        
        // Find the length of the last word
        int length = 0;
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        
        return length;
    }
};



// python code
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        word=s.split()[-1]
        return len(word)
        