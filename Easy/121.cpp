// 121. Best Time to Buy and Sell Stock

#include <iostream>
#include <vector>
#include <limits.h> // For INT_MAX and INT_MIN
using namespace std;

class Solution {
    public:
        int maxProfit(int prices[], int size) {
            int buyPrice=INT_MAX, currentPrice=INT_MIN, maxPrice=INT_MIN;
            for(int i=0;i<size;i++){
                if(buyPrice>=prices[i]) buyPrice=prices[i];
                currentPrice = prices[i] - buyPrice;
                if(currentPrice>=maxPrice) maxPrice=currentPrice;
            }
            return maxPrice;
        }
    };

int main(){

    Solution s1;
    int arr[6] = {7, 1, 5, 3, 6, 4};
    int result = s1.maxProfit(arr, 6);
    cout << "The maximum profit is: " << result << endl;

    return 0;
}