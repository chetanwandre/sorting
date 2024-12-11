//if u r accessing the index which is not present in the array, it will throw the RUNTIME error

#include<iostream>
using namespace std;

void bubble_sort(int n , int arr[]){
    for(int i = n-1; i >= 0; i--){              //reverse iteration upto n-1 i.e last element
        for(int j = 0; j <= i-1; j++){        //one less than the i becuse we have to swap previous and current
            if(arr[j] > arr[j+1]){
                //swap 
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
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


// OUTPUT:- 

// enter size
// 6
// 13 46 24 52 20 9
// sorted array is 
// 9 13 20 24 46 52 

// ...Program finished with exit code 0
// Press ENTER to exit console.
