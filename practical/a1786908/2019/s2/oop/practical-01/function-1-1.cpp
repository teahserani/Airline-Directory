int sum_array(int array[], int n)
{
	if(n<1)
	{
		return 0;
	}
	int tot=0;

	for(int i=0; i<n; i++)
	{
		int count=array[i];
		tot=tot+count;
	}
	
	if(tot<1)
	{
		return 0;
	}
	
	return tot;
}
