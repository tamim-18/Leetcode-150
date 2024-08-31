class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>aToB;
        unordered_map<string,char>bToA;
        stringstream ss(s);
        string word;
        vector<string>words;
        while(ss>>word) words.push_back(word);

        if(words.size()!=pattern.size()) return false;

        for(int i=0;i<pattern.size();i++){
            char ch=pattern[i];
            string w=words[i];
            if(aToB.find(ch)==aToB.end() and bToA.find(w)==bToA.end()){
                aToB[ch]=w;
                bToA[w]=ch;
            }
            else if(aToB[ch]!=w or bToA[w]!=ch) return false;
        }

        return true;

        
    }
};


// python code

// class Solution:
//     def wordPattern(self, pattern: str, s: str) -> bool:
//         words=s.split()
//         if len(words)!=len(pattern):
//             return False
//         charToWord={}
//         wordToChar={}
//         for c,w in zip(pattern,words):
//             if c in charToWord and charToWord[c]!=w:
//                 return False
//             if w in wordToChar and wordToChar[w]!=c:
//                 return False;
//             charToWord[c]=w
//             wordToChar[w]=c
//         return True;

