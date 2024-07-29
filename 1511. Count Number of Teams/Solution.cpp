class Solution {
public:
    int numTeams(vector<int>& rating) {
        int cnt = 0;
        for (int i = 0; i < rating.size(); i++) {
            for (int j = i + 1; j < rating.size(); j++) {
                if (rating[j] > rating[i]) {
                    for (int k = j + 1; k < rating.size(); k++) {
                        if (rating[k] > rating[j]) {
                            cnt++;
                            continue;
                        }
                    }
                } else if (rating[j] < rating[i]) {
                    for (int k = j + 1; k < rating.size(); k++) {
                        if (rating[k] < rating[j]) {
                            cnt++;
                            continue;
                        }
                    }
                }
            }
        }

        return cnt;
    }
};