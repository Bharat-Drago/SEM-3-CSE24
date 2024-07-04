#include<iostream>
using namespace std;
void swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}
int MaxEle(int *arr,int n){
	int maxi=arr[0];
	for(int i=0;i<n;i++){
		// if(maxi<arr[i]){
		// 	maxi=arr[i];
		// }
		maxi=max(maxi,arr[i]);
	}
	return maxi;
}
void swapAdj(int* arr,int n){
	for(int i=0;i<n;i+=2){
		swap(arr[i],arr[i+1]);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"the maximum element of array is : "<<<<endl;
	swapAdj(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}