#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);


	return 0;
}

//Write definition of randData(), showData() and findColSum()
	void randData(double *arr, int n, int m){
		double x;
		for (int i = 0;i < n*m ;i++){
			x = rand()%100/100.0;
			*(arr + i)=x;
		}
	}

	void showData(double *arr, int n, int m){
		for (int i = 1;i <= n*m; i++){
			cout << *(arr+i - 1) << ' ';
			if(i%n == 0){
			cout << '\n'; 
			}
		}
	}

	void findColSum(const double *a, double*b, int n, int m){
		double sum;
		for(int i = 0;i < n;i++){
			sum = 0;
			for(int j =0;j < m;j++){
			sum += *((a + j*n)+i);
		}
		*b  = sum;
		b++;
		}
	}