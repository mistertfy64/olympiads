#include <bits/stdc++.h>
using namespace std;


int selectionSort(int array[],int N){
    int freePosition, insertValue;
    for (int i = 1; i <= N-1; i++){
        insertValue = array[i];
        freePosition=i;
        while (freePosition > 0 && (array[freePosition-1]>insertValue)){
            array[freePosition]=array[freePosition-1];
            freePosition=freePosition-1;
        }
        array[freePosition]=insertValue;
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
