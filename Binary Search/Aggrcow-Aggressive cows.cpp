/* https://www.facebook.com/zawed.akhtar.7923/posts/965524820597234
Platform: Spoj
Status: correct
Author: Zawed Akhtar
*/
#include <iostream>
#include<algorithm>
using namespace std;
bool aggressive(int arr[],int n,int cows,int max_sep)
{
 int last_cows=arr[0];
 int count=1;
 for(int i=1;i<n;i++)
 {
   if(arr[i]-last_cows>=max_sep)
   {
     last_cows=arr[i];
     count++;
   }
 if(count==cows)
 {
   return true;
  }
 }
 return false;
}
int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sort(arr,arr+n);
    int s=0;
    int e=arr[n-1]-arr[0];
    int ans=0;
    while(s<=e)
    {
     int mid=(s+e)>>1; //mid=(s+e)/2; both are same
     bool CowsRakhPara=aggressive(arr,n,c,mid);
     if(CowsRakhPara)
     {
       ans=mid;
       s=mid+1;
     }
     else{
      e=mid-1;
    }
  }
    cout<<ans<<endl;
  }
  return 0;
}
