//if u r accessing the index which is not present in the array, it will throw the RUNTIME error

#include<iostream>
using namespace std;

void bubble_sort(int n , int arr[]){
    
}

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    bubble_sort(n , arr);

    cout<<"sorted array is "<<endl;
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
