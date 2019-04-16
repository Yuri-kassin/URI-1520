#include<iostream>
#include<string.h>
#include<iomanip>
#include<cstdlib>
#include<list>


using namespace std;

int main(){
	int n,p,x1=0,x2=0,i,x,y;
	list<int>cx;
	list<int>num;
	while(cin>>n){
		for(i=0;i<n;i++){
			cin>>x;
			cin>>y;
			for(x;x<=y;x++){
				cx.push_back(x);
			}
		}
		cx.sort();
		cin>>p;
		i=0;
		while(!cx.empty()){
			if(cx.front() == p){
				num.push_back(i);
			}
			i++;
			cx.pop_front();

		}
		if(!num.empty()){
			x1=num.front();
			x2=num.back();
		}
		if(!num.empty())cout<<p<<" found from "<<x1<<" to "<<x2<<endl;
		else cout<<p<<" not found"<<endl;
		while(!num.empty())num.pop_back();


	}


	system("pause");
	return 0;
}
