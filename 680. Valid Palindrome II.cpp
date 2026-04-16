Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false



class Solution {
public:
    bool validPalindrome(string s){
        int l = 0;
        int r = s.size() - 1;

        while(l <= r){
            if(s[l] == s[r]){
                l++, r--;
            }
            else{
                return isPalindrome(s, l+1, r) || isPalindrome(s,l,r-1);
            }
        }
        return true;
    }
    bool isPalindrome(string s, int l, int r) {
        
        while(l <= r){
            if(s[l] == s[r]){
                l++, r--;
            }
            else{
                return false;
            }
        }
        return true;
    }

Accepted
Runtime: 0 ms
Case 1
Case 2
Case 3
Input
s =
"aba"
Output
true
Expected
true
};
