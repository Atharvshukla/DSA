class Solution {
public:
static bool lex(int a,int b){
    if(to_string(a)<to_string(b)){
        return true;
    }
    return false;
}
    vector<int> lexicalOrder(int n) {
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        sort(arr.begin(),arr.end(),lex);
        return arr;
    }
};