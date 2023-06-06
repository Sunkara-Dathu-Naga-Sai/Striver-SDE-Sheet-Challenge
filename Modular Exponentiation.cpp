#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long xx=x;
	long ans=1;
	while(n>0)
	{
		if(n%2==1)
		{
			ans=((ans)%m*(xx)%m)%m;
			n=n-1;
		}
		else
		{
			xx=((xx)%m*(xx)%m)%m;
			n=n/2;
		}
		//n=n>>1;
	}
	return (int)(ans%m);
}