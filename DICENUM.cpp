#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x;
	
	cin>>t;
	
	while(t--){
	    int arr[3],brr[3],j=0,a=0,b=0;
	    
	    for(int i=0; i<6; i++){
	        
	        if(i<3){
	            cin>>arr[i];
	        }
	        else{
	           cin>>brr[j];
	           j++;
	        }
	    }
	    
	    sort(arr,arr+3,greater<int>());
	    sort(brr,brr+3,greater<int>());
	    j = 0;
	    for(int i=0; i<6; i++){
	        if(i<3){
	            a+=arr[i];
	            a=a*10;
	        }
	        else{
	            b+=brr[j];
	            b=b*10;
	            j++;
	        }
	    }
	    //cout<<a<<" "<<b<<endl;
	    a/=10;
	    b/=10;
	    if(a>b){
	        cout<<"Alice"<<"\n";
	    }
	    else if(a<b){
	        cout<<"Bob"<<"\n";
	    }
	    else{
	        cout<<"Tie"<<"\n";
	    }
	    
	    
	}
	return 0;
}
