bool descending(int array[], int n)
{
	if(n<1)
	{
		return 0;
	}
	bool check=false;
	int test=array[1]-array[0];
	if(test>0)	
	{
 
		for(int i=0;i<n;i++)	
		{
			for(int j=1; j<n-1; j++)
			{
				if(array[i]>array[j])	
				{
					check=true;
					break;
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			for(int j=1; j<n-1; j++)
			{
				if(array[i]<array[j])
				{
					check=true;
					break;
				}
			}
		}
	}
	return check;
}

