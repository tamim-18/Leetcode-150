class Solution:
    def isPalindrome(self, s: str) -> bool:
        c=[i for i in s.lower() if i.isalnum()] 
        return c==c[::-1]
        