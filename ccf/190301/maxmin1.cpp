#include<cstdio>

int n;
int mx,mn;
double mid;

int main(){
	scanf("%d",&n);
	
	int flag=n&1; //如果n为奇数，那么flag为1；如果n为偶数，那么flag为0。 
	int val;
	
	for(int i=0;i<n;i++){
		scanf("%d",&val);
		if(i==0){
			mn=val; //把第一个数暂且存入mn 
		}
		if(i==n-1){
			mx=val; //把最后一个数暂且存入mx 
		}
		if(i==n/2 && flag){
			mid=val;
		}
		if((i==n/2-1 || i==n/2) && !flag){
			mid+=val/2.0;
		}
	}
	
	if(mx<mn){
		int t=mn;
		mn=mx;
		mx=t;
	}
	
	if((mid-(int)mid)==0){ //中位数为整数 
		printf("%d %d %d\n", mx,(int)mid, mn);
	}
	else{
		printf("%d %.1f %d\n",mx,mid,mn);
	}
	
	return 0;
}

