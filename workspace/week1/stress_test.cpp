#include<iostream>
#include<vector>
#include<cstdlib>

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
    return res;
}

long product_fast(const vector<int>& numbers){
   int first_index = 0;
   int second_index = 0;
   int n = numbers.size();
   for(int i=0;i<n;i++){
      if(numbers[first_index]<numbers[i])
      {
        first_index = i;
      }
   }
   for(int j=0;j<n;j++){
      if((j != first_index) && (numbers[second_index]<numbers[j]))
      {
        second_index = j;
      }
   }
   return long(numbers[first_index]*numbers[second_index]);    
}


int main()
{
    vector<int> a;
    while(true){
       int n = rand() % 100000;
       cout<<n<<endl;
       //vector<int> a;
       for(int i = 0;i<n;i++){
           a.push_back(rand()%10);
       }
       for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
    long res1 = product_fast(a);
    long res2 = product(a);
    cout<< endl;
    if(res1!=res2){
       cout << "found error:" << res1 <<"!="<< res2 << endl;
       cout<<endl;
       break;
    }
    else{
       cout<<"ok";
       cout<<endl;
    }
    }
   /* int n;
    cin >> n;
    std::vector<int> array(n);
    for(int i=0 ; i<n; i++){
      std::cin>>array[i];
    }*/
    return 0;
}

