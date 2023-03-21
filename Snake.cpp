#include <iostream>
using namespace std;
int main(void) {
	
	int a, b;
	
	cin >> a >> b;
	
	int i = 0;

	while(1){
		i++;
		if(i>a)
			break;
		
		for(int Snake = 0; Snake < b; Snake++)
			cout<<"#";
		cout<<endl;
		
		i++;
		if(i>a)
			break;
		
		for(int Snake = 1; Snake < b; Snake++)
			cout<<".";
		cout<<"#"<< endl;
		
		i++;
		if(i>a)
			break;
		
		for(int Snake = 0; Snake < b; Snake++)
			cout<<"#";
		cout<<endl;
		
		
		i++;
		if(i>a)
			break;
		cout<<"#";
		for(int Snake = 1; Snake < b; Snake++)
			cout<< ".";
		cout<<endl;
		
		
		
		
		
	}
	return 0;
}


