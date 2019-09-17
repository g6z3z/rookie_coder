#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;

int n;
char str[10];

stack<int> num;
stack<char> sign; 

int main(){
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		gets(str);
	
		while(!num.empty()) num.pop();
		while(!sign.empty()) sign.pop();
		
		int j=0;
		while(j<strlen(str)){
			if(str[j]>'0' && str[j]<='9'){
				num.push(str[j]-'0');//str[j]-'0'将字符转换为数字 
			} 
			else{
				if(str[j]=='+'){
					sign.push('+');
				}
				else if(str[j]=='-'){ //将减法转换成加法 
					num.push((str[j+1]-'0')*(-1));
					sign.push('+');
					j++;
				}
				else if(str[j]=='x'){ //直接计算乘法 
					int lhs=num.top();
					num.pop();
					num.push(lhs*(str[j+1]-'0'));
					j++;
				}
				else if(str[j]=='/'){ //直接计算除法 
					int lhs=num.top();
					num.pop();
					num.push(lhs/(str[j+1]-'0'));
					j++;
				}
			}
			j++;
		}
		
		while(!sign.empty()){ //计算剩余的加法 
			int rhs=num.top();
			num.pop();
			int lhs=num.top();
			num.pop();
			sign.pop();
			num.push(lhs+rhs);
		}
		
		int ans=num.top();
		if(ans==24) printf("Yes\n");
		else printf("No\n");
		
	}
	
	return 0;
}

