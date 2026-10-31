# include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i = 0;i<n;i++)
    {
        if(a[i] == x) return(i);
    }
        return(-1);
}       
   int main()
{
    int a[20];
    int n;
    cout<<"How many element";
    cin>>n;
    cout<<"Enter"<<n<<"elements";
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
    }

    int x;
    cout<<"Enter element to search";
    cin>>x;
    int location = linear_search(a,n,x);
    if(location == -1)cout<<"element noy found";
    else
    cout<<"element found at index:"<<location;
    return(0);
}
/*
PS D:\pratiksha> cd "d:\pratiksha\" ; if ($?) { g++ linearsearch.cpp -o linearsearch } ; if ($?) { .\linearsearch }
How many element 6
Enter6elements 2 3 4 5 6 7
Enter element to search 5
element found at index:3
*/
  
