//#include<cstdio> 
//不能用数组，否则30分 
//int n;
//int Array[1023];
//int main(){
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//    	scanf("%d",&Array[i]); 
//	} 
//	
//	int max,min;
//	if(Array[0]<=Array[n-1]){
//		max=Array[n-1];
//		min=Array[0];
//	}
//	else{
//		max=Array[0];
//		min=Array[n-1];
//	} 
//	
//	int mid;
//	if(n&1==1){//ood 
//		mid=Array[n/2];
//	}
//	else{
//		mid=(int)(Array[n/2]+Array[n/2-1])/2;
//	}
//	printf("%d %d %d",max,mid,min);
//	return 0;
//}

#include<iostream>
using namespace std;
int i,n;
int val;
int mn, md, mx;

int main(){
	cin >> n;
	int flag=n&1;//1 is ood 
	for(i=1;i<=n;i++){
		cin>>val;
	if(i==1){
		mn=val;
	}
	if(i==n){
		mx=val;
	}
	if(flag && i==n/2+1){
		md=val;
	}
	if(!flag && i==n/2||i==n/2+1){
		md+=val/2;
	}
}
	cout << mx <<" "<< md << " "<< mn;
	return 0;
}
