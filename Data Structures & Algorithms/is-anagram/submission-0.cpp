class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> f1,f2;
        for(char c:s)
        {
            f1[c]++;
        }
        for(char c:t)
        {
            f2[c]++;
        }
        if(f1==f2) return true;
        else return false;
    }
};
