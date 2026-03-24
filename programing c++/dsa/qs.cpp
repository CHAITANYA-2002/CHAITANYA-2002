#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}
void print(int arr[], int s)
{
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << endl;
  }
}
int part(int arr[], int l, int h)
{
  int pivot = arr[h];
  int i = (l - 1);
  for (int j = l; j < h; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[h]);
  return (i + 1);
}
void quick(int arr[], int l, int h)
{
  if (l < h)
  {
    int pi = part(arr, l, h);
    quick(arr, l, pi - 1);
    quick(arr, pi + 1, h);
  }
}
int main()
{
  int s[] = {120, 36, 18, 72, 11, 1};
  int n = sizeof(s) / sizeof(s[0]);
  cout << "unsorted" << endl;
  print(s, n);
  quick(s, 0, n - 1);
  cout << "sorted" << endl;
  print(s, n);
}


/*
aaj to badi hi comedy si hi ho gyi mere jeevan me 
kabhi bhi socha na tha ki usse move on krna prega meko par sach to yhi hai ki mai 
bhi sure nhi tha uske baare me 
bas baat hi to ki thi maine thori sa feel krnme lag tha mai shayad uske lie 
par maine to poori care hi ti
mai chape ho gya kya care krne se
deserve hi nhi krti thi bhaee meko vo yhi hai sach me bat to 
ese kyu hopti hai ladkiyan 
relationship me ana glt nhi ahi bas glt insaan ke sth me aa gya mai maine ye cheej realise 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    map<int,int> mp;
    for(int i=x-1;i<n;i+=x){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]++;
        }
    }
     int ans=0;
    for(int i=0;i<x-1;i++){
        if(mp.find(arr[i])!=mp.end()){
            ans+=mp[arr[i]];
        }
    }
    for(int i=x-1;i<n;i++){
        if(mp.find(arr[i])!=mp.end())ans+=mp[arr[i]];
    }
   
    
    cout<<ans-1<<endl;
   

}