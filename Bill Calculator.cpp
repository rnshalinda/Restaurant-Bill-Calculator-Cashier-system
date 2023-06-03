#include<iostream>
#include<ctime>                // To work with PC time and date
#include<string.h>
using namespace std;

/* Important : Please maintain the current line spacing, 
               To help you I have included comments indicating the line numbers for each 'goto' function. */

void AuthorDetails(){
   cout <<"-------------------------------------------------------------------\n";
   cout <<"             ***  Project : Item Purchase system  ***\n";
   cout <<"-------------------------------------------------------------------\n";
   
   cout <<"                 Author  - [ github - rnshalinda ]\n";
   cout <<"                 Gmail   - nsrhewa@gmail.com\n";   
   cout <<"                 Created - 25/04/2022\n";
   cout <<"                 Program - Dev-C++\n";
   cout <<"                 License - MIT License\n";
      
   cout <<"*******************************************************************\n";
}

//*************************************************************************************************************

void space1()              // single line space 
	{
   		 cout << endl;  
	}

void space2()             // double line space 
	{
    	cout << endl; 
    	cout << endl; 
	}

void Title_n_Time()
	{
		time_t t;                  // t is arguiment in function time() 
		struct tm*tt;              // declare local variable
		time (&t);                 // assignne time
		tt = localtime(&t);
		system("cls");
		AuthorDetails();
		space2();
		cout<<"**** The Certis beverage corporation (Pvt) Ltd **** Colombo 07 branch Sri Lanka ****"<<endl;		// title
		cout<<"**** Current data & time : "<<asctime(tt);												// time
	}
	
	   // Menu list array
		string Menu [1][4]={{"Item Code","Juice type","Price Rs.","Buy 5 get 10% off"}};    
		string list1[1][4]={{"1","Apple","120/=","No"}};
		string list2[1][4]={{"2","Orange","100/=","Yes"}};
		string list3[1][4]={{"3","Mango","90 /=","Yes"}};
		string list4[1][4]={{"4","Graps","130/=","No"}};
		string list5[1][4]={{"5","Avacado","140/=","Yes"}};		

void MenuList()
	{
		cout <<" ------------------------- * MENU LIST * --------------------------      "<<endl;
		cout<<" | ["<<Menu[0][0]<<"]   ["<<Menu[0][1]<<"]    ["<<Menu[0][2]<<"]  ["<<Menu[0][3]<<"] |"<<endl;
		cout<<" |     [" <<list1[0][0]<< "]        [ "<<list1[0][1]<<"  ]       ["<<list1[0][2]<<"]            ["<<list1[0][3]<<"]        |"<<endl;
		cout<<" |     [" <<list2[0][0]<< "]        [ "<<list2[0][1]<<" ]       ["<<list2[0][2]<<"]            ["<<list2[0][3]<<"]       |"<<endl;
		cout<<" |     [" <<list3[0][0]<< "]        [ "<<list3[0][1]<<"  ]       ["<<list3[0][2]<<"]            ["<<list3[0][3]<<"]       |"<<endl;
		cout<<" |     [" <<list4[0][0]<< "]        [ "<<list4[0][1]<<"  ]       ["<<list4[0][2]<<"]            ["<<list4[0][3]<<"]        |"<<endl;
		cout<<" |     [" <<list5[0][0]<< "]        [ "<<list5[0][1]<<"]       ["<<list5[0][2]<<"]            ["<<list5[0][3]<<"]       |"<<endl;
	}
	
void text1()
	{
		cout<<" Welcome to Inventory Management System login :"<<endl;
		space1();
		cout<<" You have 3 login atempts.."<<endl;
	}

/*******************************************************************************************************************************/


