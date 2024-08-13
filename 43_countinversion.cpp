#include<iostream>
using namespace std;

// Brute Force
// int inv = 0;
// for(int i =0; i< n;i++){
//     for(int j = i+1; j<n; j++){
//         if(a[i]>a[j])
//         inv++;
//     }
// }
// cout<<inv;

// 3 5 6 1 2 7 8 
//6 3 9 5 2 8 7 1

//  6 3 9 5        2 8 7 1
//  /   \         /     \
// 6 3   9 5     2  8   7  1
// / \    / \    /   \  /  \
// 6  3   9 5    2   8  7   1
// 3 6    5 9    2  8    1 7 
//  \      /      \       /
//   3 5 6 9      1 2 7 8
//     \             /
//      1 2 3 5 6 7 8 9

// 3 5 6 9      1 2 7 8
//       
// Inversion
// 1 2 3 5 6 7 8 9
long long merge(int arr[],int l,int mid, int r){
    long long inv = 0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for(int i =0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i =0;i<n2;i++){
        b[i] = arr[mid+i+1];
    }
    int i =0,j=0,k=1;
    while(i<n1 and j<n2 ){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            k++;i++;
        }else{
            arr[k] = b[j];
            inv += n1 - i;
            // a[i]> b[j]
            // a[i] ,a[i+1],a[i+2]...a[] >b[j] and i < j
            k++; j++;
        }
    }
    while(i <n1){
        arr[k] = a[i];
        k++; i++;
    }
    
    while(j<n2){
        arr[k] = b[j];
        k++;j++;
    }
    return inv;
}
long long mergeSort(int arr[],int l,int r){
    long long inv = 0;
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    
    return inv;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergeSort(arr,0,n-1);
    return 0;
}

