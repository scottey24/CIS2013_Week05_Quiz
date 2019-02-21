# include <iostream>
# include <string>
using namespace std;

const int MAX = 30;
int student [MAX];
string name[MAX];

void makeStudent(int x){
cout << "enter student " << x+1 << "'s name ";
		cin >> name [x];
		cout << "Enter " << name [x] << "'s grade: ";
		cin >> student[x];	

}

void printGrade(int y){
	cout << name[y]  << y+1 << "'s grade is " << student [y] << endl;
}
	
int main (){
	
	int LEN;
	string a;
	string b;
	string c;
	

	
	cout << "What would you like to do \n";
	cout << "a) Add a student \n";
	cout << "b) Set a Students grade\n";
	cout << "c) Print all grades\n";
	cin >>  a;
	
	
		
		cout << " How many students in this class: ";
	cin >> LEN;
	
	
	for(int i=0; i<LEN; i++) {
		makeStudent(i);
	}

		
	for(int j=0; j<LEN; j++){
		printGrade(j);
	}
		

	
	return 0;
}