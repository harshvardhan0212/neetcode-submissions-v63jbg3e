class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //stack<int>st;
        int n = temperatures.size();
        vector<int>ans;
       // vector<int>result(n,0);
        for(int i=0;i<temperatures.size();i++){
            bool a = false;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[j]>temperatures[i]){
                    ans.push_back(j-i);
                    a=true;
                    break;
                }

            }
            if(a== false)
            ans.push_back(0);
        }

        return ans;
    }
};
