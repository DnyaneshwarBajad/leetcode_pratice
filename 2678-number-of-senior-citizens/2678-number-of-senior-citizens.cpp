class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for (string s : details) {
            string a = s.substr(11, 2);
            int age = stoi(a);
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};