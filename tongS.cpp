#include <bits/stdc++.h>

using namespace std;

int main(){
	float n;
	cin>>n;
	double s=0;
	for(float i=0;i<=n;i++){
		s += (2*i+1)/(2*i+2); 
	}
	cout<<s<<endl;
	return 0;
}
