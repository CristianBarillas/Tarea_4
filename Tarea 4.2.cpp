#include <iostream>
using namespace std;

main(){
	
	//arreglos bidimensionaels, matriz, tabla.
	int matriz [2][3]={{10,20,30},{40,50,60}}; 
	cout<<"0,0: "<<matriz[0][0]<<endl;
	cout<<"0,1: "<<matriz[0][1]<<endl;
	cout<<"0,2: "<<matriz[0][2]<<endl;
	cout<<"1,0: "<<matriz[1][0]<<endl;
	cout<<"1,1: "<<matriz[1][1]<<endl;
	cout<<"1,2: "<<matriz[1][2]<<endl;
	
	for (int i=0;i<2;i++){
		for(int ii=0;ii<3;ii++){
				cout<<i<<""<<ii<<": "<<matriz[i][ii]<<endl;
	
		cout<<"--------------"<<endl;	
	}
	
	}

	
	
	system("pause");
}
