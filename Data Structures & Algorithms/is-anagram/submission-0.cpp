class Solution {
public:
    bool isAnagram(string s, string t) {
                // Step 1: If lengths are different, not an anagram
        if (s.length() != t.length())
            return false;

        // Step 2: Array to count letters (a to z)
        int count[26] = {0};

        // Step 3: Increase count for string s
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }

        // Step 4: Decrease count for string t
        for (int i = 0; i < t.length(); i++) {
            count[t[i] - 'a']--;
        }

        // Step 5: Check if all counts are zero
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }

        return true;
    
    }
};
