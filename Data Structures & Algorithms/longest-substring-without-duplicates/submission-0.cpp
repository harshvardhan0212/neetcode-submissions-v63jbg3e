class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<int>st;
       int left =0,right=0;
        int n=s.size();
        int maxlength=0;
       while(right<n){

            while(st.find(s[right])!= st.end()){
                st.erase(s[left]);
                left ++;
            }
            st.insert(s[right]);

            maxlength =  max(maxlength,right -left+1);

            right++;

       } 
       return maxlength;
    }
};
