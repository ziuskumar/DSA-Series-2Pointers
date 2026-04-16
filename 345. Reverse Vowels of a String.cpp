Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

--------------------------------------------OPTIMAL---------------------------------------------------------

 class Solution {
     bool isVowel(char c){
    return c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
    }
public:
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0, r = n -1;

         while(l < r){
            if(!isVowel(s[l])){
                l++;
            }
            else if(!isVowel(s[r])){
                r--;
            }
            else{
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};

------------------------------------------BRUTE--------------------------------------------------------------

class Solution {
public:

    bool isVowel(char c){
    return c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
    }

    string reverseVowels(string s) {
        
        int n = s.size();

        for(int i=0; i<n; i++){
            if(isVowel(s[i])){
                for(int j = n-1; j > 0; j--){
                    if(isVowel(s[j])){
                        swap(s[i], s[j]);
                        break;
                    }
                }
            }
        }
        return s;
    }
};
