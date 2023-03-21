#include <iostream>
#include <string>
using namespace std;

int n, r, sw, cp, cnt;
string t;

int main() {
	cin>>n>>t;
	for(r=2; r<=16; r++)  
	{
		sw=0;
		cp=n;
		cnt=0;
		
		while(cp) 
		{
			cnt++;
			cp/=r;
		}

		if(cnt!=t.size())
		{
			continue;

		}
		else 
			cp=n;

		if(r>10)  
			for(int i=t.size()-1; i>=0; i--)
			{
				if((cp%r)>=10)
				{

					if((char)(cp%r+55)==t[i])

						sw=1;
					else
					{
						sw=0;
						break;
					}
				}
				else
				{
					if((char)(cp%r+48)==t[i])
						sw=1;
					else 
					{
						sw=0;
						break;
					}
				}
				cp/=r;
			}
		
		else
			for(int i=t.size()-1; i>=0; i--)
			{

				if((char)(cp%r+48)==t[i])

					sw=1;
				else 
				{
					sw=0;
					break;
				}

				cp/=r;
			}
		if(sw)
			break;
	}
	cout<<r;
}
