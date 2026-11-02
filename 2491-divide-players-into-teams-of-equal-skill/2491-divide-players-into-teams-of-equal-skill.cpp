
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        int n = skill.size();
        long long c = 0;

        int j = n - 2;
        int ans = skill[0] + skill[n-1];

        for(int i = 1; i < n/2; i++) {
            int ans2 = skill[i] + skill[j];

            if(ans != ans2) {
                return -1;
            }

            c += 1LL * skill[i] * skill[j];
            j--;
        }

        return c + 1LL * skill[0] * skill[n-1];
    }
};
