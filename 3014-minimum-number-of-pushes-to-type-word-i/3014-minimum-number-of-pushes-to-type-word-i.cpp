class Solution {
public:
    int minimumPushes(string word) {
        int n=n=word.size();
        int result=0;
        for(int i=0;i<n;i++){
            result+=(i/8)+1;
        }
        return result;
    }
};