#include <vector>
#include <iostream>

using namespace std;

class Solution
{
    public:
    int singleNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1;)
        {
            if(nums[i+1] != nums[i])
                return nums[i];
            else
                i += 2;
        }
        return nums[nums.size()-1];
    }
};

int main ()
{
    Solution solution;
    vector<int> a = {4, 1, 2, 1, 2};
    solution.singleNumber(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i);
        cout << endl;
    }
    cout << endl;
    cout << solution.singleNumber(a);
    cout << endl;
}
