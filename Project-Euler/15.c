#include<stdio.h>
int main(){
   long long int grid[21][21];
   int i,j;
    for(i=0;i<21;++i){
	grid[i][20]=grid[20][i]=1;
    }
    for(i=19;i>=0;--i){
	for(j=19;j>=0;--j){
	    grid[i][j]=grid[i+1][j]+grid[i][j+1];
	}
    }
    printf("%lld",grid[0][0]);
    return 0;
}
