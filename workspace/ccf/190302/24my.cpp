//#include<cstdio>
#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
char str[10];
int n;
stack<char> sign;
stack<int> num; 
int main(){
	//scanf("%d",&n);
	cin >> n;
	getchar();
	for(int i=0;i<n;i++)
	{
		gets(str);/*gets��stdin��ȡ�ַ�����ֱ�����ܵ����з���EOFʱֹͣ��������ȡ
		�Ľ������bufferָ����ָ����ַ������С����з�����Ϊ��ȡ�������� */ 
		
		while(!num.empty()) num.pop();//��ʼ�� 
		while(!sign.empty()) sign.pop();
		
		int j=0;
		while(j<strlen(str)){
			if(str[j]>'0' && str[j]<='9'){
				num.push(str[j]-'0');//�������ַ�ת��Ϊ���� 
			}
			else{
				if(str[j]=='+'){
					sign.push('+');
				}
				else if(str[j]=='-'){
					num.push((str[j+1]-'0')*(-1));
					sign.push('+');
					j++;
				} 
				else if(str[j]=='x'){
					int lm = num.top();
					num.pop();
					num.push(lm*(str[j+1]-'0'));
					j++;
				}
				else if(str[j]=='/'){
					int lm = num.top();
					num.pop();
					num.push(lm/(str[j+1]-'0'));
					j++;
				}
			}
			j++;
		} 
		
		while(!sign.empty()){
			int rm=num.top();
			num.pop();
			int ls=num.top();
			num.pop();
			sign.pop();
			num.push(rm+ls);
		}
		int ans=num.top();
		if(ans==24) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
} 
