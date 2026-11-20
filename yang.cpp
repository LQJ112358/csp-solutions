#include"yang.h"
#include<iostream>
void PrintBlank(int num){
	for(int i=0;i<num;i++){
		std::cout<<' ';
	}
	
}
void PrintCombine(int n){
			int a=1;
for(int i=1;i<=n;i++){

		std::cout<<a;
		a=a*(n-i)/i;
		std::cout<<' ';
	}

}