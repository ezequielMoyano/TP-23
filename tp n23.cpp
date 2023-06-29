#include <bits/stdc++.h>
using namespace std;

vector<int> generarVector(vector<int>& a, int n){
	for(int pos=1;pos<=n;pos++){
		if(n%pos==0){
			a.push_back(pos);
		}
	}
	return a;
}

void mostrarVector(vector<int>& a){
	for(int pos=0;pos<a.size();pos++){
		cout<<a[pos]<<",";
	}
}

int main( ) {
	vector<int> vector;
	int numero;
	
	cout<<"ingresar un numero"<<endl;
	cin>>numero;
	
	generarVector(vector,numero)=vector;
	
	cout<<"numero ingresado: "<<numero<<endl;
	cout<<"Vector factores:"<<endl;
	mostrarVector(vector);
	
	return 0;
}
