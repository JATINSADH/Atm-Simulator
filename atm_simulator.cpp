#include<iostream>
#include<stdlib.h>
using namespace std;
class bank{
	int tot=50000;
    public:
    	char log;
	    int n;
	    void hi2();
	    void withdrawl();
	    void deposite();
	    void showbal();
	    void sigh_in();
	    void login();
	    void hi();
		int acc1()
		{   
		    system("cls");
			cout<<"name = jatin."<<endl;
			cout<<"account no. 12345."<<endl;
			cout<<"your pin = 1234."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;			
		}
		int acc2()
		{    
		    system("cls");
			cout<<"name = sahil."<<endl;
			cout<<"account no. 56789."<<endl;
			cout<<"your pin = 5678."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;	
		}
		int acc3()
		{ 
		    system("cls");
			cout<<"name = harsh."<<endl;
			cout<<"account no. 90123."<<endl;
			cout<<"your pin = 9012."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;	
		}
		int acc4()
		{ 
		    system("cls");
			cout<<"name = harshul."<<endl;
			cout<<"account no. 34567."<<endl;
			cout<<"your pin = 3456."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;	
		}
		int acc5()
		{ 
		    system("cls");
			cout<<"name = aj."<<endl;
			cout<<"account no. 78901."<<endl;
			cout<<"your pin = 7890."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;	
		}
};
		void bank::login(){
			string user1="jatin";
			int pass1=1234;
			string user2="sahil";
			int pass2=5678;
			string user3="harsh";
			int pass3=9012;
			string user4="harshul";
			int pass4=3456;
			string user5="aj";
			int pass5=7890;
		    string username;
		     int pin;
		     cout<<"\nplease enter your username"<<endl;
		     cin>>username;
		     cout<<"please enter your pin"<<endl;
		     cin>>pin;
			 if(username == user1 && pin == pass1)
		     {  
		        system("cls");
		     	cout<<"              *******login sussesful*******             \n"<<endl;
		     	cout<<"welcome jatin in our bank.\n"<<endl;
			 }
			 else if(username == user2 && pin == pass2)
		     {  
		        system("cls");
		     	cout<<"              *******login sussesful*******             \n"<<endl;
		     	cout<<"welcome sahil in our bank.\n"<<endl;
			 }
			 else if(username == user3 && pin == pass3)
		     {  
		        system("cls");
		     	cout<<"              *******login sussesful*******             \n"<<endl;
		     	cout<<"welcome harsh in our bank.\n"<<endl;
			 }
			 else if(username == user4 && pin == pass4)
		     {   
		        system("cls");
		     	cout<<"              *******login sussesful*******             \n"<<endl;
		     	cout<<"welcome harshul in our bank.\n"<<endl;
			 }
			 else if(username == user5 && pin == pass5)
		     {  
		        system("cls");
		     	cout<<"              *******login sussesful*******             \n"<<endl;
		     	cout<<"welcome aj in our bank.\n"<<endl;
			 }
			 else 
			 {  
			    system("cls");
			 	cout<<"invalid details.\nplease re-enter username and pin."<<endl;
			 	login();
			 }	 
      }
	      void bank::sigh_in()
			 { 	 
			    string h1="jatin";
			    string k1="jatin12@gmail.com";
			    string u1="9414440841";
			    string h2="sahil";
			    string k2="sahil12@gmail.com";
			    string u2="9414440841";
			    string h3="harsh";
			    string k3="harsh12@gmail.com";
			    string u3="9414440841";
			    string h4="harshul";
			    string k4="harshul12@gmail.com";
			    string u4="9414440841";
			    string h5="aj";
			    string k5="aj12@gmail.com";
			    string u5="9414440841";
			    string h,k;
			    string u;
			 	cout<<"please enter your name "<<endl;
			    cin>>h;
			    cout<<"please enter your email id "<<endl;
			    cin>>k;
			    cout<<"please enter your phone no."<<endl;
			    cin>>u;
			    if(h==h1 && k==k1 && u==u1){
			    	cout<<"your username = jatin\npin = 1234."<<endl;
			    	cout<<"              *******sign_up sussesful*******             \n"<<endl;
		        	cout<<"welcome jatin in our bank.\n"<<endl;
			    	cout<<"   \n       *  please go for login. *     "<<endl;
			    	hi2();
				}
				else if(h==h2 && k==k2 && u==u2){
			    	cout<<"your username = sahil\npin = 5678."<<endl;
			    	cout<<"              *******sign_up sussesful*******             \n"<<endl;
		        	cout<<"welcome sahil in our bank.\n"<<endl;
			    	cout<<"   \n       *  please go for login. *     "<<endl;
			    	hi2();
				}
				else if(h==h3 && k==k3 && u==u3){
			    	cout<<"your username = harsh\npin = 9012."<<endl;
			    	cout<<"              *******sign_up sussesful*******             \n"<<endl;
		        	cout<<"welcome harsh in our bank.\n"<<endl;
			    	cout<<"   \n       *  please go for login. *     "<<endl;
			    	hi2();
				}
				else if(h==h4 && k==k4 && u==u4){
			    	cout<<"your username = harshul\npin = 3456."<<endl;
			    	cout<<"              *******sign_up sussesful*******             \n"<<endl;
		        	cout<<"welcome harshul in our bank.\n"<<endl;
			    	cout<<"   \n       *  please go for login. *     "<<endl;
			    	hi2();
				}
				else if(h==h5 && k==k5 && u==u5){
			    	cout<<"your username = aj\npin = 7890."<<endl;
			    	cout<<"              *******sign_up sussesful*******             \n"<<endl;
		        	cout<<"welcome aj in our bank.\n"<<endl;
			    	cout<<"   \n       *  please go for login. *     "<<endl;
			    	hi2();
				}
				else{
				  cout<<"invalid details.\n"<<endl;
				   hi2();
				}   
		    }
		void bank::deposite()
		{   int amount=0;
			cout<<"enter the ammount you want to deposit"<<endl;
			cin>>amount;
			system("cls");
			tot = tot + amount;
			cout<<"thankyou your balance is updated amount is: "<<tot<<endl;
			cout<<"\n"<<endl;
		}
		void bank::showbal()
		{  int p;
			cout<<"enter your pin: "<<endl;
			cin>>p;
			if(p==1234)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
			  system("cls");
	    	  cout<<"welcome jatin your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else if(p==5678)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
	    	  system("cls");
	    	  cout<<"welcome sahil your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else if(p==9012)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
	    	  system("cls");
	    	  cout<<"welcome harsh your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else if(p==3456)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
	    	  system("cls");
	    	  cout<<"welcome harshul your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else if(p==7890)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
	    	  system("cls");
	    	  cout<<"welcome aj your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else 
			{ 
			  system("cls");
			  cout<<"pin is wrong."<<endl;
		      cout<<"please enter right pin & choose option again.\n"<<endl;
			}
		}
		void bank::withdrawl()
		{
			int a;
			cout<<"enter amount to withdraw: "<<endl;
			cin>>a;
			system("cls");
			tot=tot-a;
			cout<<"pleae collect your cash.\navailable balance is: "<<tot<<endl;
			cout<<"\n"<<endl;
		}
		void bank::hi2(){
		cout<<"press 1 for go to login page."<<endl;
		cin>>n;
		if(n==1){
			while(n==1) {
			 cout<<"\nEnter your choice.\n\t\t\tpress L for Login\n.\n[if you forgate your username and pin use sign in ]\n \n\t\t\tpress S for Sign in."<<endl;
	      	 cin>>log;
			 switch(log){
			 case 'l':	
			      login();
			      n=0;
	     	      break;
	     	 case 's':
	    	 	 sigh_in();
	    	 	 n=0;
			     break;
		        }
		    }	
		}
		else{   
		        system("cls");
				cout<<"invalid choice."<<endl;
				cout<<"retry."<<endl;
				hi2();
		 }
     }
