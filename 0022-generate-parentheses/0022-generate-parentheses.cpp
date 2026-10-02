class Solution {
public:

    vector<string>res;
    void solve(string s, int n,int op,int cl){
        if(s.size()==2*n){
            res.push_back(s);
            return;
        }

        if(op<n){
            solve(s+"(",n,op+1,cl);
        }
        if(cl<op){
            solve(s+")",n,op,cl+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        int op=0;
        int cl=0;
        solve("",n,op,cl);
        return res;
    }
};