/*

Output:

		*	
		*	*	
*	*	*	*	*	
		*	*	
		*

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nos = n/2;
    for(int i = 0; i< n;i++)
    {
        if(i<n/2)
        {
            for(int j= 0 ; j<nos;j++)
            {
                cout<<"\t";
            }
            for(int j = 0;j<=i;j++)
            {
                cout<<"*\t";
            }
        }
        else if(i == n/2)
        {
            for(int j = 0;j<n;j++)
            {
                cout<<"*\t";
            }
        }
        else
        {
            for(int j= 0 ; j<nos;j++)
            {
                cout<<"\t";
            }
            for(int j = 0;j<n-i;j++)
            {
                cout<<"*\t";
            }
        }
        cout<<"\n";
    }
    
}