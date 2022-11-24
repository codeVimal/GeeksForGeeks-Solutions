#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin >> n;
    char arr[n];
    cin >>  arr;
    for(i=0;i<n;i++)
    {
      for(j=i;j<n;j++)
      {
          cout << arr[j];
      }
      for(k=0;k<i;k++)
      {
          cout << arr[k];
      }
      cout << endl;
    }

}
