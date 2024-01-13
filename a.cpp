#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int a[100];
	int c=0,d=0,e=0,f=0;
	cin>>t;
	while(t--){
	   for(int i=0;i<6;i++){
	       cin>>a[i];
	   }
	   for(int i=0;i<3;i++){
	   if(a[i]==6){
	       c++;
	   }
	  
	   
	       
	   }
	   
	    for(int i=3;i<6;i++){
	   if(a[i]==6){
	       d++;
	   }
	   }
	   for(int i=0;i<3;i++){
	       e=e+a[i];
	   }
	   for(int i=3;i<6;i++){
	       f=f+a[i];
	   }
	   if((c==0) && (d!=0)){
	       cout<<"Bob"<<endl;
	   }
	   else if((c!=0) && (d==0)){
	       cout<<"Alice"<<endl;
	   }
	   else if((c==0) && (d==0)){
	       if(e>f){
	           cout<<"Alice"<<endl;
	       }
	       else if(e<f){
	           cout<<"Bob"<<endl;
	       }
	      else{
	          cout<<"Tie"<<endl;
	      }
	      
	   }
	   
	   
	   else if((c!=0) && (d!=0)){
	       if(e>f){
	           cout<<"Alice"<<endl;
	       }
	       else if(f>e){
	           cout<<"Bob"<<endl;
	       }
	      else{
	          cout<<"Tie"<<endl;
	      }
	   }
	}
	return 0;
}
