#include<iostream>
using namespace std;
int a[9]={0,0,0,0,0,0,0,0,0};      //Stores the place occupied by the players
int m=0;      //Number of moves
int flag=0,place,num=0;
int check()
{

	if((a[0]==a[1]==a[2])||(a[3]==a[4]==a[5])||(a[6]==a[7]==a[8])||(a[0]==a[3]==a[6])||(a[1]==a[4]==a[7])||(a[2]==a[5]==a[8])||(a[0]==a[4]==a[8])||(a[2]==a[4]==a[6]))
	{
		return 1;              //Any one row or column or diagonal is equal...
	}
	else{

	 return 0;
}
}
void display()              //Display the current situation of the game
{
		int i;
	for( i=0;i<9;i++)
	{
		if(i%3==0)


		cout<<"\n";
		cout<<a[i];


}
}
int main()
{
	while(1){
		display();                 //Display current game
		if(num%2==0)       //Player 1 move
		{
			l1: cout<<"\nP1 enter the place : "<<endl;
			    cin>>place;
			    if(a[place]==0)         // If unoccupied
			    {
			    	a[place]=1;            //Represents place is occupied by player 1
			    	m++;
			    	if(m>=5)              //Min number of moves for any one row or column to be the same
			    	{
			    		flag=check();       //Check if  a row or column is occupied by player 1
			    		if(flag==1)           //Player 1 won
			    		{
			    			cout<<"\nPlayer 1 won\n";
			    			return 0;
						}
					}
					if(m==9)                //Draw match
					{
						cout<<"\nDraw match\n";
						return 0;
					}

				}
				else{              //Place is already occupied
					cout<<"\nPlace occupied\n";
					goto l1;
				}
		}
		else{                              // Player 2 move
				l2: cout<<"\nP2 enter the place : "<<endl;
			    cin>>place;
			    if(a[place]==0)       // If unoccupied
			    {
			    	a[place]=2;           //Represents place is occupied by player 1
			    	m++;
			    	if(m>=5)             //Min number of moves for any one row or column to be the same
			    	{
			    		flag=check();      //Check if  a row or column is occupied by player 2
			    		if(flag==1)          //Player 2 won
			    		{
			    			cout<<"\nPlayer 2 won\n";
			    			return 0;
						}
					}
					if(m==9)            //Draw match
					{
						cout<<"\nDraw match\n";
						return 0;
					}

				}
				else{                    //Place is already occupied
					cout<<"Place occupied\n";
					goto l2;
				}
		}
	}
}
