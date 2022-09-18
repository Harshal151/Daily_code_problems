#include <iostream>
#define MAX 500
using namespace std;

void chk_sset(int a[],int n,int b[],int k){
    int count = 0;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                count++;
            }
        }
    }
    if(count==k){
        cout << "arr2[] is a subset of arr1[]";
    }
    else{
        cout << "arr2[] is not a subset of arr1[]";
    }
}

int main()
{
    int arr[MAX];
    int arr1[MAX];
    int size, size1;
    cout << "Enter size of arr1: ";
    cin >> size;
    cout << "Enter elements in array 1: ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter size of arr2: ";
    cin >> size1;
    cout << "Enter the elements in array 2: ";
    for(int i=0;i<size1;i++){
        cin >> arr1[i];
    }
    chk_sset(arr,size,arr1,size1);
    return 0;
}     
