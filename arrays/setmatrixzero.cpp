#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    int x=1;
    int y=1;

    //checking first row for any zero
    for(int j=0;j<col;j++){
        if(matrix[0][j]==0){
            x=0;
        }
    }
    //checking first col for any zero
     for(int i=0;i<row;i++){
        if(matrix[i][0]==0){
            y=0;
        }
    }
    //creating markers
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;                
            }
        }
    }
    //now checking for the markers and changing values
    for(int j=1;j<col;j++){
        if(matrix[0][j]==0){
            for(int i=1;i<row;i++){
            matrix[i][j]=0;
            }
        }
    }
    //now checking the markers in the column and changing the values
    for(int i=1;i<row;i++){
        if(matrix[i][0]==0){
            for(int j=1;j<col;j++){
            matrix[i][j]=0;
            }
        }
    }
    //checking for initial zeroes in the row
    if(x==0){
        for(int j=0;j<col;j++){
            matrix[0][j]=0;
        }
    }
    //now checking for initial zero in the col
    if(y==0){
        for(int i=0;i<row;i++){
            matrix[i][0]=0;
        }
    }
}
int main()
{
    vector<vector<int>> matrix={{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    cout<<"matrix before setting zeroes"<<endl;

    for(const auto& row:matrix){
      for(int element:row){
        cout<<element<<" ";
      }
      cout<<endl;
    }
    setZeroes(matrix);
    cout<<"after setting zeroes"<<endl;
    for(const auto& row:matrix){
      for(int element:row){
        cout<<element<<" ";
      }
      cout<<endl;
    }
    return 0;

}