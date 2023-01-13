#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size;cin>>size;
	int nums[size];
	int i;
	int count = 0, even_checker = 0;

	for(i=0;i<size;i++){cin>>nums[i];}

	for(i=0;i<size;i++)
	{
		while(nums[i]!=0)
		{
			nums[i] = nums[i]/10;
			count++;
		}
		if(count % 2 == 0)
			even_checker++;
		count = 0;
	}
	cout<<even_checker;
	return 0;
}
