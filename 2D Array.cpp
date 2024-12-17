# include <iostream>
using namespace std;
struct Question{
	string query;
	string options[4];
	int correct option;
	vector<Question>questions;
	
	void addquestion(string query,string opt1,string opt2,string opt3,string opt4,int correct){
		Question q;
		q.query=query;
	q.options[0]=opt1;
	q.options[1]=opt2;
	q.options[2]=opt3;
	q.options[3]=opt4;
	q.correctoption=correct;
	questions.push_back(q);	
	}
	void display Question (Questionq){
		cout<<q.query<< endl;
		for(int i=0;i<4;i++){
			
			cout<<i+1<<"."<< q.options<i>
			<< endl;
		}
	}
int main(){
	srand(time(0));// seed random number ganerator
	//Add Question("which of the following is not a form of non-mechanical energy?","solar energy","wind energy","kinetic energy","thermal energy",3);
	Add Question("What type of energy does a photovoltaic cell convert sunlight into?","Thermal energy","Chemical energy","Electrical energy","Potential energy",3);
	
	Add Question("Geothermal energy is obtained from?","underground water reserviors","the movement of tectonic plates","earths magnetic feild","solar radiation",1);
	Add Question("which of the following is not a renewable source of energy"?,"biomass","nuclear","hydroelectric","wind",2);
	Add Question("which is the unit of electrical energy consumption?","ampere-hour","joule","newton meter","watt hour",4);
}
