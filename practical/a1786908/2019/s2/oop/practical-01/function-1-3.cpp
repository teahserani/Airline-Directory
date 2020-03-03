int count (int array[], int n, int number)
{
	if(n<1)
	{
		return 0;
	}

	int tot=0;
	for(int i=0; i<n; i++)
	{
		int num=array[i];

		if(num==number)
		{
			tot=tot+1;
		}
	}
	return tot;
}
