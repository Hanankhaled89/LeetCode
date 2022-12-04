#include <iostream>
#include <vector>
using namespace std;
using std::vector;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {     
    
       vector<int> myvector;
          int a, b;
        for (unsigned int i=0; i< nums.size()-1; i++)
            for (unsigned int j=i+1; j< nums.size(); j++)
            {
                if (!nums.empty())
                    if (nums[i]+nums[j]== target)
                    {
                    //  int at1=  (find(nums.begin(), nums.end(), nums[i]))- nums.begin();
                    //  int at2=  (find(nums.begin(), nums.end(), nums[j]))- nums.begin();
                    //     // cout<<at1<<"\n";
                    //     //  cout<<at2<<"\n";
                    //   // myvector.push_back(at1);
                    //   // myvector.push_back(at2);
                        a=i;
                        b=j;
                    }
                     
                     
            }
            
         return {a, b};
      
    }
};
int main()
{
  
    return 0;
}