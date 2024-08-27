class Solution:
    def reverseWords(self, s: str) -> str:
        words=s.split()
        revWord=words[::-1]
        return ' '.join(revWord)
        


// c++
class Solution {
public:
    string reverseWords(string s) {
        s = trim(s);
        stringstream ss(s);
        vector<string> words;
        string word;
        
        // Extract words from stringstream
        while (ss >> word) {
            words.push_back(word);
        }
        
        // Reverse the vector of words
        reverse(words.begin(), words.end());
        
        string res = "";
        
        // Build the result string with reversed words
        for (int i = 0; i < words.size(); ++i) {
            if (i > 0) {
                res += " "; // Add space before appending the word (except for the first word)
            }
            res += words[i]; // Append the word
        }
        
        return res;
    }
    
    string trim(string & s) {
        int start = 0;
        int end = s.size() - 1;
        
        while (start <= end && s[start] == ' ') {
            start++;
        }
        
        // Trim spaces from the end
        while (end >= start && s[end] == ' ') {
            end--;
        }
        
        // Return trimmed substring
        return s.substr(start, end - start + 1);
    }
};
