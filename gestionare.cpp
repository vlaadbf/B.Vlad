#include<iostream>
using namespace std;
float salary,amount;
float calcul_50(float salary){
  return salary/2;
}
float calcul_20(float salary){
  return salary/5;
}
float calcul_30(float salary){
  return (salary*3)/10;
}
float calcul_amount(float amount){
    return (salary/2)-amount;
}

int main(){
    int one=0,two=0;
	cout<<"introduce your salary-->";
	cin>>salary;
	cout<<"press 1 if you want to gestionate your salary-->";
	cin>>one;
	if(one==1){
	    cout<<"I analizated and generate this: \n"
	    <<"For Home: "<<calcul_50(salary)
	    <<"\nFor Economy: "<<calcul_20(salary)
	    <<"\nFor Fun: "<<calcul_30(salary);
	    
	    cout<<"\nPress 2 if you know exactly how much money do you spent for HOME-->";
	    cin>>two;
	    if(two==2){
	        cout<<"Introduce money for Home-->";
	        cin>>amount;
	        if(amount<salary/2){
	        cout<<"Depending on the expenses of the house I generated: \n";
	        cout<<"ECONOMY: "<<(calcul_amount(amount)/2)+calcul_20(salary)<<
	        "\nFUN: "<<(calcul_amount(amount)/2)+calcul_30(salary);
	        }
	    }
	}
 return 0;
}