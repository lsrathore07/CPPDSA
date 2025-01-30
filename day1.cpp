#include <iostream>
using namespace std;

int main(){


// Q Reverse an arr?    
    int arr[4] = {1,2,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    // cout << n <<endl; 
    for (int i=0;i<n/2;i++){
        // cout << arr[i] << " replaced : " << arr[n-i-1] << endl;
        int temp= arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }


    for (int j=0;j<n;j++){
      cout << arr[j] << "\n";
    }
    return 0;
    
}