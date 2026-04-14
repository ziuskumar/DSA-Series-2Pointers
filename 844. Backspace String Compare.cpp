844. Backspace String Compare
Solved
Easy
Topics
premium lock icon
Companies
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".



  class Solution {
public:

    string actualStr(string s){
        int n = s.size();
        string result ="";
        int hash = 0;

        for(int i=n-1; i>=0; i--){
            if(s[i] == '#'){
                hash++;
            }
            else{
                if(hash > 0){
                    hash--;
                }
                else{
                    result.push_back(s[i]);
                }
            }
        }
        return result;
    }

    bool backspaceCompare(string s, string t) {
        return actualStr(s) == actualStr(t);
    }
};
