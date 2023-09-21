#include <iostream>
using namespace std;
void bubble(int arr[],int n){
    int i=0;
    int j=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    
int sex[6]={9,2,7,4,6,1};
cout<<"b4 sorting";
for (int i = 0; i < 6; i++) {
        cout<<sex[i] << " ";
    }
bubble(sex,6);
cout<<"after sorting";
for (int i = 0; i < 6; i++) {
        cout << sex[i] << " ";
    }

    return 0;
}
