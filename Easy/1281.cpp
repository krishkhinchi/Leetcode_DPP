// 1281. Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
    
    int product = 1;
    int sum = 0;
    
    while(n>0){
        int digit=n%10;
        product*=digit;
        sum+=digit;
        n/=10;
    }
    
    int result = product-sum;
    return result;
    }
};

int main(){

    Solution s1;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int result = s1.subtractProductAndSum(n);
    cout << "The result of subtracting the sum of digits from the product of digits is: " << result << endl;

    return 0;
}