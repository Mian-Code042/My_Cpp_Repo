#include<iostream>
#include<string>
using namespace std;
class employee{
	private:
		int dd,mm,yy;
		char rank;
	public:
	    employee();
		void getemploy();
		void putemploy();	
};
employee::employee():dd(0),mm(0),yy(0),rank(0){
}
void employee::getemploy(){
	cout<<"Enter date in which you hired employee : "<<endl;
	cout<<"Day : ";cin>>dd;cout<<"Month : ";cin>>mm;cout<<"Year : ";cin>>yy;
	cout<<"Date = "<<dd<<" / "<<mm<<" / "<<yy<<endl;
}
void employee::putemploy(){
	cout<<"\nSelect Rank For Employee :\nS = Manager\nA = Secretary\nB = laborer\nE = Guard";
	cout<<"Enter Rank from S-E :";cin>>rank;
	switch(rank){
		case 'S': cout<<"The Rank you Selected is S rank : Manager";break;
			case 's': cout<<"The Rank you Selected is S rank : Manager";break;
				case 'A': cout<<"The Rank you Selected is A rank : Secretary";break;
					case 'a': cout<<"The Rank you Selected is A rank : Secretary";break;
						case 'B': cout<<"The Rank you Selected is B rank : laborer";break;
							case 'b': cout<<"The Rank you Selected is B rank : laborer";break;
								case 'E': cout<<"The Rank you Selected is E rank : Guard";break;
									case 'e': cout<<"The Rank you Selected is E rank : Guard";break;
		
	}
}
int main(){
	employee e[3];
	for(int i=0;i<3;i++){
		cout<<"\tData for Employee "<<i+1<<"\n\n";
		e[i].getemploy();
		e[i].putemploy();
		cout<<"\n\n";
	}
}
