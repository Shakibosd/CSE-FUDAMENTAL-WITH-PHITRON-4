#include <bits/stdc++.h>
int getFourthLargest(int arr[], int n)
{
  if (n < 4)
  {
    return numeric_limits<int>::min(); 
  }
  sort(arr, arr + n);
  return arr[n - 4]; 
}