class atm:public bank{
	public: 
	char ch;
	int r;
	int hi(){
	cout<<"press 1 for enter the atm "<<endl;
		cin>>r;
		if(r==1){
			while(r==1) {
			 cout<<"Enter your choice.\npress E for English.\npress H for Hindi"<<endl;
	      	 cin>>ch;
			 switch(ch){
			 case 'e':	
			      cout<<"                *****welcome user*****                   \n"<<endl;
		          hi2();
			      r=0;
	     	      break;
	     	 case 'h':
	    	     cout<<"hindi is unavailible please choose E for english."<<endl;
	    	     hi();
	    	 	 r=0;
			     break;
		        }
		    }	
    	}
    	else{   
		        system("cls");
				cout<<"invalid choice."<<endl;
				cout<<"retry."<<endl;
				hi();
		 }
    }
}; 
class atm3:public bank{
	public:
	int hi3(){
     	char choice;
     	int pi;
	    while(1){
	 		cout<<"Enter your choice."<<endl;
			cout<<"press A for detail."<<endl;
			cout<<"press W for Withdraw."<<endl;
			cout<<"press B for Balance."<<endl;
			cout<<"press D for Deposite."<<endl;
			cout<<"press Q for Quit.\n"<<endl;
			cin>>choice;
			switch(choice){
				case 'a':
					cout<<"please enter your pin."<<endl;
					cin>>pi;
					if(pi==1234)
					{
						acc1();
					    break;
					}
					else if (pi==5678)
					{
						acc2();
						break;
					}
					else if (pi==9012)
					{
						acc3();
						break;
					}
					else if (pi==3456)
					{
						acc4();
						break;
					}
					else if (pi==7890)
					{
						acc5();
						break;
					}
					else 
					{
						cout<<"pin is wrong."<<endl;
						cout<<"please enter right pin & choose option again.\n"<<endl;
					}
					break;
				case 'w':
					withdrawl();
					break;
				case 'b':
					showbal();
					break;
				case 'd':
					deposite();
					break;
		    	case 'q': 
		    	        system("cls");
						cout<<"you logged out.\nexiting...\n"<<endl;
						cout<<" ||    ***       thank you visit again.        ***    || "<<endl;
						cout<<" *******************************************************"<<endl;
						exit(1);
						break;
				default :
					system("cls");
					cout<<"invalid choice."<<endl;
					cout<<"please choose option again."<<endl;
					cout<<"\n"<<endl;
		  		}
			}
		}
};
int main()
{   
   cout<<"            ***************** welcome to the atm ****************        \n"<<endl;
	atm a;
	a.hi();
	bank b;
	atm3 d;
	d.hi3();
	return 0;
}
