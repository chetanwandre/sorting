#include<iostream>
using namespace std;

void insertion_sort(int n , int arr[]){
    for(int i = 0; i <= n-1; i++){
        int j = i; 
        while(j > 0 && arr[j-1] > arr[j]){
            //swap
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            cout<<"running "<<endl;
            j--;
        }
    }
}

int main(){
    int n;
    cout<<"enter n "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    
    insertion_sort(n , arr);

    cout<<"array after sorting is "<<endl;
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}