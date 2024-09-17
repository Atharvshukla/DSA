class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int n=s1.size();
        vector<string>sa;
        vector<string>sb;
        istringstream stream1(s1);
        istringstream stream2(s2);
        string w1;
        string w2;
        while(stream1 >>w1){
            sa.push_back(w1);
        }
        while(stream2 >> w2){
            sb.push_back(w2);
        }
        unordered_map<string,int>mp;
        for(auto it:sa){
            mp[it]++;
        }
        for(auto it:sb){
            mp[it]++;
        }
        vector<string>ans;
        for(auto it:mp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
       
        return ans;
    }
};