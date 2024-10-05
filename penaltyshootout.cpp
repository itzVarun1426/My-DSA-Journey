//codeshef penalty shootout problem
#include <bits/stdc++.h>
using namespace std;


int main() {
    int T,X,Y;
	cin>>T;
	int i=0;
	while(i<T){
	    cin>>X>>Y;
	    if(X>Y){
	        if((X+2)-(Y+1)<=2){
	            cout<<"YES";
	        }
	        else{
	            cout<<"NO";
	        }
	    }
	    else if(X<Y){
	        if((Y+1)-(X+2)<=1){
	            cout<<"YES";
	        }
	        else{
	            cout<<"NO";
	        }
	    }
		else{
			cout<<"YES";
		}
		i++;
	}
	return 0;

}
