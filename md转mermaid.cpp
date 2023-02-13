#include<bits/stdc++.h>
using namespace std;

signed main(){
	fstream cin("in.txt", ios::in);
	
	string path[10];
	int num = 0;
	for(char c; !cin.eof(); ){
		while(!cin.eof() && (c=cin.get())!='\n'){
			cout << c;
			path[num] += c;
		}
		if(cin.eof()) break;
		cout << c;
		
		while(!cin.eof() && (c=cin.get())=='\n'){
			cout << c;
		}
		if(cin.eof()) break;
		cout << c;
		
		num = 1;
		while(!cin.eof() && (c=cin.get())=='\t'){
			cout << c;
			++ num;
		}
		if(cin.eof()) break;
		
		if(num >= 1) cout << path[num-1] << " --> ";
		cout << c;
		path[num] = c;
	}
}
