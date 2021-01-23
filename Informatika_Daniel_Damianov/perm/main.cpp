#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned long long int M,N;
    cin>>N>>M;

    unsigned long long int arr[N];
    unsigned long long int permutations[N];

    for(unsigned long long int i = 0; i < N;i++)
    {
        arr[i] = i + 1;
    }

    for(unsigned long long int i = 0; i < N;i++)
    {
        cin>>permutations[i];
    }

    for(unsigned long long int i = 1; i <= M;i++)
    {
        unsigned long long int arrTemp[N];
        for(unsigned long long int i = 0; i < N;i++)
        {
            arrTemp[permutations[i] - 1] = arr[i];
        }
        for(unsigned long long int i = 0; i < N;i++)
        {
            arr[i] = arrTemp[i];
        }
    }

    for(unsigned long long int i = 0; i < N;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
