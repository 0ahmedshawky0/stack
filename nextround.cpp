
#include <iostream>
using namespace std;
// next round
int main()
{
 int x,c,sum=0;
 cin>>x>>c;
 --c;
 int arr[x];
for (int i = 0;i<x;i++)
{
   cin>>arr[i];
}
for (int i=0;i<x;i++)
{
  if (arr[i]>=arr[c]&&arr[i]!=0)
  sum++;
}
cout<<sum;
    return 0;
}