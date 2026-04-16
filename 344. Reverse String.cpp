Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]


  class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();
        int l = 0, r = n-1;

        while(l <= r){
            swap(s[l], s[r]);
            l++, r--;
        }
    }
};
Accepted
Runtime: 0 ms
Case 1
Case 2
Input
s =
["h","e","l","l","o"]
Output
["o","l","l","e","h"]
Expected
["o","l","l","e","h"]

