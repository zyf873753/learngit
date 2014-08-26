#include<iostream>
using namespace std;

int main()
{
	float a,sum;
	int i,num;
	while(cin>>a)
	{
		if(a==0.00)
			break;
		else if(a<0.01 || a>5.20)
			break;
		else
		{		
			num=1;
			sum=0;
			while(true)
			{
				i=num;			
				sum=0;
				while(i>0)
				{
					sum+=1.0/(i+1);
					i--;

				}	
				if(sum>a)
				{
					cout<<num<<" card(s)"<<endl;
					break;
				}	
				else
					num++;
			}
		}

	}
}
