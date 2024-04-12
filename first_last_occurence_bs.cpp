//binary search
#include <iostream>
using namespace std;
int first_occ(int arr[] , int n , int key)
{
    int s=0 ;
    int e = n-1;
    int ans = -1;

    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e=mid-1;
        }
        if(key<arr[mid])
        {
           e=mid-1;
        }
        else
        {
            s=mid+1;
        }

       mid = s +(e-s)/2;
    }
    return ans;
    
}
int last_occ(int arr[] , int n , int key)
{
    int s=0 ;
    int e = n-1;
    int ans = -1;

    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            s=mid+1;
        }
        if(key<arr[mid])
        {
           e=mid-1;
        }
        else
        {
            s=mid+1;
        }

       mid = s +(e-s)/2;
    }
    return ans;
    
}

int main()
{
    int a[5],n,key;
      cout << "Enter the number of array " << endl;
      cin>> n;
      cout << " Enter the values of Array " << endl;
      for (int i=0; i<n; i++)
      {
        cin >> a[i];
      }
      cout << "Enter the key Element " << endl;
      cin >> key;
 cout << " The index  value  of first occurrence is " <<first_occ(a,n,key)<< endl;
 cout << " The index  value  of last occurrence is " <<last_occ(a,n,key)<< endl;
      
   

    return 0;

}





