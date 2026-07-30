class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int>freq(26,0);
        for(int ch:s){
            freq[ch-'a']++;
        }

        string left="";
        for(int i=0;i<26;i++){
            left+=string(freq[i]/2,char(i+'a'));
        }

        char middle='\0';
        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                middle=char(i+'a');
                break;
            }
        }
        
        string right=left;
        reverse(right.begin(),right.end());

        string result=left;
        if(middle!='\0'){
            result+=middle;
        }
        result+=right;

        return result;

    }
};