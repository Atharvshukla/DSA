class Solution {
public:
bool isConsistent(string a,string str){
    unordered_set<char>st(a.begin(),a.end());
    for(auto it:str){
        if(st.find(it)==st.end()){
            return true;
        }
    }
    return false;
}
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(auto it:words){
            if(isConsistent(allowed,it)){
                count++;
            }
        }
        int n=words.size();
        return n-count;
    }
};