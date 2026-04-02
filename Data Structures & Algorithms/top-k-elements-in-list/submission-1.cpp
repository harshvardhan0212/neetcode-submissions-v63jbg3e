class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto i :nums){
            mpp[i]++;
        }
       
        vector<pair<int,int>>v;
        for(auto it:mpp){
           v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
       
        vector<int>result;

        for(int i=0;i<k;i++){
            result.push_back(v[i].second);
        }
        return result;
    }
};
