// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include<iostream>
using namespace std;
int main(){
	int t,l,r,a,mx,x,i;
	cin>>t;
	while(t--){
		cin>>l>>r>>a;
		mx=r/a+r%a;
		x=r/a*a-1;
		if(x>=l) mx=max(mx,x/a+x%a);
		cout<<mx<<endl;
	}
}

  // } Driver Code Ends