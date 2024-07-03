#include<iostream>
using namespace std;
void print(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={7,3,4,5,1,4,3,21,4,6,8,3,21,3,4,6,756,8,2,4,4,6,7,1,45,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"size : "<<size<<endl;
	print(arr,size);
	
	return 0;
}