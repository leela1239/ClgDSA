#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
struct Matrix{
	int a[2][2];	
};

Matrix identity(){
	Matrix id;
	id.a[0][0]=1 ,id.a[0][1]=0;
	id.a[1][0]=0 ,id.a[1][1]=1;
	return id;
}
Matrix mul(Matrix A,Matrix B){
	Matrix C;
	for(int row = 0 ; row < 2 ; row++){
		for(int col = 0; col < 2 ; col++){
			int sum =0;
			for(int i = 0 ; i < 2; i++){
				sum=(sum%mod+(A.a[row][i]%mod*B.a[i][col]%mod)%mod)%mod;
			}
			C.a[row][col]=sum;
		}
	}
	return C;
}
Matrix Matrixexp(Matrix A,int exp){
	Matrix ans=identity();
	while(exp)
	{
		if(exp&1)
		{
			ans=mul(ans,A);
		}
		exp=exp>>1;
		A=mul(A,A);
	}
	return ans;
}
int main(){
	int exp;
	cin>>exp;
	Matrix A;
	A.a[0][0]=1 ,A.a[0][1]=1;
	A.a[1][0]=1 ,A.a[1][1]=0;
	Matrix B;
	B=Matrixexp(A,exp);
	cout<<B.a[0][0]*1+B.a[0][1]*0;
}