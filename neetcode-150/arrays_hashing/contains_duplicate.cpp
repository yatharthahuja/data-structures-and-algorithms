// problem statement: https://neetcode.io/problems/duplicate-integer

#include <iostream>
#include <vector>

using namespace std;

class Solution{

    public: 

        // brute force O(n^2)
        bool hasDuplicate_On2(vector<int>& nums){
            
            int i{0}, j{0};
            int len = nums.size();

            for (i=0;i<len;i++){

                for (j=0;j<len;j++){
                    if (j == i)
                    {
                        continue;
                    }
                    else if (nums[j] == nums[i])
                    {
                        return true;
                    }   
                }
            }
            return false;
        }

        // O(n) solution
        bool hasDuplicate(vector<int>& nums){
            
            int i{0}, j{0};
            int len = nums.size();
            

            for (i=0;i<len;i++){

                for (j=0;j<len;j++){
                    if (j == i)
                    {
                        continue;
                    }
                    else if (nums[j] == nums[i])
                    {
                        return true;
                    }   
                }
            }
            return false;
        }

};

int main(){
    

    vector<int> nums = {1, 2, 3, 4, 5};
    bool if_duplicate{false};

    Solution duplicate_checker;

    if_duplicate = duplicate_checker.hasDuplicate(nums);

    cout << boolalpha << if_duplicate << endl;


}