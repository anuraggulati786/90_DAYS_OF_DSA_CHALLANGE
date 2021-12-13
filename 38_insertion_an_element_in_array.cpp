#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter the size of your array="<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int val,index;
    cout<<"Please enter the intex at which you want to insert="<<endl;
    cin>>index;
    cout<<"Enter the value that you want to insert= "<<endl;
    cin>>val;

    for(int i=n;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=val;

    n=n+1;
    
    cout<<"Elements after insertion is="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Size after insering element is="<<n<<endl;

} 
