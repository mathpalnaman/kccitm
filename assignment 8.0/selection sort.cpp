#include<bits/stdc++.h>
using namespace std;
void printV(vector<int>A)
{
  for (int i=0; i<A.size();i++)
    {
      cout<<A[i]<<" "<<endl;
    }
}

int index_from_i_to_end(vector<int>A, int i)
{
  int sml_index= i;
  for( i; i<A.size(); i++)
	{
		if(A[i]<A[sml_index])
		{
			sml_index = i;
		}
	}
	return sml_index;
}
void sort(vector<int>&A)
{
	for(int i=0;i<A.size();i++)
	{
		int j=index_from_i_to_end(A,i);
		swap(A[i],A[j]);
		cout<<"i: "<<i<<" vector: "<<endl;
		printV(A);
	}
}
 
int main() 
{
	vector<int>A= {6,5,2,3,8,1,0,5};
	sort(A);
	cout<<"sorted vector: "<<endl;
	printV(A);
  return 0;
}
  
