#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements in an array:";
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	int maxelement= a[0];
	for(int i=0;i<=n-1;i++){
		if(a[i]>=maxelement){
			maxelement=a[i];
		}
	}
	cout<< maxelement <<  "  is the Max Element";
	
}