int main()
{
LOGOUT:		        // goto LOGOUT; link line: 539
welcome:
	
	Title_n_Time();
	
space2();			// call space 
	
	cout<<"------ CHECK OUT SYSTEM --------"<<endl;
	cout<<" *Access? (y:yes / n:exit):: ";
	
		char login;           // Declare input type
		cin>>login;		
		if (login=='y') 
			{  goto LOGIN; }	
		if (login=='n')
			{ space1();  cout<<"  >>> EXIT.";	return 0;	}
		else
			{ goto welcome;}
					
	
	LOGIN:		// Rederect login=='y' here
			
	double b1[5][3]={{001,120,0},{002,100,0.10},{003,90,0.10},{004,130,0},{005,140,0.10}};   // Array; item code, price, offer
		
	Title_n_Time();		   // call function	
	space2();
	text1();
	
	string username;       // declare input type
	string password;
	string name;
	string name0;
	
	int n = 2;
		
	START:             // goto START; link line: 165
		while (n>=0)   // Looping statment 3 times
		{	
			space1();
			cout<<" Enter Username : ";
			cin>>username;
			cout<<" Enter Password : ";
			cin>>password;
			
			if (username == "Certis" && password == "admin@sys")
			{
				space1();
				name = ("Mr. David Palmer");
				name0 = ("Restaurant Manager");
				space1();
				goto END;
			}
			else if (username == "Mich_Dess" && password == "Mich_458")
			{
				space1();
				name = ("Mr. Michelle Dessler");
				name0 = ("Restaurant Cashier");
				space1();
				goto END;
			}
			else if (username == "admin" && password == "123")
			{
				space1();
				 name = ("Mr. Nirmala Shalinda");
				 name0 = ("Restaurant System Administrator");
				space1();
				goto END;
			}
			else if(n==0)
			{
				system("cls");
				Title_n_Time();
				space2();
				cout<<"!!! SORRY.. Maximum attempts reached. ! SYSTEM LOCKED! ***"<<endl;
				space1();
				cout<<">>> EXIT. ";
				return 0;
			}
			else
			{	
				system("cls");
				Title_n_Time();
				space2();														
				cout<<" Incorrect username/password, You have "<<n<<" attempts left"<<endl;
				n=n-1;
				goto START;
			}
		}
		
	options:       // goto options; link line: 349, 526
	END:           // goto END;    link line: 130, 138, 146
	
		system("cls");
		STARTe:    // goto STARTe; link line: 211,540,546

		Title_n_Time();
		
		space1();
		cout<<"**** WELCOME "<<name0<<" : "<<name<<endl;	
		space1();
		
		cout<<" [[ Please select option ]] "<<endl;
		cout<<"** Press (m) for MENU DETAILS **"<<endl;
		cout<<"** Press (b) for BILL **"<<endl;
		cout<<"** Press (e) for Log Out **"<<endl;
		space1();
		
		char input;	char button;
		cout<<"Input Option : ";
		cin>>input;
		space1();
		
		switch (input)       // Menu by user input 
		{
			case 'm':
			{
				system("cls");
				
				Title_n_Time();
				
				space1();
				cout<<"**** WELCOME "<<name0<<" : "<<name<<endl;
				space2();
				
				MenuList();			// display menu here
				
				space1();
				cout<<"Press 'Any key' to go back option :: ";
				char e;
				cin>>e;
				system("cls");
				goto STARTe;
			}
			break;
			
			case 'b':
			{ 
			STARTb1:   // goto STARTb1; link line: 511
				int qty1=0,qty2=0,qty3=0,qty4=0,qty5=0,qtyA=0,qtyB=0,qtyC=0,qtyD=0,qtyE=0;
				double gross1=0,gross2=0,gross3=0,gross4=0,gross5=0,offer2=0,offer3=0,offer5=0,net=0;
				
			ST2:       // goto ST2; link line: 259,280,301,321,342

				Title_n_Time();
				
				space1();
				cout<<"**** WELCOME "<<name0<<" : "<<name<<endl;
				space1();
					
				MenuList();		 // display menu here
				
				space2();
				
				
				cout <<" ------- Calculate Bill -------"<<endl;
				cout<<"Please select Item you want / Enter '0' to cancel, Go back."<<endl;
				OPTb:        // goto OPTb; link line: 353
				
				char code;	
				space1();	
				cout<<"Item code : ";
				cin>>code;
				
					switch(code)      // bill calculator item selection by user input
						{	
						case '1':
								space1();
								cout<<"Selected Apple Juice"<<endl;
								cout<<"Quantity : ";
								cin>>qty1;
								qtyA+=qty1;                // Qunatity adds to previous quantity incase of same item selction again
								gross1+=b1[0][1]*qty1;     // Multiplying Quantity with item price
								space1();
								cout<<"Do you want another drink? Press (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									system("cls");
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}		
							
						case '2':
								space1();
								cout<<"Selected Orange Juice"<<endl;
								cout<<"Quantity : ";
								cin>>qty2;
								qtyB+=qty2;
								gross2+=b1[1][1]*qty2;       // Multiplying Quantity with item price
								space1();
								cout<<"Do you want another drink? Press (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									system("cls");									
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}		
							
						case '3':
								space1();
								cout<<"Selected Mango Juice"<<endl;
								cout<<"Quantity : ";
								cin>>qty3;
								qtyC+=qty3;
								gross3+=b1[2][1]*qty3;
								space1();
								cout<<"Do you want another drink? Press (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									system("cls");
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}
							
						case '4':
								space1();
								cout<<"Selected Graps Juice"<<endl;
								cout<<"Quantity : ";
								cin>>qty4;
								qtyD+=qty4;
								gross4+=b1[3][1]*qty4;
								space1();
								cout<<"Do you want another drink? Press (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}
							
						case '5':
								space1();
								cout<<"Selected Avacado Juice"<<endl;
								cout<<"Quantity : ";
								cin>>qty5;
								qtyE+=qty5;
								gross5+=b1[4][1]*qty5;
								space1();
								cout<<"Do you want another drink? Press (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									system("cls");
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}
						case '0':
								goto options;
							
						default:      // any other key press 
								cout<<"Error! Check the item code"<<endl; 
								goto OPTb;  
						}
						p:           // goto p; link line: 263,284,305,325,346
						
						offer2=(gross2-(gross2*(b1[1][2])));     // Calculating offers
						offer3=(gross3-(gross3*(b1[2][2])));
						offer5=(gross5-(gross5*(b1[4][2])));
						
					if (qty2>=5 && qty3>=5 && qty5>=5)           // Checks customer choice of input to display right bill
						{
							net=gross1+gross4+offer2+offer3+offer5;
							goto netx;
						}
						else  if (qty2<=4 && qty3<=4 && qty5<=4)
						{
							net=gross1+gross2+gross3+gross4+gross5;
							goto netx;
						}
						else if (qty2>=5 && qty3>=5 && qty5<=4)    
						{
							net=gross1+gross4+offer2+offer3+gross5;
							goto netx;
						}
						else  if (qty2>=5 && qty5>=5 && qty3<=4)
						{
							net=gross1+gross4+offer2+gross3+offer5;
							goto netx;
						}	
						else  if (qty5>=5 && qty3>=5 && qty2<=4)
						{
							net=gross1+gross4+gross2+offer3+offer5;
							goto netx;
						}
						else  if (qty5>=5 && qty3<=4 && qty2<=4)
						{
							net=gross1+gross4+gross2+gross3+offer5;
							goto netx;
						} 
						else  if (qty3>=5 && qty5<=4 && qty2<=4)
						{
							net=gross1+gross4+gross2+offer3+gross5;
							goto netx;
						}
						else  if (qty2>=5 && qty5<=4 && qty3<=4)
						{
							net=gross1+gross4+offer2+gross3+gross5;
							goto netx;
						}   			
					netx:              // goto netx; link line: 365,369,374,379,385,389,394,399
					system("cls");
					Title_n_Time();
									
					space1();
					cout<<"**** Purchased items of "<<name0<<" : "<<name<<endl;
					space1();
					
					cout<<"          ---- *CHECK OUT LIST* ---- "<<endl;
					string bill [1][6]={"Juice type","Price Rs.","Qty","Amount","Disc. 10%"};
					cout<<"|"<<bill[0][0]<<"| |"<<bill[0][1]<<"| |"<<bill[0][2]<<"| |"<<bill[0][3]<<"| |"<<bill[0][4]<<"|"<<endl;
					
					if (qty2>4 && qty3>4 && qty5>4)   // Displays right receipt according to user purchase
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<offer2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<offer3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<offer5<<"         "<<b1[4][2]<<endl;
					goto check;	
					}
					if ((qty5<=4 || qty3<=4) && (qty2>=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<offer2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<gross3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<gross5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty5<=4 || qty2<=4) && (qty3>=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<gross2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<offer3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<gross5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty2<=4 || qty3<=4) && (qty5>=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<gross2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<gross3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<offer5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty2>4 || qty3>4) && (qty5<=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<offer2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<offer3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<gross5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty2>4 || qty5>4) && (qty3<=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<offer2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<gross3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<offer5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty5>4 || qty3>4) && (qty2<=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<gross2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<offer3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<offer5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty2<5 && qty3<5 && qty5<5) || (qty2<5 || qty3<5 || qty5<5))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<gross2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<gross3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<gross5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					check:	       // goto check; link line: 420,429,438,447,456,465,474,483
					space1();	
					cout<<"Total Amount : Rs."<<net<<"/="<<endl;
					space1();	
					
					int pay,Q;
					Q=0;
					u:                 // goto u; link line: 514
					pay=0; 
					space1();
					cout<<"Pay Amount in Cash :: ";
					cin>>pay;          // Asking user to input money amount 
					Q+=pay;
					space1();
					if(Q>=net)         // Checkig payed amount with total bill
					{
					cout<<"Payed amount : "<<Q<<" Rs."<<endl;
					space1();	
					cout<<"Balance :: "<<Q-net<<"/= Rs."<<endl;
					space1();
					cout<<">>> Thank you! For your purchase.."<<endl;
				goto out;
					}
					else if(Q<net)     // If payed mount not enough
					{
					space1();
					cout<<"Pyament insufficient."<<endl;
					cout<<"Payed : "<<Q<<"/="<<endl;
					cout<<"Please pay more : "<<net-Q<<"/="<<endl;
					goto u;
					}
				out:   // goto out; link line: 506
				space2();	
	   			cout<<"Press 'm', Return main option.."<<endl;
				cout<<"Press 'b', Another purchase.."<<endl;
				cout<<"Press 'Zero', Exit.."<<endl; 	space1();
			out1:	cout<<"            Press :: ";                    // goto out1; link line: 529
				char press;
				cin>> press;
						switch (press)
						{	
						case 'm' : {goto options;}   // After payment is done askig what to do
						case 'b' : {goto STARTb1;}
						case '0' : {goto exit;}
						default  : {goto out1;} 
					    }
			}
			break;	
			case 'e':
			{	ee:  system("cls");	                // goto ee; link line: 541
			   space1();
				cout<<">> LOGOUT | Are you sure? (y/n) :: ";
				char press;
				cin>>press;
				if (press=='y') {	system("cls");	goto LOGOUT; }
				else if(press=='n') { system("cls");  goto STARTe;}		
				 goto ee;
			}
			default: system("cls");
					cout<<"Sorry couldn't recognize, Try again!"<<endl;
					space1();
					goto STARTe;
		}
		exit: // goto exit; link line: 528
		cout<<">>> Exited."<<endl;
}

