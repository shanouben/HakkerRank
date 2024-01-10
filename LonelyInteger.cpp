#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <vector>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int count(int target, vector<int> a)
{
  int b=0;
  
  for(int i = 0;i<sizeof(a);i++)
  {
    if(target == a[i])
    {
      b = b + 1;
    }
  }
  return(b);
}

int lonelyinteger(vector<int> a) 
{
  vector<int> b;
  
  for(int i =0; i<sizeof(a);i++)
  {
    b.insert(b.end(),count(a[i],a));
  }
  for(int j =0; j<sizeof(a);j++)
  {
    if(b[j] ==1)
      {
        return(a[j]);
      }
  }
  return(0);
}