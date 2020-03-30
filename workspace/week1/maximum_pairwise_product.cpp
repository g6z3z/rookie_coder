#include<iostream>
#include<vector>
using namespace std;

int product (const std::vector<int>& array){
    int n = array.size();
    long res = 0;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++){
          long multi = 0;
          multi = array[i]*array[j];
          if(multi > res)
             res = multi;
       }
    }
    cout << res << endl;
}
int main()
{
    int n;
    cin >> n;
    std::vector<int> array(n);
    for(int i=0 ;i<n;i++){
      std::cin>>array[i];
    }
    product(array);
    return 0;
}
