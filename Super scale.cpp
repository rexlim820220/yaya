#include <iostream>
#include <cstdlib>
using namespace std;

struct Knapsack{
    int price;
    int weight;
};

int main()
{
    int a;
    cin>>a;
    while(a)
    {
        int objects,maximum=0;
        cin>>objects;
        Knapsack *knapsack=(Knapsack *)malloc(sizeof(Knapsack)*objects);
        for(int i=0;i<objects;++i)
        {
            cin>>knapsack[i].price>>knapsack[i].weight;
        }
        int n;
        cin>>n;
        int *MaxWeight=(int *)malloc(sizeof(int)*n);
        for(int i=0;i<n;++i)
        {
            cin>>MaxWeight[i];
            int DP[100]={0};
            for(int j=0;j<;++j)
            {

            }
        }
        cout<<maximum<<endl;
        --a;
    }
    return 0;
}
