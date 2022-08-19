#include <iostream>
#include <list>

using namespace std;

int main()
{
  int n,m,x,i,j,k;
  // int sum = 0;
  cout <<" Entre no. of matrix : ";
  cin >> x;
  
  cout <<" Entre rows : ";
  cin >> n;
  
  cout << "Entre colums : ";
  cin >> m;
  
  int mat[n][m];
   int sum[n][m];
   int mat1[n][m];
   for(int s=0; s<n; ++s){
    for(int y=0; y<m; ++y)
        sum[s][y] = 0;
   }
   
  for( k=0; k<x; k++){
   cout << "Enter Matrix " << k+1 << " : " << endl;
   for(i=0; i<n ; ++i){
    for(j=0; j<m; ++j){
     cin >> mat[i][j];
     mat1[i][j] = mat[i][j];
    }
   }
    for(int i=0; i<n ; ++i){
    for(int j=0; j<m; ++j){
      sum[i][j] += mat1[i][j];
    }
   }
  }
   
   cout << "Sum of the matrixs : " << endl;
   for(int i=0; i<n ; ++i){
    for(int j=0; j<m; ++j){
      cout<< sum[i][j] << " ";
    }
    cout << endl;
   }
  
  return 0;
}
