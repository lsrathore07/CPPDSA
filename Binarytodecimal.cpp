#include <iostream>
using namespace std;

int DecimalToBinary(int deci){
  int pow=1;
  int ans = 0;
  
  while(deci>0){
   int rem = deci%2;
   deci = deci/2;
   ans+= (rem*pow);
   pow=pow*10;
  }

  return ans;
}

int BinaryTODecimal(int n){
    int ans=0;
    int pow=1;

    while(n!=0){
       int rem = n%10;
       ans+= rem*pow;
       n = n/10;
       pow*=2;  
    }

    return ans;
}

int main(){
 int n = 2;
 int bin = 110010;
//  cout << DecimalToBinary(n);
 cout << BinaryTODecimal(bin);

}