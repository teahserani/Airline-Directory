#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 
int main ()
{
	int num= 73; 
	int  base=8;
	vector<int> base2;
	for (int i=num; i>0; i=i/base)
	{
		int r= i%base;
		//cout<< i;
		char a = (char)r;
		base2.push_back(a);
		//cout << r << endl;
	}
	//reverse(base2.begin(),base2.end());
//	cout << base2;
	for (int n=0; n<base2.size(); n++)
	{
		cout<< base2[n];
	}
	cout<<""<<endl;
	return 0; 
}
