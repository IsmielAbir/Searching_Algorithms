#include<iostream>
using namespace std;

int search(int a[], int l, int r, int n){
    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid]==n)
        return mid;
        else if(a[mid]<n)
        l=mid+1;
        else
        r=mid-1;
    }
    return -1;
}

int main(){

    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter a number that you want to search: ";
    cin>>m;
    int c= search(a, 0, n-1, m);
    if(c==-1)
    cout<<"Not found";
    else
    cout<<"Your searching number is: "<<c<<endl;

}