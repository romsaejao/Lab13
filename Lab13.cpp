#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void showMatrix(const bool a[][N])
{

    for(int i = 0;i<N;i++)
    {
        for(int j = 0;j<N;j++)
        {
       
         cout<<a[i][j]<<" ";
           
        }
        cout<<"\n";
    }
}
void findLocalMax(const double A[][N], bool B[][N])
{
  for(int i = 0;i<N;i++)
        for(int j = 0;j<N;j++)
		{
         if(A[i][j]>=A[i-1][j]&&A[i][j]>=A[i+1][j]&&A[i][j]>=A[i+1][j]&&A[i][j]>=A[i][j+1])
                {
                    B[i][j] = true;
                }
         if(A[i][j]<A[i][j+1]||A[i][j]<A[i][j-1]||A[i][j]<A[i+1][j]||A[i][j]<A[i-1][j])  
            {
                B[i][j] = false;
            }
         
        if( i==0)
            {
                B[i][j] = false;
            }
         if( i==N-1)
            {
                B[i][j] = false;
            }
         if( j==0)
            {
                B[i][j] = false;
            }
         if( j==N-1)
            {
                B[i][j] = false;
            }	
}
}
void inputMatrix(double A[][N])
{

for(int i = 0;i < N; i++)
{
cout<<"Row "<<i+1<<":"<<" "; 

    for(int j = 0;j < N; j++)
     {
        cin>> A[i][j];
     }
}
}


