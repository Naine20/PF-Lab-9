#include<iostream>
using namespace std;

int main()
{
	int arr[4][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	
	for(int i=0 ; i<4 ; i++ )
	{
		for(int j=0 ; j<4 ; j++ )
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
