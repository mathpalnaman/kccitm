#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int>A, int n)
{
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
    cout<<endl;
}
 
void sort(vector<int>&A, int n)
{
    int a,b;
    for(int i=1 ;i<n ;i++)
    {
        a= A[i];
        b=i-1;
        cout<<i<<"  "<<a<<"  "<<b<<endl;
    }
    cout<<a<<endl;
    while(b>=0 && A[b]>a)
    {
        A[b+1]= A[b];
        b--;
    }
    A[b+1]=a;
}
 
int main() {
	vector<int>A= {6,1,2,3,4,6,1};
    int n=7;
    sort(A,n);
	cout<<"sorted vector: ";
	printVector(A,n);
	return 0;
}
