#include <iostream>
#include <vector>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int test(vector<int> arr)
{
    int i;
    
    i = 0;
    while (arr[i] != '\n')
    {
        i++;
    }
    return(i);
}

void plusMinus(vector<int> arr) 
{
    float neg = 0 ;
    float pos = 0;
    float ze = 0 ;
    int size = arr.size();
    
    neg = 0;
    pos = 0;
    ze = 0;
 
    for(unsigned int i = 0; i < size ; i++)
    {
        if(arr[i] > 0)
        {
            pos++;
  
        }
        if(arr[i] < 0)
        {
            neg++;

        }
        if(arr[i] == 0)
        {
            ze++;

        }   
    }
    std::cout << pos/size << '\n';
    std::cout << neg/size << '\n';
    std::cout << ze/size << '\n';
}