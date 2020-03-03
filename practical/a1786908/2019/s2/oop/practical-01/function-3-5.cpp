double sumeven(double array[], int n)
{
	int tot=0;
	for(int i=0;i<n; i++)
	{
		if(i%2!=0)
		{
			tot=tot+array[i];
		}
	}
	return tot;
}
