#include <iostream>

using namespace std;
unsigned long long int N;
bool contains(unsigned long long int a, unsigned long long int b,unsigned long long int arr[][2], unsigned long long int N)
{
    for(unsigned long long int i = 0;i < N;i++)
    {
        if(arr[i][0] == a && arr[i][1] == b)
        {
            return true;
        }
        if(arr[i][0] == b && arr[i][1] == a)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    cin>>N;

    unsigned long long int arr[N - 1][2];

    for(unsigned long long int i = 0;i < N - 1;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }

    unsigned long long int counter = 0;

    for(unsigned long long int i = 1;i <= N;i++)
    {
        for(unsigned long long int j = 1;j <= N;j++)
        {
            for(unsigned long long int k = 1;k <= N;k++)
            {
                if(i == j || i == k || j == k)
                {
                    continue;
                }
                if(!(contains(i,j,arr,N - 1) || contains(i,k,arr,N - 1) || contains(j,k,arr,N - 1)))
                {
                    counter++;
                }
            }
        }
    }

    cout<<counter / 6<<endl;

    return 0;
}


