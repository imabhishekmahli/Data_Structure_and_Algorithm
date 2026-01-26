#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& arr, int element)
{
  for(int i=0;i<=arr.size();i++)
  {
    if(arr[i]==element)
    {
      cout<<"element found at index :"<<i<<endl;
      return i;
    }
  }
  return -1;
}
int main()
{
  vector<int> arr;
  int n;
  int elements;
  cout<<"enter the value of n:";
  cin>>n;
  cout<<"enter the elements of array:"<<endl;
  for(int i=0;i<=n;i++)
  {
    cin>>elements;
    arr.push_back(elements);
  }
  cout<<"entered elements are :"<<endl;
  for(int i=0;i<=n;i++)
  {
    cout<<arr[i]<<" ";
  }

  linearSearch(arr,5);
  return 0;
}