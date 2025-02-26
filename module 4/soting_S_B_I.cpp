#include<iostream>
#include<vector>

using namespace std;

// [13,4,24,52,20,9]

void selection_sort( int arr[], int n){
     //theres two parts, find the minimum. 
     //then swap it with the respective index element.

    for ( int i=0 ; i<=n-2; i++){ 
        // minimum value's index.
        // we first assume that its in the first element in the array.
        int mini =i; 
        for ( int j =i; j<=n-1; j++){ 
            if ( arr[j]<arr[mini]){ 
            mini =j;
            }   
        } 
        // swapping part :
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort( int arr[], int n){
    for ( int i= n-1; i>0; i--){ // outer loop goes from n-1 till it is 0. 
        //if it is equal to zero ; in the first iteration the j will be 0-1 = -1 { runtime error } 
        int didSwap =0;
        for ( int j =0; j<=i-1; j++){
            if ( arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap=1;
            }
        }
        if ( didSwap ==0){ // when no swaps happen then it breaks
        // avoids edge cases where there is no need for swapping.
            break;
        }
        cout << "runs" << endl;
    }
}

void insertion_sort( int arr [], int n){
    for ( int i =0; i<=n-1; i++){
        int j = i;
        while ( j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j]= temp;

            j--; // once the swapping is done , it must be checked again with the index before it.
            // therefore shd go left.
        }
        cout <<" runs \n";
    }
}

int main(){
    int n; // number of elements in array
    cout << "Enter array lenght" << endl;
    cin>>n;
    vector<int> arr(n);

    for ( int i=0; i<n; i++) {
        cout << "Enter array elements" << endl;
        cin >> arr[i];
    }

    bubble_sort( arr.data(), n);

    for ( int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}



// Bubble sort: the best TC => 0(N) thats when the array is sorted. 
// worst or avearage is 0(N^2)