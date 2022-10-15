#include<iostream>
using namespace std;

int getarray(int a[100],int n)
{
	cout<<"enter any array";
	   for(int i=0;i<n;i++)
         cin>>a[i];
         
}
int search(int a[100],int key,int n)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
	  		{
	  			cout<<"Key found at :"<<i+1;
	  			flag=1;
	  			break;
			}
	}
	if(flag==0)
		cout<<"Key not found";
}
int main()
{
	int a[100],key,n;
	cout<<"enter size of array";
	cin>>n;
	getarray(a,n);
	cout<<"enter key to be searched";
	cin>>key;
	search(a,key,n);
	return 1;
}


