#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

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
      if((numbers[j]!=numbers[first_index]) && (numbers[second_index]<numbers[j]))
      {
        second_index = j;
      }
   }
   return numbers[first_index]*numbers[second_index];    
}

int main(){
    int n = 0;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0;i<n;++i){
        cin >> numbers[i];
    }
    cout << product_fast(numbers) << endl;
}


