#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ipair pair<int,int>
#define pb push_back
#define PQ priority_queue
#define vc vector<int>
#define ld long double
#define ub upper_bound
#define oo 1000000000000000000
const int N=1e6+10;
ll M = 1e9+7;
ll MX = 1e6+2;

// bool isPalindrome(string s , int i, int j){
//    if(i==j){
//       return true;
//    }
//    if(i>j){
//       return true; 
//    }
//    if(s[i] == s[j]){
//       return isPalindrome(s, i+1,j-1);
//    }
//    return false;
// }

// bool isprime(ll n){
   
//    for(ll i=2;i<=sqrt(n);i++){
//       if(n%i==0) return false;
//    }

//    return true;
   
// }

 
void no(){
   int n,x;
   cin>>n>>x;
   int a[n];
   for(int &x : a){
      cin>>x;
   }
   vector<int> s(n+1,INT_MIN);
   s[0] = 0;
   for(int i=0;i<n;i++){
      int temp=0;
      for(int j=i;j<n;j++){
         temp+=a[j];
         s[(j-i)+1] = max(s[(j-i)+1],temp);
      }
   }
   
   for(int i=0;i<=n;i++){
      int ans1 = 0;
      for(int j=1;j<=n;j++){
         ans1 = max(ans1 , min(i,j)*x + s[j]);
      }
      cout<<ans1<<" ";
   } 
   cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		no();
	}
}
