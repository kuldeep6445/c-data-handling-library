#include<iostream>
using namespace std;
string find_data(ifstream *myfile , string title ){
	
	string total;
	char track[2];
	int start =0;
	int a=0;
	int b=0;
	char buffer[50];
	
	
	while(!(myfile->eof())){
		getline(*myfile , total );
		
	
	
	start = total.find(title);
	if(start != std::string::npos){
	
		a = total.find(":",start);
		a = total.find('"',a);
		b = total.find('"' ,a+1);
		
		if(b-a == 3){
			track[0] = total[a+1];
			track[1] = total[a+2];
			return track;
		}
		else if(b-a == 2){
			track[0] = total[a+1];
			return track;
		}
	
		total.copy(buffer ,b-a-1,a+1);
	}
}
	return buffer;
	

	
}
