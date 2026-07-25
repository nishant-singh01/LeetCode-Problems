/*
LeetCode 242 Valid Anagram##
Approach ( Sorting )

1. Check length of both strings. It should be same.
2. If the lengths are not equal, they cannot be anagrams, return false.
3. Sort both the strings lexicographically.
4. Sort the strings and compare them.
5. If both strings are same after sorting, then return true, else return false. 
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false; 
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;

    }
};

/*
## Time Complexity 
- Sorting s: **O( n log n )**
Sorting `t`: **O(n log n)**
- String comparison: **O(n)**

Overall: **O(n log n)**

## Space Complexity 
- **O(1)** (not including the space used internally by the sorting algorithm)
*/
