#include<iostream>
using namespace std;
int len,n,m,s,l;//n是总磁盘数，s是条带大小，l是剩余磁盘数
int a[1010];
string ss[1010];
char getc(char c)//如果是字符，返回数字。如果是数字，返回字符。 
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
void y(string &tmp,string tmpp)//进行异或操作  
{
	for(int i=0;i<=7;i++)
	tmp[i]=getc(getc(tmp[i])^getc(tmpp[i]));
}
void f(int r)
{
	int d=r/((n-1)*s);//从第0层开始 ，表示条带（深度） 
	int p=(n-d%n)-1;//p的位置从0开始 （表示验校条带的位置） 
	int b=d*s+r%s;//最小值为0，表示第几个块 
	int disk=r%((n-1)*s)/s+p+1;//从0开始，表示硬盘号 
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
		string str="00000000";//初始字符为00000000 
		for(int i=1;i<=n;i++)
		if(i!=disk)
		y(str,ss[i].substr(b*8,8));
		cout<<str<<endl;
	}
	else cout<<"-"<<endl;
}
int main()
{
	ios::sync_with_stdio(false);//避免c++中cin操作超时。 
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
