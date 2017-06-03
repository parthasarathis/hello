
#include"hello.h"

void hello::sayhello(){
	std::cout << "hello world ! ";
}

void hello::printline(int LineLength){
	for(i=0;i<LineLength;i++){
		std::cout << "-";
	}
}
void hello::printtab(int tabLength){
	for(i=0;i<tabLength;i++){
		std::cout << "\t";
	}
}

void hello::gotonextline(){
	std::cout << "\n";
	}

