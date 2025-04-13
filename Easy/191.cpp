#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingWeight(int n)
    {

        int count = 0;
        while (n > 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }

        return count;
    }
};

int main()
{

    Solution s1;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int result = s1.hammingWeight(n);
    cout << "The number of 1 bits in the binary representation of " << n << " is: " << result << endl;

    return 0;
}