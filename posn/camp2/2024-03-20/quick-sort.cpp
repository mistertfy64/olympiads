#include <bits/stdc++.h>
using namespace std;

// segfaults for some reason lol

int partition(int arr[],int l, int h, int N){
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h; j++){
        if (arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void quickSort(int arr[], int l,int h,int N){
    if (l < h){
        int pivot = partition(arr,l,h,N);
        quickSort(arr,l,pivot-1,N);
        quickSort(arr,pivot-1,h,N);
    }
}

int main(){
    int arr[1000];
    int N;
    cin >> N;
    for (int i =0 ;i < N; i++){
        cin >> arr[i];
    }
    quickSort(arr,0,N-1,N);
    return 0;
}