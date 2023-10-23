#include <iostream>
using namespace std;
#include <algorithm>

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == nums[i - 1])
                return true;
        return false;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    return 0;
}
