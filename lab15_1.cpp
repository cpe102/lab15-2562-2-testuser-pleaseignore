#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()
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
			if(i%m == 0){
			cout << '\n'; 
			}
		}
	}

	void findRowSum(const double *a, double*b, int n, int m){
		double sum;
		for(int i = 0 ;i < n;i++){
			sum = 0;
			for(int j =0;j < m;j++){
			sum += *a;
			a++;
		}
		*(b + i) = sum;
	}
	}	