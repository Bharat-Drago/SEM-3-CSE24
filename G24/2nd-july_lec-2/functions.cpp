#include<iostream>
using namespace std;
// int addnum(int,int); //prototyping
int addnum(int x,int y){
	int sum=x+y;
	// cout<<"sum of two numbers : "<<sum<<endl;
	return sum;
}
void fun1(int *x){
	*x+=5;
	cout<<"the value of argument x : "<<*x<<endl;
}
void fun2(int &x){
	x+=5;
	cout<<"the value of argument x : "<<x<<endl;
}
void fun3(int x){
	x+=5;
	cout<<"the value of argument x : "<<x<<endl;
}
void And(int x=1,int y=2,int z=3){
	int ans=x&y&z;
	cout<<"AND : "<<ans<<endl;
}
int main(){
	int a,b;
	// int c,d,e;

	a=5;
	b=10;
	fun3(a);
	cout<<"value of a after function call : "<<a<<endl;
	// fun(b);
	// int c=addnum(a,b);
	cout<<"the sum of two number : "<<addnum(a,b)<<endl;
	// cin>>c>>d>>e;
	// And(c,d,e);
	return 0;
}
