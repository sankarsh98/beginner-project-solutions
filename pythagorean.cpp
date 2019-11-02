#include<iostream>
using namespace std;

int main(){
	float a,b,c;
	char ch;
	do{
		cout<<"Enter the sides of the triangle in any order: ";
		cin>>a>>b>>c;
		int m=-1,x,y;
		if(a>b){
			if(a>c){
			       	m=a;
				x=b;
				y=c;
			}
			else{
			       	m=c;
				x=a;
				y=b;
			}
		}else{
			if(b>c){
			       	m=b;
				x=a;
				y=c;
			}
			else{
			       	m=c;
				x=a;
				y=b;
			}
		}
		if(m*m==(x*x+y*y)){
			cout<<"Yes it's a Pythagorean triplet";
		}else{
			cout<<"No it's not a Pythagorean triplet";
		}
		cout<<endl;
		cout<<"Enter any key if you want to try another example or enter 'n' to stop: ";
		cin>>ch;
	}while(ch!='n' && ch!='N');
}
