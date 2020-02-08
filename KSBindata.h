#include<iostream>
using namespace std;
string find_data(ifstream *myfile , string title ){
	
	string total;
	string track;
	int start =0;
	int a=0;
	int b=0;
	
	
	while(!(myfile->eof())){
		getline(*myfile , track );
		total = total +"\n"+ track;
	}
	
	start = total.find(title);
	a = total.find(":",start);
	a = total.find('"',a);
	b = total.find('"' ,a+1);
	char buffer[50];
	total.copy(buffer ,b-a-1,a+1);
	return buffer;
	
}	
