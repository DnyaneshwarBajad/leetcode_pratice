class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();
        string ans,ans1;

        stack<char>s1;
        stack<char>s2;

        for(char c:s){
            if( c=='#' ){
                if(!s1.empty())
                {s1.pop();}
            }
            else{
                s1.push(c);
            }
        }
        while(!s1.empty()){
            ans+=s1.top();
            s1.pop();
        }
        

        for(char c:t){
            if( c=='#' ){
                if(!s2.empty())
                {s2.pop();}
            }
            else{
                s2.push(c);
            }
        }
        while(!s2.empty()){
            ans1+=s2.top();
            s2.pop();
        }
        return ans==ans1;

    }
};