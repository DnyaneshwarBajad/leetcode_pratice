class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();
        int unsat = 0;
        for (int i = 0; i < minutes; i++) {
            unsat += grumpy[i] * customers[i];
        }
        int mauns = unsat;
        int total = 0;
        int l = 0;
        for (int i = minutes; i < n; i++) {
            unsat += grumpy[i] * customers[i];
            unsat -=  grumpy[l] * customers[l];
            l++;
            mauns = max(mauns, unsat);
        }

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                total += customers[i];
            }
        }
        return total + mauns;
    }
};