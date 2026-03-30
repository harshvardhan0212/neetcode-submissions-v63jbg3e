class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> f1;
        for(char c:s)
        {
            f1[c]++;
        }
        for(char c:t)
        {
            f1[c]--;
        }
        for(auto &p:f1)
        {
            if(p.second>0) return false;
        }
        return true;
    }
};
