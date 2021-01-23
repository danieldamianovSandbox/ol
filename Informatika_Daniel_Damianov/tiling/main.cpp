#include <iostream>
#include <cmath>
using namespace std;
unsigned long long int solveIplochki(unsigned long long int N)
{
    if(N == 1)
    {
        return 1;
    }
    if(N == 2)
    {
        return 2;
    }
    return solveIplochki(N - 1) + solveIplochki(N - 2);
}
unsigned long long int solveILplochki(unsigned long long int N)
{
    if(N == 1)
    {
        return 1;
    }
    if(N == 2)
    {
        return 2;
    }
    if(N == 3)
    {
        return 5;
    }
    if(N == 4)
    {
        return 11;
    }
    return solveILplochki(N - 1) + solveILplochki(N - 2) + solveILplochki(N - 3) + solveILplochki(N - 4);
}
int main()
{
    unsigned long long int N;
    int T;
    cin>>N>>T;
    unsigned long long int varianti;
    if(T == 1)
    {
        varianti = solveIplochki(N);
        cout<<varianti % (1000000007)<<endl;
    }
    if(T == 2)
    {
        unsigned long long int troiki = N / 3;
        unsigned long long int vazmojnosti = 1;
        for(unsigned long long int i = 1; i <= troiki; i++)
        {
            vazmojnosti *= 2;
        }
        cout<<vazmojnosti % (1000000007)<<endl;
    }
    if(T == 3)
    {
        varianti = solveILplochki(N);
        cout<<varianti % (1000000007)<<endl;
    }
    return 0;
}
