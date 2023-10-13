#include<iostream>
#include<algorithm>
using namespace std ;
int main ()
{
    int arr[] = {2,4,1,5,2,7,8};
    int n = 7 ;
    int min = 123467;
    for (int i=0 ;i<n;i++)
    { int a = arr[i];
    int sum = 0 ;
        for (int j=i+1 ; j<n; j++){
            sum = a + arr[j];
            if (sum < min ) min = sum ;
        }
    }
    cout << min ;
}