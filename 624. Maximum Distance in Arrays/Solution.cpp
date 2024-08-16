class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int m = arrays.size();
        
        int minn = INT_MAX, second_minn = INT_MAX;
        int maxi = INT_MIN, second_maxi = INT_MIN;
        int min_index = -1, max_index = -1;
        
        for (int i = 0; i < m; i++) {
            int n = arrays[i].size();
            
            // Update the minimum values and their corresponding index
            if (arrays[i][0] < minn) {
                second_minn = minn;
                minn = arrays[i][0];
                min_index = i;
            } else if (arrays[i][0] < second_minn) {
                second_minn = arrays[i][0];
            }
            
            // Update the maximum values and their corresponding index
            if (arrays[i][n - 1] > maxi) {
                second_maxi = maxi;
                maxi = arrays[i][n - 1];
                max_index = i;
            } else if (arrays[i][n - 1] > second_maxi) {
                second_maxi = arrays[i][n - 1];
            }
        }
        
        // If min and max come from the same array, compare the alternative options
        if (min_index == max_index) {
            return max(maxi - second_minn, second_maxi - minn);
        }
        
        // Otherwise, simply return the distance between the overall min and max
        return maxi - minn;
    }
};