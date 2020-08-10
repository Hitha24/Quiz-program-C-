#include<bits/stdc++.h>

int option1(int );
int option2(int );
int option3(int );
int option4(int );

void totalPoints( );
void newbee();
void advanced();
void expert();
void exit();

using namespace std;
int main()
{
		int i,choice,temp=0,x;
	    string a;
		
		
	cout<<"***********************************************************************"<<endl<<endl;

	cout<<"::::::::::::::::::::::::Welcome to Quizee::::::::::::::::::::::::::::::"<<endl<<endl;

	cout<<"***********************************************************************"<<endl<<endl<<endl;
	cout<<"Press ENTER to continue";
	getchar();
	cout<<endl<<endl;
		cout<<"                      I N T R O D U C T I O N                          "<<endl<<endl;
	cout<<"Game consists of 3 levels with 3 questions each "<<cout<<"For each correct answers you will be rewarded with 10 points"<<endl;
	cout<<"Press ENTER to continue";
	getchar();
	cout<<endl<<endl;

	cout<<"Enter your name: ";
	cin>>a;
	cout<<endl<<"Hi "<<a<<" Select a level"<<endl;
	while(1){
	
    cout<<endl<<"1. Newbee level"<<endl<<"2. Advanced level"<<endl<<"3. Expert level"<<endl<<"4. Exit"<<endl<<endl;
    cin>>choice;
    if(temp==choice)
    {
    	cout<<"Already completed. Choose next level"<<endl;
    	
	}else {
	
    
    switch(choice){
    	case 1: cout<<"Welcome to Newbee level"<<endl<<endl;
    	newbee();
    	        break;
    	case 2: cout<<"Welcome to Advanced level"<<endl<<endl;
    	advanced();
    	        break;
    	case 3: cout<<"Welcome to Expert level"<<endl<<endl;
    	expert();
    	        break;
    	case 4: cout<<"Thanks for participating "<<a<< " : )"<<endl<<endl;
    	exit(0);
    	       
    	default: cout<<"Invalid Input. Enter again"<<endl<<endl;
		 
    	        
	}
}
	temp=choice;
	
}
	
	return 0;
	
    
}
void newbee(){
	int x,y,z,w,total;

	cout<<endl<<"Entomology is the science that studies"<<endl<<"1.Behavior of human beings"<<endl<<"2.Insects"<<endl<<"3.The origin and history of technical and scientific terms"<<endl<<"4.The formation of rocks"<<endl;
    cin>>x;	
     option2(x);
     cout<<endl<<"For which of the following disciplines is Nobel Prize awarded?"<<endl<<"1. Physics and Chemistry"<<endl<<"2. Physiology or Medicine"<<endl<<"3. Literature, Peace and Economics"<<endl<<"4. All of the above"<<endl;
	 cin>>z;
	 option4(z);
	cout<<endl<<"Logarithm tables were invented by"<<endl<<"1. John Napier "<<endl<<"2. John Doe"<<endl<<"3. John Harrison"<<endl<<"4. John Douglas"<<endl;
     cin>>w;
    option1(w);
   	 	
}
void advanced(){
	int x,y,z,w,total;

	cout<<endl<<"Joule is the unit of"<<endl<<"1.temperature"<<endl<<"2.pressure"<<endl<<"3.energy"<<endl<<"4.heat"<<endl;
     cin>>z;	
     option4(z);
     cout<<endl<<"Kathakali, Mohiniatam and Ottamthullal are the famous dances of"<<endl<<"1. Kerala"<<endl<<"2. Karnataka"<<endl<<"3. Orissa"<<endl<<"4. Tamil Nadu"<<endl;
	 cin>>w;
	 option1(w);
	cout<<endl<<"National Defence Academy is situated at"<<endl<<"1. Khadakvasla "<<endl<<"2. New Delhi"<<endl<<"3. Wellington"<<endl<<"4. Dehradun"<<endl;
     cin>>w;
    option1(w);
   	 	
}
void expert(){
	int x,y,z,w,total;

	cout<<endl<<"Number of commands of Air Force are"<<endl<<"1.five"<<endl<<"2.six"<<endl<<"3.seven"<<endl<<"4.eight"<<endl;
     cin>>y;	
     option3(y);
     cout<<endl<<"Normally the Commonwealth Games are held at intervals of"<<endl<<"1. 3 years"<<endl<<"2. 4 years"<<endl<<"3. 5 years"<<endl<<"4. there is no fixed interval"<<endl;
	 cin>>x;
	 option2(x);
	cout<<endl<<"Name the instrument used to measure relative humidity"<<endl<<"1. Hydrometer "<<endl<<"2. Hygrometer"<<endl<<"3. Barometer"<<endl<<"4. Mercury Thermometer"<<endl;
     cin>>x;
    option2(x);
   	 	
}


int option1(int w){

	if(w==1){
		cout<<"CORRECT"<<endl;
	
	}else if(w>=1&&w<=4){
		cout<<"Better luck next time"<<endl;
	
}else{
	cout<<"Invalid option"<<endl;
	
}
}
int option2(int x){

	if(x==2){
		cout<<"CORRECT"<<endl;
		
	}else if(x>=1&&x<=4){
		cout<<"Better luck next time"<<endl;
		
}else{
	cout<<"Invalid option. try again"<<endl;
	
}
}
int option3(int y){

	if(y==4){
		cout<<"CORRECT"<<endl;
	
	}else if(y>=1&&y<=4){
		cout<<"Better luck next time"<<endl;
		
}else{
	cout<<"Invalid option. try again"<<endl;
	
}
} 
int option4(int z){

	if(z==4){
		cout<<"CORRECT"<<endl;
		
	}else if(z>=1&&z<=4){
		cout<<"Better luck next time"<<endl;
	
}else{
	cout<<"Invalid option. try again"<<endl;
	
	
}
}


