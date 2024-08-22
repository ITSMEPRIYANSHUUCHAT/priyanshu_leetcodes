class Solution {
public:
    int findComplement(int num) {
        int x = num;
        int bits = 0;
        while (x > 0) {
            bits++;
            x /= 2;
        }
        return pow(2, bits) - 1 - num;
    }
};