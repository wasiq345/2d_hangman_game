#include<iostream>
#include<windows.h>
#include<ctime>
using namespace std;

void begin();
void logic();
int level;
int score=0;
int main()
{   
    cout<<"\t\t\t\t *       *        *         *      *   ********       *             *          *         *      * \n"
          "\t\t\t\t *       *       * *        **     *   *              **           * *        * *        **     * \n"
	      "\t\t\t\t *       *      *   *       * *    *   *              * *         *  *       *   *       * *    * \n"
	      "\t\t\t\t *********     *     *      *  *   *   *              *  *       *   *      *     *      *  *   * \n"
	      "\t\t\t\t *       *    *********     *   *  *   *              *   *     *    *     *********     *   *  * \n"    
	      "\t\t\t\t *       *   *         *    *    * *   *  ********    *    *   *     *    *         *    *    * * \n"
	      "\t\t\t\t *       *  *           *   *     **   * *       *    *     * *      *   *           *   *     ** \n"
	      "\t\t\t\t                                                 *\n";
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    char start;
    char menu;
    int count=1;
    string welcome="Press 's' TO START THE GAME !";
    int len=welcome.length();
	cout<<"\n";
    cout<<"\t\t\t\t\t\t\t\t------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t ";
    for(int i=0;i<len;i++)
    {
    	Sleep(70);
    	cout<<welcome[i];
	}
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t-------------------------------"<<endl;
    while(count>0 && menu !='q')
    {   
        cin>>start;
        system("cls");
	     system("color 0f");
	     if(start=='s')
	    {    
	        if(score>0)
	       {
	    	   system("cls");
		       begin();
		       system("color F0");
		       logic();
	     	 }
	     	  else
		     {
			    string difficulty="CHOOSE DIFFICULTY: \n"
	                      "1- Easy \n"
	                      "2- Medium \n"
	                      "3- Hard (no hints) \n";
	
                int len2=difficulty.length();
	            cout<<"\n";
                cout<<"\t\t\t\t\t\t\t\t ";
                for(int i=0;i<len2;i++)
                 {
    	            Sleep(70);
    	            cout<<difficulty[i];
     	          }
	             cin>>level; 
	             system("cls");
		         begin();
		         system("color F0");
		         logic();
		   }
	   }
	   else if(start=='m')
	   {
	   	system("cls");
	   	system("color 0f");
		cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n ";
		cout<<"===> PLAY 's' \n\n";
		cout<<" ===> RANK 'r' \n\n";
		cout<<" ===> QUIT 'q' \n\n";
		cin>>menu;
		system("cls");
		if(menu=='s')
		{
			string difficulty="CHOOSE DIFFICULTY: \n"
	                      "1- Easy \n"
	                      "2- Medium \n"
	                      "3- Hard (no hints) \n";
	
            int len2=difficulty.length();
	        cout<<"\n";
            cout<<"\t\t\t\t\t\t\t\t ";
            for(int i=0;i<len2;i++)
              {
    	        Sleep(70);
    	        cout<<difficulty[i];
     	       }
	           cin>>level; 
	           system("cls");
		       begin();
		       system("color F0");
		       logic();
		}
		if(menu=='r')
		{
			if(score>=10)
			{
				system("cls");
				cout<<" \n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout<<" RANK :  SILVER "<<endl;
				cout<<" SCORE: "<<score<<endl;
				cout<<" NEED 10 more to reach GOLD rank ! "<<endl;
			}
			if(score>=20)
			{
				system("cls");
				cout<<" \n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout<<" RANK :  GOLD "<<endl;
				cout<<" SCORE: "<<score<<endl;
				cout<<" NEED 10 more to reach PLATINUM rank ! "<<endl;
			}
			if(score>=30)
			{
				system("cls");
				cout<<" \n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout<<" RANK :  PLATINUM "<<endl;
				cout<<" SCORE: "<<score<<endl;
				cout<<" NEED 10 more to reach MASTER rank ! "<<endl;
			}
			if(score>=40)
			{
				system("cls");
				cout<<" \n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout<<" RANK :  MASTER "<<endl;
				cout<<" SCORE: "<<score<<endl;
				cout<<" NEED 10 more to reach ACE rank ! "<<endl;
			}
			if(score>=50)
			{
				system("cls");
				cout<<" \n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout<<" RANK :  ACE "<<endl;
				cout<<" SCORE: "<<score<<endl;
				cout<<" CONGRATULATIONS ! You have reached the highest rank ! . You are in top 1 . "<<endl;
			}
			if(score==0)
			{
				system("cls");
				cout<<" \n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout<<" RANK :  NONE "<<endl;
				cout<<" SCORE: "<<score<<endl;
				cout<<" NEED 10 more to reach SILVER rank ! "<<endl;
			}
		}
	   }
	   else if(menu=='q')
	   {
	   	break;
	   }
    }
 return 0;
}
void begin()
{   
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t\t\t ============================\n";
    cout<<"\t\t\t                | \n";
    cout<<"\t\t\t                | \n";
    cout<<"\t\t\t                O                  GUESS THE CORRECT WORD IN THREE TRIES ! \n";
    cout<<"\t\t\t                ^  \n";
    cout<<"\t\t\t              /   \\                                SCORE: "<<score<<"\n";
    cout<<"\t\t\t                |  \n";
    cout<<"\t\t\t              /    \\ \n";
    cout<<"\t\t\t       -------------------- \n ";
    cout<<"\t\t\t       |                   | \n";
    cout<<"\t\t\t       |                   | \n";
    cout<<"\t\t\t       |                   | \n";
    cout<<"\t\t\t================================\n";
}
void logic()
{   
    string word;
    string hint;
    int tries=3;
	string easy[10]={"lion","tiger","monkey","panda","camel","lizard","leapord","eagle","rhino","horse"};
	string medium[10]={"india","australlia","afghanistan","china","russia","england","bangladesh","france","germany","spain"};
	string hard[10]={"Kangaroo","crocodile","karachi","madrid","istanbul","berlin","mercedes","islamabad","soccer","philosphy"};
	srand(time(0));
	int index=rand() % 10;
	if(level==1)
	{
	    word=easy[index];
	    hint="It is an animal !";
	}
	else if(level==2)
	{
	    word=medium[index];
	    hint="It is a country !";
	}
	else if(level==3)
	{
	    word=hard[index];
	    hint="No hints !";
	}
	string hidden_word(word.length(),'-');
	char letter;
	int length_word=word.length();
	cout<<"==================="<<endl;
	cout<<"|               |"<<endl;
	cout<<"|   "<<hidden_word<<"\t|"<<"HINT:\t"<<hint<<endl;
	cout<<"|               |"<<endl;
	cout<<"==================="<<endl;
	for(int i=0;i<30;i++)
	{  
	    bool flag=false;
	    cin>>letter; 
	    for(int j=0;j<length_word;j++)
		{
			if(letter == word[j])
	     	{
			cout<<"\t\t\t\t Correct Guess !"<<endl; 
			hidden_word[j]=letter;  
			cout<<"==================="<<endl;
	        cout<<"|               |"<<endl;
	        cout<<"|   "<<hidden_word<<"\t|"<<"HINT:\t"<<hint<<endl;
	        cout<<"|               |"<<endl;
	        cout<<"==================="<<endl;
	        flag=true;
		    }
		 } 
		if(flag==false)
		{
			tries--;
			cout<<"\t\tINCORRECT GUESS !"<<endl;
			cout<<"\t\tTRIES : "<<tries<<endl;
		}
		if(tries==0)
		{ 
		    score=0;
		    system("cls");
		    cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\t\t\t ============================\n";
            cout<<"\t\t\t                | \n";
            cout<<"\t\t\t                | \n";
            cout<<"\t\t\t                | \n";
            cout<<"\t\t\t                | \n";
            cout<<"\t\t\t                O                  YOU ARE HANGED ! \n";
            cout<<"\t\t\t                ^                          SCORE: "<<score<<"\n";
            cout<<"\t\t\t              /   \\ \n";
            cout<<"\t\t\t                |  \n";
            cout<<"\t\t\t              /    \\ \n";
            cout<<"\t\t\t       ----            -----\n ";
            cout<<"\t\t\t       |                   | \n";
            cout<<"\t\t\t       |                   | \n";
            cout<<"\t\t\t       |                   | \n";
            cout<<"\t\t\t================================\n";
            system("color C0");
            cout<<"\n";
            cout<<"\n";
            cout<<"\t\t\t Press 's' TO PLAY AGAIN ! \n";
            cout<<"\t\t\t Press 'm' FOR MENU PAGE . \n";
			break;
		}
		if(hidden_word==word)
		{   
		    score=score+10;
		    system("cls");
			cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\t\t\t ============================\n";
            cout<<"\t\t\t                  \n";
            cout<<"\t\t\t                  \n";
            cout<<"\t\t\t                O                  CONGRATULATIONS , YOU ARE RELEASED ! \n";
            cout<<"\t\t\t                ^  \n";
            cout<<"\t\t\t              /   \\                                  SCORE: "<<score<<"\n";
            cout<<"\t\t\t                |  \n";
            cout<<"\t\t\t              /    \\ \n";
            cout<<"\t\t\t       -------------------- \n ";
            cout<<"\t\t\t       |                   | \n";
            cout<<"\t\t\t       |                   | \n";
            cout<<"\t\t\t       |                   | \n";
            cout<<"\t\t\t================================\n";
            system("color A0");
            cout<<"\n";
            cout<<"\n";
            cout<<"\t\t\t Press 's' TO PLAY AGAIN ! \n";
            cout<<"\t\t\t Press 'm' FOR MENU PAGE . \n";
            break;
		}
	}
	
}

