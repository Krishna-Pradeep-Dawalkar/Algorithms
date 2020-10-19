#include <iostream>
using namespace std;

int  linearSearch(int values[], int n, int find)
{    int i, found=0;

    for(int i = 0; i < n; i++)
    {
        if (values[i] == find ) //Number Present
                  return  i; //return location
        }//end of for loop

  return -1; // number not present
}//end of linearsearch()

int main()
{  int a[20],n,find,loc,i;


    cout<<"Enter Total Numbers of the array : ";
    cin>>n;

    /* Input elements in the array */
    cout<<"Enter elements in array : ";
    for(i=0; i<n; i++)
       cin>>a[i];


    cout<<"\n Enter number to be find :";
    cin>>find;

  loc=linearSearch(a,n,find);//function call

  if(loc==-1)
     cout<<"\n Number not found ";
  else
     cout<<"\n Number present at "<<loc+1;
  }




