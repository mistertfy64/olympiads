#include <bits/stdc++.h>
using namespace std;

int selectionSort(int array[],int N){
    for (int i = 0; i <= N-1; i++){
        int min = i;
        for (int j = i+1; j < N; j++){
            if (array[j] < array[min]){
                min = j;
            }
        }
        if (min != i){
            swap(array[min],array[i]);
        }
    }
    // print result
    for (int i = 0; i < N; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main(){
    int arr[1000];
    int N;
    cin >> N;
    for (int i =0 ;i < N; i++){
        cin >> arr[i];
    }
    selectionSort(arr,N);
}