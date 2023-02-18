#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],b[n];
		bool f=false;
		for(int i=1;i<=n;i++){
			b[i]=0;
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			b[i]=b[a[i]]+1;
		}
		for(int i=1;i<=n;i++){
			if(b[i]>1){
				f=true;
				
			}
			else
				continue;
		}
		if(f)
			cout<<"TRUE"<<endl;
		else
			cout<<"FALSE"<<endl;
	}
}
