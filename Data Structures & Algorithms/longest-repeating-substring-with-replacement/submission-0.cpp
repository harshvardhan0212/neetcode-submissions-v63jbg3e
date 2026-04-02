class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int>mpp;
        int l=0,r=0;
        int maxlength=0;
        int n= s.size();
        int maxfreq =0;


        while(r<n){
            mpp[s[r]]++;
            maxfreq = max(maxfreq,mpp[s[r]]);
            while((r-l+1) - maxfreq >k ){
                mpp[s[l]]--;
                l++;
            }
            maxlength =max(maxlength,r-l+1);
            r++;
        }
        return maxlength;
    }
};
