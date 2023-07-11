//the sum of four numbers from the given array must be equal to the target which will be given
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution{
public:
       vector<vector<int>>four_sum(vector<int>&nums,int target){
   vector<vector<int>> result;
   sort(nums.begin(),nums.end());
   int n=nums.size();
   for(int i=0;i<n-3;i++){
    if(i>0&&nums[i]==nums[i-1]) continue;
    for(int j=i+1;j<n-2;j++){
        if(j>i+1&&nums[j]==nums[j-1]) continue;
        int k=j+1;
        int l=n-1;
        while(k<l){
            long long sum=nums[i]+nums[j];
            sum+=nums[k];
            sum+=nums[l];
            if(sum==target){
                vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                result.push_back(temp);
                k++;l--;
                 while(k<l && nums[k]==nums[k-1]) k++;
                while(k<l&& nums[l]==nums[l+1]) l--;

            }else if(sum<target) k++;
            else l--;
        }
       
      }
    
      }
      return result;
   }
};


int main(){
    vector<int>nums={1, 0, -1, 0, -2, 2};
    int target=0;
     Solution solution;
    vector<vector<int>>result=solution.four_sum(nums,target);
    
    for(const vector<int>& quad:result){
cout<<"[";
for(int num:quad){
    cout<<num<<" ";
}cout<<"]"<<endl;
    }
   
    return 0;
}