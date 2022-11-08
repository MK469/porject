#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Sum of square of first n natural number//
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    int sum=0;
    
    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    cout<<sum;

    return 0;
}
