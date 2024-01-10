#include<vector> 
#include<algorithm>
#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) 
{
long petit = 0;
long grand = 0 ;
long size = arr.size();

std::sort(arr.begin(),arr.end());
for (int i =0 ; i < size -1; i++)
{
    petit = petit + arr[i];
}
for (int j =1 ; j < size ; j++)
{
    grand = grand + arr[j];
}
std::cout<<petit <<' '<<grand ;
}