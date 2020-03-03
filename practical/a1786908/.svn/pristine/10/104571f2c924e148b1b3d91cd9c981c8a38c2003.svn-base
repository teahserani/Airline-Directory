bool fanarray(int array[], int n)
{
	if(n<1)
	{
		return 0;
	}
	bool check=true;
	for(int i=0; i<n; i++)
	{
		for(int j=n; j>-1;  j--)
		{
			if(array[i]!=array[j])
			{
				check=false;
				break;
			}
		}
	}
	return check;
}
