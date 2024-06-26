#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"enter the two number : "<<endl;
    cin>>n1>>n2;
    cout<<"enter the operation you want to perform :"<<endl;
    cin>>op;
    switch(op){
    	case '+':
    		{
    			cout<<"addition of two number ="<<endl;
    			cout<<n1+n2;
    			break;
			}
		case '-':
    		{
    			cout<<"subtract of two number ="<<endl;
    			cout<<n1-n2;
    			break;
			}
		case '*':
    		{
    			cout<<"multiply of two number ="<<endl;
    			cout<<n1*n2;
    			break;
			}
		case '/':
    		{
			    if(n2!=0){
			
    			cout<<"division of two number ="<<endl;
    			cout<<n1/n2;
    				}
    			else{
    				cout<<"division not possible"<<endl;
				}
			    break;
			}
		default:
		{
			cout<<"enter correct one ";
			break;
		}
	}
	return 0;
}
