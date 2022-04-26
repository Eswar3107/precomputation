#include <iostream>
using namespace std;
int main() {
	int q;
	cin >> q;
	while(q--){
		int arr[27]={0};
		string str;
		cin>>str;
		bool f=true;
		for(auto it:str){
			int v=int(it);
			arr[v-96]+=1;
		}
		for(auto it:arr){
			if (it>=2){
				cout<<"Yes"<<"\n";
                f=false;
				break;
			}
		}
		if(f==true){
			cout<<"No"<<"\n";
		}

		
	}   
	
}
