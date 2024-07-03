#include<iostream>
using namespace std;

int main(){
	int x,y;
	// scanf("%d",&x);
	cin>>x>>y;
	// printf("the value of x is %d",x);
	cout<<"the value of x is "<<x<<" meters"<<endl;
	int i;
	for(i=0;i<10;i++){
		cout<<"hello world"<<endl;
	}
	i=0;
	while(i<5){
		cout<<"G25"<<endl;
		i++;
	}
	cout<<endl;
	do{
		cout<<"shubham"<<endl;
		i++;
	}
	while(i<10);
	int c=x+x*y/x;
	cout<<x<<" "<<y<<" "<<c<<endl;
	int an=21^7^11;
	cout<<"XOR : "<<an<<endl;
	if(!0){
		cout<<"x is valid"<<endl;
	}
	else{
		cout<<"x is not valid"<<endl;
	}
	return 0;
}