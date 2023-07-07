#include<iostream>
#include<vector>
using namespace std;
void setZeroes(vector<int>& nums){
    //making a variable whwere we would be inserting the non zeroes values when i iterates over the given vector
    //let that variable be insertPosition
    int insertPosition=0;//initially the variable pointer is at the starting point of the vector
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[insertPosition]=nums[i];
            insertPosition++;
        }
    }
    while(insertPosition<nums.size()){ //for filling rest of the array with zeroes
        nums[insertPosition]=0;
        insertPosition++;

    }
}
int main(){
    
    vector<int> nums={1,2,34,56,0,21,6,14,0};
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
    cout<<endl;
setZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
    return 0;
}
