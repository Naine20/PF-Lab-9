#include<iostream>
using namespace std;

int main()
{
	int arr[3][3];
	
	for(int i=0 ; i<3 ; i++ )
	{
		for(int j=0 ; j<3 ; j++ )
		{
			cout<<"Enter Row "<<i<<" Column "<<j<<" value: "<<endl;
			cin>>arr[i][j];
		}
		
	}
int sum=0;
for(int i=0 ; i<3 ; i++ )
	{
		for(int j=0 ; j<3 ; j++ )
		{
			sum=sum+arr[i][j];
			
		}
	}
	cout<<"\nSum of all elements= "<<sum;
}
