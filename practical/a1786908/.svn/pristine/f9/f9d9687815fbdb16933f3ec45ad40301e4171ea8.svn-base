int median(int array[], int n)
{
	if(n<1)
	{
		return 0;
	}
	int temp; 
	for(int i=0; i<n-1; i++)
	{
		for(int j=1; i<n; j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}	
	int middle=n/2;
	return array[middle];
}
