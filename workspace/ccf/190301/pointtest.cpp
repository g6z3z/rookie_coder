#include<iostream>
//#include<iomanip>
#include<cstdio>
using namespace std;
int i,n;
int val;
int mn, mx;
double md; 
int main(){
	cin >> n;
	int flag=n&1;//1 is ood 
	for(i=0;i<n;i++){
		cin>>val;
	if(i==0){
		mn=val;
	}
	if(i==n-1){
		mx=val;
	}
	if(flag && i==n/2){
		md=val;
	}
	if(!flag && (i==n/2||i==n/2-1)){
		md+=val/2.0;
	}
    }
//	if((mid-(int)mid)==0){
//		cout << mx <<" "<< md <<" "<< mn;
//	}
//	else{
//		cout << mx <<" "<<setprecision(2)<< md << " "<< mn;
//	}
	if(mx<mn){
		int t=mn;
		mn=mx;
		mx=t;
	}
	if((md-(int)md)==0){ //中位数为整数 
		printf("%d %d %d\n", mx,(int)md, mn);
	}
	else{
		printf("%d %.1f %d\n",mx,md,mn);
	}
	return 0;
}
