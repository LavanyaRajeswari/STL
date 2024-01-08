#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,int>mpp;
	vector<int>v={1,1,3,4,5,3,4,5,6,5,5,1,2,4,3,6};
	for(int i=0;i<v.size();i++){
		mpp[v[i]]+=1;
	}
	cout<<"The key values pairs in the map :"<<endl;
	for(auto it:mpp){
	    cout<<it.first<<" "<<it.second<<endl;
	}
	cout<<"The most repeated value :"<<endl;
	int a,max=0;
	for(auto it:mpp){
	    if(max < it.second){
	    max=it.second;
		a=it.first;
	    }
	}
	cout<<a<<" "<<max<<endl;
	cout<<"The least repeated value :"<<endl;
	int x=-1,min=INT_MAX;
	for(auto it:mpp){
	    if(min > it.second){
	    min=it.second;
	    x=it.first;
	    }
	}
	cout<<x<<" "<<min<<endl;
}
