class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool ans = true;
        int sum = 0;
        map<int, int> mpp;
        for (int i = 0; i < bills.size(); i++) {

            if (bills[i] == 10) {
                if (mpp[5] > 0)
                    {mpp[5]--;
                    mpp[bills[i]]++;}
                else {
                    cout << "flg1" << endl;
                    ans = false;
                    break;
                }

            } else if (bills[i] == 20) {
                if (mpp[10] >= 1 && mpp[5] >= 1) {
                    mpp[10] -= 1;
                    mpp[5] -= 1;
                      mpp[bills[i]]++;
                }

                else if (mpp[5] >= 3) {
                    mpp[5] -= 3;
                      mpp[bills[i]]++;
                }
             
            else {
                cout << "flg3" << endl;
                ans = false;
                break;
            }
        }
        else {
            mpp[bills[i]]++;
            cout << bills[i] << endl;
        }
    }
    return ans;
}
}
;