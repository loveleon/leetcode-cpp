#include <vector>
#include <iostream>
#include <algorithm>
using std::vector;
using std::distance;

int removeDuplicates(vector<int> &nums)
{
    return std::distance(nums.begin(),std::unique(nums.begin(),nums.end()));
}

int main()
{
    vector<int> vec={0,0,1,1,1,2,2,3,3,4};
    std::cout << "distance:" << removeDuplicates(vec) << std::endl;
    return 0;
}
