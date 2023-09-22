#include <iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        //for(j>=0;j<n-i-1;j--){
        while(j>=0 && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
               }
       arr[j+1]=temp;  
    }
}

int main() {
    
int A[6]={9,2,7,4,6,1};
cout<<"b4 sorting";
for (int i = 0; i < 6; i++) {
        cout<<A[i] << " ";
    }
insertion(A,6);
cout<<"after sorting";
for (int i = 0; i < 6; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
