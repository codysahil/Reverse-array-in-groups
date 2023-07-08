#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int start = 0;
    int end = 4;
    int temp = 0;
    while(start<end){
         temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
