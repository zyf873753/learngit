#include<iostream>
#include<math.h>
#define PI 3.14159265358979323846
using namespace std;
	

int main()	
{
	int N;
	double lx,ly;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>lx>>ly;
		int y;
		double r=sqrt(lx*lx+ly*ly); //pow(lx,2) is equal to lx*lx
		if(r!=(int)r)
			r++;
		y=r*r*PI/(2*50);
		cout<<"Property 1: This property will begin eroding in year "<<y+1<<"."<<endl;
	}
	cout<<"END OF OUTPUT."<<endl;
}

