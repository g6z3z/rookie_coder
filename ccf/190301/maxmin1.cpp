#include<cstdio>

int n;
int mx,mn;
double mid;

int main(){
	scanf("%d",&n);
	
	int flag=n&1; //���nΪ��������ôflagΪ1�����nΪż������ôflagΪ0�� 
	int val;
	
	for(int i=0;i<n;i++){
		scanf("%d",&val);
		if(i==0){
			mn=val; //�ѵ�һ�������Ҵ���mn 
		}
		if(i==n-1){
			mx=val; //�����һ�������Ҵ���mx 
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
	
	if((mid-(int)mid)==0){ //��λ��Ϊ���� 
		printf("%d %d %d\n", mx,(int)mid, mn);
	}
	else{
		printf("%d %.1f %d\n",mx,mid,mn);
	}
	
	return 0;
}

