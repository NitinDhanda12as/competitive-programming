class Solution {
public:
    int findRange(int num) {
        int maxDigit = 0;
        int minDigit = 9;

        while (num > 0) {
            int digit = num % 10;
            maxDigit = max(maxDigit, digit);
            minDigit = min(minDigit, digit);
            num /= 10;
        }

        return maxDigit - minDigit;
    }

    
    int maxDigitRange(vector<int>& nums) {
        int maxRange = -1;
        int sum = 0;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int range = findRange(num);
        
            if (range > maxRange) {
                maxRange = range;
                sum = num;
            }
            else if (range == maxRange) {
                sum += num;
            }
        }
    
        return sum;
        }
}