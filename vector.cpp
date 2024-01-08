#include<bits/stdc++.h>
        //(or)
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>my_first_vector;														//Creating vector
	cout<<"The vector size : ";							
	cout<<my_first_vector.size()<<endl;												//Printing size of the vector
	cout<<"Enter the element : ";
	my_first_vector.push_back(2);													//Entering the Element at the end
	cout<<"The deleted element : ";
	my_first_vector.pop_back();														//Deleting and Printing the Element at the end
	cout<<"Enter the elements : "<<endl;	
	int data;
	for(int i = 0; i < 5; i++){								
	cin>>data;
	my_first_vector>push_back(data);												//Entering the 5 Elements in a single loop by using extra variable
	}
	cout<<"The Elements in the vector : "<<endl;
	for(int i = 0; i < 5; i++){								
	cout<<my_first_vector[i]<<" ";													//Printing the 5 Elements in a single loop 
	}
	cout<<"The Elements in the vector : "<<endl;
	for(auto i = my_first_vector.begin() ; i != my_first_vector.end(); i++){
		cout<<*i<<" ";																//Printing the 5 Elements in a single loop with using another method;
	}
	my_first_vector.insert(my_first_vector.begin()+4,6);							//Inserting element 6 at 4th position
	cout<<"The Elements in the vector : "<<endl;
	for(auto i = my_first_vector.begin() ; i != my_first_vector.end(); i++){
		cout<<*i<<" ";																//Printing the Elements after inserting element in the vector
	}
	my_first_vector.erase(my_first_vector.begin()+2);								//Deleting the element 2th position
	cout<<"The Elements in the vector : "<<endl;
	for(auto i = my_first_vector.begin() ; i != my_first_vector.end(); i++){
		cout<<*i<<" ";																//Printing the Elements after deleting element in the vector
	}
	sort(my_first_vector.begin(),my_first_vector.end());
	cout<<"The vector after sorting in Ascending order : "<<endl;
	for(auto i = my_first_vector.begin() ; i != my_first_vector.end(); i++){
		cout<<*i<<" ";																//Printing the Elements after sorting the vector in Ascending order
	}
	sort(my_first_vector.rbegin(),my_first_vector.rend());
	cout<<"The vector after sorting in Descending order : "<<endl;
	for(auto i = my_first_vector.begin() ; i != my_first_vector.end(); i++){
		cout<<*i<<" ";																//Printing the Elements after sorting the vector in Descending order
	}
}
