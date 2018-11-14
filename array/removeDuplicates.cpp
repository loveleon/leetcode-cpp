#include <vector>
#include <iostream>
#include <cassert>
using std::vector;

int removeDuplicates(vector<int> &nums)
{
    int len = nums.size();
    assert(len > 1);

    int j=0;
    for(int i=1;i<len;i++)
    {
        if(nums[j] != nums[i])
        {
            nums[++j] = nums[i];
        }
    }
    return j+1;
}

void print(vector<int> &vec,int pos)
{
    for(int i=0;i<pos;i++)
        std::cout << vec[i] << "\t";
    std::cout << std::endl;
}

int main(){
    vector<int> vec = {0,0,1,1,1,2,2,3,3,4};
    int pos = removeDuplicates(vec);
    std::cout << pos << std::endl;
    print(vec,pos);
    return 0;
}
