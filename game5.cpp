#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <stdlib.h>


using namespace std;

int main()
{


    string arr_char="ABCDEFGHIJABCDEFGHIJ";
    string arr_numbers= "12345678901234567890";
    string arr_numbers2= "12345678901234567890";
    int player1_num1,player1_num2,player2_num1,player2_num2,sum_player1=0,sum_player2=0,stopOfLoop=0;
    vector<int>vec1;



    srand(time(0));  // shuffle of the array \\

    random_shuffle(arr_char.begin(), arr_char.end());




    // start of game \\


    system("CLS");


        cout<<" start of game \n \n ";



        while(stopOfLoop!=20)
        {


            // player 1 turn \\

			system("pause");
			system("CLS");
            for(int i=0; i<20; i++)
            {
                cout<<arr_numbers[i]<<" ";
            }
            cout<<endl<<endl;


            cout<<"player 1 : choose your first number and second number \n";
            cin>>player1_num1>>player1_num2;
            while(player1_num1>20 && player1_num2>20)
            {
                cout<<"please choose a right number"<<endl;
                cin>>player1_num1>>player1_num2;

            }
            for(int i=0; i<vec1.size(); i++)
            {
                if(player1_num1==vec1[i] && player1_num2==vec1[i])
                {
                    while(player1_num1==vec1[i] || player1_num2==vec1[i] || player1_num1>20 || player1_num2>20)
                    {
                        cout<<"please choose a right number"<<endl;
                        cin>>player1_num1>>player1_num2;
                    }
                }
            }



		
			
            for(int i=0; i<20; i++)
            {
                if(i!=(player1_num1-1) && i!=(player1_num2-1) )
                {
                    cout<<arr_numbers[i]<<" ";
                }
                else
                {
                    arr_numbers[i]=arr_char[i];
                    cout<<arr_numbers[i]<<" ";
                }
				
			
            }
			 
            cout<<endl<<endl;


           
            cout<<endl<<endl;

            if(arr_char[player1_num1-1]!=arr_char[player1_num2-1])
            {
                for(int i=0; i<20; i++)
                {
                    if(arr_numbers[i]!='*')
                    {
                        arr_numbers[i]=arr_numbers2[i];
                    }
                }
            }

            if(arr_char[player1_num1-1]==arr_char[player1_num2-1])
            {
                sum_player1++;
                arr_numbers[player1_num1-1]='*';
                arr_numbers[player1_num2-1]='*';
                stopOfLoop+=2;
                vec1.push_back(player1_num1);
                vec1.push_back(player1_num2);

            }
            int NumOfStars=0;
            for(int i=0; i<20; i++)
            {

                if(arr_numbers[i]=='*')
                {
                    NumOfStars++;
                }
                if(NumOfStars==20)
                {
                   goto checkWinner;

                }
            
			}





            // player 2 turn \\
			
			system("pause");
			system("CLS");
            for(int i=0; i<20; i++)
            {
                cout<<arr_numbers[i]<<" ";
            }
            cout<<endl<<endl;


            cout<<"player 2 : choose your first number and second number\n";
            cin>>player2_num1>>player2_num2;
            while(player2_num1>20 && player2_num2>20)
            {
                cout<<"please choose a right number"<<endl;
                cin>>player2_num1>>player2_num2;

            }
            for(int i=0; i<vec1.size(); i++)
            {
                if(player2_num1==vec1[i] && player2_num2==vec1[i])
                {
                    while(player2_num1==vec1[i] || player2_num2==vec1[i] || player2_num1>20 ||player2_num2>20 )
                    {
                        cout<<"please choose a right number"<<endl;
                        cin>>player2_num1>>player2_num2;
                    }
                }
            }




            for(int i=0; i<20; i++)
            {
                if(i!=(player2_num1-1) && i!=(player2_num2-1))
                {
                    cout<<arr_numbers[i]<<" ";
                }
                else
                {
                    arr_numbers[i]=arr_char[i];
                    cout<<arr_numbers[i]<<" ";
                }
            }
				
			
            
            cout<<endl<<endl;


            
            while(player2_num1==player2_num2)
            {
                cout<<"please choose a right number"<<endl;
                cin>>player2_num1>>player2_num2;

            }
            


           
            if(arr_char[player2_num1-1]!=arr_char[player2_num2-1])
            {
                for(int i=0; i<20; i++)
                {
                    if(arr_numbers[i]!='*')
                    {
                        arr_numbers[i]=arr_numbers2[i];
                    }
                }
            }
            if(arr_char[player2_num1-1]==arr_char[player2_num2-1])
            {
                sum_player2++;
                arr_numbers[player2_num1-1]='*';
                arr_numbers[player2_num2-1]='*';
                stopOfLoop+=2;
                vec1.push_back(player2_num1);
                vec1.push_back(player2_num2);
            }

            int NumOfStars2=0;
            for(int i=0; i<20; i++)
            {

                if(arr_numbers[i]=='*')
                {
                    NumOfStars2++;
                }
                if(NumOfStars2==20)
                {
                    goto checkWinner;

                }
            }
            cout<<"score of player 1: "<<sum_player1<<endl<<"score of player 2: "<<sum_player2<<endl<<endl;
        }



        // check winner \\

checkWinner:
		{
			system("CLS");

			cout<<"score of player 1: "<<sum_player1<<endl<<"score of player 2: "<<sum_player2<<endl;

			for(int i=0; i<20; i++)
			{
			    cout<<arr_numbers[i]<<" ";
			}
			cout<<endl<<endl;

			if(sum_player1==sum_player2)
			{
			    cout<<"Drew"<<endl;
			}
			if(sum_player1>sum_player2)
			{
			    cout<<"Player 1 wins"<<endl;
			}
			if(sum_player1<sum_player2)
			{
			    cout<<"Player 2 wins"<<endl;
			}
		}
  }






