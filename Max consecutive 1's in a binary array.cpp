#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int maxi;cin>>maxi;
    int nums[maxi];
    int i, count=0, temp=0;
    for( i=0 ; i<maxi ; i++ )
    {
    	cin>>nums[i];
    }

    for( i=0 ; i<maxi ; i++ )
    {
    	if(nums[i]==0)
    	{
    		count=0;
    	}else{
    		count++;
    		temp = max(temp, count);
    	}
    }

    cout<<"1s = "<<temp;


 return 0;
}
