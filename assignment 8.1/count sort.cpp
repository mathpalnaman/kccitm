#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>A)
{
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

void sort(vector<int>&A)
{
    vector<int>B(100);
    for(int a:A)
    {
        B[a]++;
    }
	int k=0;
	for(int i=0;i<B.size();i++)
	{
	    for(int j=0;j<B[i];j++)
	    {
	        A[k]=i;
	        k++;
	    }
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);

	
	return 0;
}
