class Solution {
public:

    bool same(int count1[], int count2[]) {
        for(int i = 0; i < 26; i++) {
            if(count1[i] != count2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length()) {
            return false;
        }

        int count1[26] = {0};
        int count2[26] = {0};

        // Store frequency of s1
        for(int i = 0; i < s1.length(); i++) {
            count1[s1[i] - 'a']++;
        }

        int windowSize = s1.length();

        // First window
        for(int i = 0; i < windowSize; i++) {
            count2[s2[i] - 'a']++;
        }

        if(same(count1, count2)) {
            return true;
        }

        // Sliding window
        for(int i = windowSize; i < s2.length(); i++) {

            // Add new character
            count2[s2[i] - 'a']++;

            // Remove old character
            count2[s2[i - windowSize] - 'a']--;

            if(same(count1, count2)) {
                return true;
            }
        }

        return false;
    }
};