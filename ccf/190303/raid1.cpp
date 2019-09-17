#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
typedef long long ll;
const int M=10240*8+1;
const int N=1000;
char ss[N][M];
int main()
{
    //freopen("in.txt","r",stdin);
    int n,s,l;
    scanf("%d%d%d",&n,&s,&l);
    for(int i=0;i<l;i++){
        int x;
        scanf("%d%*c",&x);
        fgets(ss[x],M,stdin);//gets(ss[x]);
    }
    int m;
    scanf("%d",&m);
    while(m--){
        ll b;
        scanf("%lld",&b);
        ll t=n-1+b/s/(n-1)*(n-1)+b/s%(n-1)+1,k=(b/s/(n-1)*s+b%s)*8;t%=n;
        if(k>=M||ss[t][0]==0&&l<n-1||ss[0][k]==0&&ss[1][k]==0&&ss[t][k]==0){
            printf("-\n");
            continue;
        }
        if(ss[t][0]==0){
            ll ans=0;
            for(int i=0;i<n;i++){
                if(i==t)continue;
                ll x;
                sscanf(ss[i]+k,"%8x",&x);
                ans^=x;
            }
            printf("%08X\n",ans);
        }
        else{
            ll ans;
            sscanf(ss[t]+k,"%8x",&ans);
            printf("%08X\n",ans);
        }
    }
    return 0;
}
