class Solution {
public:
    int totalMoney(int n) {
        int weekly_sum = 28;
        int num_week = n/7;
        int day_remain = n % 7;
        return (num_week-1) * (num_week) / 2 * 7 + 28 * num_week + (num_week + 1 + num_week + day_remain) * day_remain / 2;
    }
};