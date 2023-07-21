#include<iostream>//question is you have to prove that the sum of three elements is equal to zero
#include<algorithm>
#include<vector>
using namespace std;
class Solution{
    public:
vector<vector<int>>threeSum(vector<int>& nums)
{
int n=nums.size();
sort(nums.begin(),nums.end());
vector<vector<int>> result;
for(int i=0;i<n-1;i++)
 {
   int low=i+1;
     int high=n-1;
    
    while(low<high)
    {
       if((nums[i]+nums[high]+nums[low])<0){
        low++;
        }else if((nums[i]+nums[high]+nums[low])>0){
         high--;
         }else{
            result.push_back({nums[i],nums[low],nums[high]});
         int temp1=low,temp2=high;
         while(low<high&& nums[low]==nums[temp1]) low++;
         while(low<high&&nums[high]==nums[temp2]) high--;        
          }
    }while(i+1<n&&nums[i]==nums[i+1]) i++;
 }
 return result;
}
};
int main() {
    // Example usage
    Solution solution;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = solution.threeSum(nums);
    
    // Print the result
    for(const auto& triplet : result) {
        cout<<"[";
        for(int num : triplet) {
            cout << num << " ";
        }
        cout << "]"<<endl;
    }

    return 0;
}
