class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
int ans=0;
        for(auto num:st){
           
            if(st.find(num-1)==st.end()){
                 int element =num;
                 int count =1;

                 while(st.find(element+1)!=st.end()){
                    count++;
                    element++;
                 }
                   ans = max(ans,count);
            }
          
        }
        return ans;
    }
};
