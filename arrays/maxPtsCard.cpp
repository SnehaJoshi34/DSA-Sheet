#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
int maxScore(vector<int>cardPoints,int k){
    int n=cardPoints.size();

vector<int>sum(n,0);
int SUM=0;
for(int i=0;i<n;i++){
    SUM+=cardPoints[i];
    sum[i]=SUM;
}
//sliding window
 if(n==k){
              return SUM;
          }
         
      int ans=0;
      int score=0;
      for(int i=0;i<=k;i++){
 int j=i+(n-1)-k;
          if(i==0){
              ans=sum[j];
          }
          else
          
          ans=sum[j]-sum[i-1];
          score=max(score,SUM-ans);


      }
      return score;
    }

};
int main(){
vector<int>cardPoints={1, 2, 3, 4, 5, 6, 1};
Solution solution;
int k=3;
int maxscore=solution.maxScore(cardPoints, k);
cout<<maxscore;
return 0;
}