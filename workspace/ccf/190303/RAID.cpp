#include<iostream>
using namespace std;
int len,n,m,s,l;//n���ܴ�������s��������С��l��ʣ�������
int a[1010];
string ss[1010];
char getc(char c)//������ַ����������֡���������֣������ַ��� 
{
	if(c<10)
	 return c+'0';
	else if(c<=16)
	 return c+'A'-10;
	else if(c<='9')
	 return c-'0';
	else if(c<='F')
	 return c-'A'+10;
}
void y(string &tmp,string tmpp)//����������  
{
	for(int i=0;i<=7;i++)
	tmp[i]=getc(getc(tmp[i])^getc(tmpp[i]));
}
void f(int r)
{
	int d=r/((n-1)*s);//�ӵ�0�㿪ʼ ����ʾ��������ȣ� 
	int p=(n-d%n)-1;//p��λ�ô�0��ʼ ����ʾ��У������λ�ã� 
	int b=d*s+r%s;//��СֵΪ0����ʾ�ڼ����� 
	int disk=r%((n-1)*s)/s+p+1;//��0��ʼ����ʾӲ�̺� 
	disk%=n;
	if(len<b*8+8||len==0)
	{
		cout<<"-"<<endl;
		return;
	}
	if(ss[disk].length()!=0)
	cout<<ss[disk].substr(b*8,8)<<endl;
	else if(ss[disk].length()==0&&n-l==1)
	{
		string str="00000000";//��ʼ�ַ�Ϊ00000000 
		for(int i=1;i<=n;i++)
		if(i!=disk)
		y(str,ss[i].substr(b*8,8));
		cout<<str<<endl;
	}
	else cout<<"-"<<endl;
}
int main()
{
	ios::sync_with_stdio(false);//����c++��cin������ʱ�� 
	cin>>n>>s>>l;
	int tmp;
	for(int i=1;i<=l;i++)
	{
		cin>>tmp;
		cin>>ss[tmp];
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	if(ss[i].length()!=0)
	{
		len=ss[i].length();
		break;
	}
	for(int i=1;i<=m;i++)
	f(a[i]);
	return 0;
}
