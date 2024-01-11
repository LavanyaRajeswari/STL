#include<bits/stdc++.h>
using namespace std;

int priority(char o){
	if(o == '+' or o == '-'){
		return 1;
	}
	else if(o == '*' or o == '/'){
		return 2;
	}
	else{
		return 0;
	}
}
int operation(int a,int b,char o){
	if(o == '+') return a+b;
	if(o == '-') return a-b;
	if(o == '*') return a*b;
	if(o == '/') return a/b;

}
int main(){
	string s;
	cin>>s;
	stack<int>num;
	stack<char>op;
	for(int i=0;i<s.size();i++){
		if(s[i] == ' '){
			continue;
		}
	else if(s[i] <= '9' and s[i] >= '0'){
		int x=0;
		while(s[i] <= '9' and s[i] >= '0'){
		x=(x*10)+(s[i] - '0');
		i++;
	}
	i-=1;
	num.push(x);
    }
    else{
    if(op.empty()){
    	op.push(s[i]);
	}
	else{
		if(priority(op.top()) < priority(s[i])){
			op.push(s[i]);
		}
		else{
			if(s[i] == '('){
			op.push(s[i]);
	        }
			else if(s[i] == ')')
        	{
            while(!op.empty() && op.top() != '(')
            {
                int b=num.top();
                num.pop();
                 
                int a=num.top();
                num.pop();
                 
                char o = op.top();
                op.pop();
                 
                num.push(operation(a,b,o));
            }
            if(!op.empty())
               op.pop();
        	}
        	else if(priority(op.top()) >= priority(s[i])){
        	while(priority(op.top()) >= priority(s[i])){
        		int b=num.top();
        		num.pop();
        		int a=num.top();
        		num.pop();
        		char o=op.top();
        		op.pop();
        		num.push(operation(a,b,o));
        		if(op.empty()){
        			break;
				}
			}
			op.push(s[i]);
		}
		}
	}
}
}
while(!op.empty()){
	int b=num.top();
	num.pop();
	int a=num.top();
	num.pop();
	char o=op.top();
	op.pop();
	num.push(operation(a,b,o));
}	
while(!num.empty()){
cout<<num.top();
	num.pop();
}
}
