#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
 int count =0;
 int min=1000;
 string str;
 for(int i=0;i<strs.size();i++){
     int len=strs[i].length();
     if(len<min){
        min=len;
        str=strs[i];
        }}
        for(int i=0;i<min;i++){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=str[i])
                    return str.substr(0,count);
                } count++;
        }
 return str.substr(0,count);
}
int main(){
    vector<string>strs;
    strs = {"flower","flow","flight"};
    string result= longestCommonPrefix(strs);
    cout<<result;
    return 0;

}