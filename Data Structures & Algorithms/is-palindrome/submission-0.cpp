class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                result+=s[i];
            }
        }

        int l=0;
        int r=result.size()-1;

        while(l<=r){
            if(tolower(result[l])!=tolower(result[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
