class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            string a=strs[i];
            int b=a.size();
            ans+=to_string(b);
            ans+='#';
            ans+=a;
        }
        return ans;
    }

    vector<string> decode(string s) {
vector<string> ans;

        int i = 0;

        while(i < s.size()) {

            int j = i;

            // Find '#'
            while(s[j] != '#') {
                j++;
            }

            // Get length
            int length = stoi(s.substr(i, j - i));

            // Move after '#'
            j++;

            // Extract original string
            string str = s.substr(j, length);

            ans.push_back(str);

            // Move to next encoded string
            i = j + length;
        }

        return ans;
    }
};
