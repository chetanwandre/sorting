#include<iostream>
using namespace std;

void selection_sort(int n , int arr[]){

    //iteration through unsorted array
    for(int i = 0; i<= n-2; i++){      //this main loop is for swapping purpose hence i will go from 0 to last ele ie n-2 only
        int mini = i;         //lets assume that the very first ie it ele is mini ele    ,, its compared further with other elements in unsorted array

        for(int j = i+1; j <= n-1; j++){       //this loop is only to find minimum element in the unsorted part of array
            if(arr[j] < arr[mini]){
                mini = j;
            }
            //swapping is done out of j loop coz j loop is only to find mini ele   i loop is used for swapping 

            //swapping 
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
    }

   
}

int main(){
    cout<<"enter the size "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    selection_sort(n, arr);

    //print array after sorting 
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// OUTPUT:- 


//      > cd "c:\Users\User\OneDrive\Desktop\chetan\C++\" ; if ($?) { g++ selection_sort.cpp -o selection_sort } ; if ($?) { .\selection_sort }
// enter the size 
// 6
// 13 46 24 52 20 9
// 9 13 20 24 46 52 
// PS C:\Users\User\OneDrive\Desktop\chetan\C++>
