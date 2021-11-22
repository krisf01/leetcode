#include <vector>
#include <map>

using namespace std;

class Solution
{
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> num;
        map<int,int> map;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            
            if(map.count(diff))
            {
                num.push_back(map.at(diff));
                num.push_back(i);
            
                return num;
            }
            
            map.insert(pair<int,int>(nums[i],i));
        }
        return num;
    }
};

int main()
{

    return 0;
}
