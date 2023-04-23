#include <iostream>
#include<algorithm>
using namespace std;

int main()
{ int arr[3],sum=0,counter=0;
    cin>>arr[0]>>arr[1]>>arr[2];
    sort((arr),arr + 3);
    
    for(int i=0;i<100;i++)
    { sum=arr[0]+arr[1];
        if(sum<=arr[2])
        {
            if(arr[0]%2==0)
            {
                arr[0]++;
                counter++;
            }
            else
            {
                arr[1]++;
                counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}
