/*
nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Segundo Pseudocodigo
*/

#include <iostream>

void proceso();
int i,j,k,m,n;
using namespace std;

int main (){
	
	proceso();
	
	return 0;
}

void proceso(){
	m=0;
	n=10;
	for(i=0; i<n; i= i+1){
		for(j=0; j<n; j= j +1){
			for( k=0; k<n; k= k + 1){
				m=m+1;
			}
		}
	}
}