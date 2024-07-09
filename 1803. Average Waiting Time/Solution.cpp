class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double sum = 0;
        int diff = 0;
        int major = 0;
        for (int i = 0; i < n; i++) {

            if (i == 0) {
                major += customers[i][0] + customers[i][1];
                diff = customers[i][1];
                sum += diff;

            } else if (i > 0 && customers[i][0] > (major)) {
                major = customers[i][0] + customers[i][1];
                diff = customers[i][1];
                sum += diff;
            }

            else if (i > 0 && customers[i][0] <= (major)) {
                major += customers[i][1];
                diff = major - customers[i][0];
                sum += diff;
            }
        }
        setprecision(5);
        return sum / n;
    }
};