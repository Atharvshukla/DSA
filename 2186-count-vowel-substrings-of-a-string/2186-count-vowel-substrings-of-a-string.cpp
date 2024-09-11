class Solution {
public:
 bool vowels(string &s) {
        unordered_set<char> vowels;
        for (char ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels.insert(ch);
            } else {
                return false; 
            }
        }
        return vowels.size() == 5;
    }
    int countVowelSubstrings(string word) {
        int n=word.size();
        vector<string>substring;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string sub = word.substr(i, j - i + 1);
                substring.push_back(sub);
            }
        }
        int count=0;
        for(auto it:substring){
            if(vowels(it)){
                count++;
            }
        }
        return count;

    }
};