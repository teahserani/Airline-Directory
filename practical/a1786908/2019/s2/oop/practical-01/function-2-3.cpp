# include <iostream> 
using namespace std;
void twofivenine(int array[], int n)
{
	if(n<1)
	{
		return 0;
	}	
	int tot2=0;
	int tot5=0;
	int tot9=0;
	for(int i=0; i<n; i++)
	{
		int num=array[i];
		if(num==2)
		{
			tot2=tot2+num;
		}	
		if(num==5)
		{
			tot5=tot5+num;
		}
		if(num==9)
		{
			tot9=tot9+num;
		}
	}
	cout<< "2:";
	cin>> tot2;
	cout<< "5:";
	cin>>tot5;
	cout<< "9:"; 
	cin>>tot9;
}
