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


// OUTPUT:-

// PS C:\Users\User\Downloads> cd "c:\Users\User\Downloads\" ; if ($?) { g++ insertion_sort.cpp -o insertion_sort } ; if ($?) { .\insertion_sort }

//     for avg/worst case time complexity is O(N*N)   
    
// enter n
// 6
// 14 9 15 12 6 8 13
// running
// running
// running
// running
// running
// running
// running
// running
// running
// running
// running
// array after sorting is
// 6 8 9 12 14 15
// PS C:\Users\User\Downloads>




// for best case time complexity is O(N)   as only outer loop runs once for first iteration thro each element and inner loop does not run

    
//                           > cd "c:\Users\User\Downloads\" ; if ($?) { g++ insertion_sort.cpp -o insertion_sort } ; if ($?) { .\insertion_sort }
// enter n 
// 6
// 1 3 5 6 7 8
// array after sorting is 
// 1 3 5 6 7 8
// PS C:\Users\User\Downloads>
