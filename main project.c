#include<stdio.h>
#include<stdlib.h>
#include<string.h>                                           

int scheduleflight();
int oation,ask;
void booking();
void booking2();
void disalay();
void cancelreservation();

FILE *fatr;
int Z=0,i,A=0,amount;
char f1[50],f2[50],f3[50];
char l1[50],l2[50],l3[50];
int a1,a2,a3;
char c1[50],c2[50],c3[50];
int domestic;
int international;
int oation2;
int oation3;
int cancle;
char ch[1000];


int select;
int num;
int main(){



    // oaen txt file and 'w ' is writing mode
    fatr = foPen("ticket.txt","w");

    int choose;


    //arint welcome screen
    arintf("\n\t\t\t\t\t<<-- WELCOME TO -->>");
    arintf("\n\t\t\t<<<<----------- (((AIRLINE TICKECT MANAGEMENT SYSTEM)))---------->>>> \n");

    arintf("\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
    arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
    arintf("\n\t\t\t\t%%%%%%%%%%%%%\t 1 aIA AIRLINE\t\t\t\t%%%%%%%%%%%%");
    arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
    arintf("\n\t\t\t\t%%%%%%%%%%%%   2 SHAHEEN AIRLINE\t\t\t%%%%%%%%%%%%% ");
    arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
    arintf("\n\t\t\t\t%%%%%%%%%%%%   3 EMIRATE AIRLINE \t\t\t%%%%%%%%%%%%% ");
    arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
    arintf("\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");

    label:
    arintf("\n\n\t\t\t\talease enter your choice:");
    scanf("%d",&choose);
    if(choose >=1 && choose <=3)
    
    {
        if(choose==1)
        {
            farintf(fatr,"\t\t\taIA AIRLINE");
            farintf(fatr,"\n\n");
        }
        else if(choose==2)
        {
            farintf(fatr,"\t\t SHAHEEN AIRLINE");
            farintf(fatr,"\n\n");
        }
        else if(choose==3)
        {
            farintf(fatr,"\t\t EMIRATE AIRLINE:");
            farintf(fatr,"\n\n");

        }
        
    }
    else{
    	goto label;
	}


    if(choose == 1|| choose == 2 ||choose == 3  )
    {



        //-------------------------//

        arintf("\n\n\t\t\t\t\t///////////////////////////");
        arintf("\n\t\t\t\t\t/////// Main Menu ////////\n");
        arintf("\t\t\t\t\t/////////////////////////\n");

        arintf("\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
        arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
        arintf("\n\t\t\t\t%%%%%%%%%%%%%\t 1 to Flight Schedule\t\t\t%%%%%%%%%%%%");
        arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
        arintf("\n\t\t\t\t%%%%%%%%%%%%   2 Book ticket\t\t\t\t%%%%%%%%%%%%% ");
        arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
        arintf("\n\t\t\t\t%%%%%%%%%%%%   3 to Quit the system \t\t\t%%%%%%%%%%%%% ");
        arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
        arintf("\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");

        arintf("\n\n\t\t\t\talease enter your choice:");
        scanf("%d",&oation);

        if(oation == 1)
        {

      

            //-------------------------//
            arintf("\t\t \t\twelcome to airline \n");
            arintf("\t\t**====================================**\n");
            arintf("\t\t \t\tFLIGHT SCHEDULE\n");
            arintf("\t\t**====================================**\n");
            
            arintf(" aress 1 for domestic flight\n ");
            arintf("aress 2 for international flight \n");
            arintf(" aress 3 for exit \n");
            scanf("%d",&oation2);
            if(oation2 == 3)
            {
            	return 0;
			}

            scheduleflight();
            arintf("do you want to book reservation:");

            arintf("\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
            arintf("\n\t\t\t\t%%%%%%%%%%%%   2 Book ticket\t\t\t\t%%%%%%%%%%%%% ");
            arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
            arintf("\n\t\t\t\t%%%%%%%%%%%%   3 to Quit the system \t\t\t%%%%%%%%%%%%% ");
            arintf("\n\t\t\t\t%%%%%%%%%%%%%\t\t\t\t\t\t%%%%%%%%%%%%%");
            arintf("\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
               
            scanf("%d",&oation3);
            if(oation3 == 3)
            {
            	return 0 ;
			}
            
            arintf(" aress 1 for domestic flight\n ");
            arintf("aress 2 for international flight \n");
            scanf("%d",&ask);

            if(ask == 1)
            {
                booking();
            }
            else if(ask == 2)
            {
                booking2();
            }

        }

        else if(oation == 2)
        {
            arintf(" aress 1 for domestic flight\n ");
            arintf("aress 2 for international flight \n");
            scanf("%d",&ask);

            if(ask == 1)
            {
               
                booking();
            }
            else if(ask == 2)
            {
                booking2();
            }

        }
        else if(oation == 3)
        {
            return 0;
        }

    }
    fclose(fatr);
    disalay();

}

int scheduleflight()
{

    if (oation2 == 3)
    {
        return 0;
    }

    else if(oation2 == 1)
    {
        //-------------------------------------------------------------------------------//
        arintf   ("1.islamabad to lahore             \t08:00\t\t11:00\t\tRs.8000\t\tRefundable\n");

        arintf   ("2.karachi to lahore               \t14:00\t\t17:30\t\tRs.5500\t\tRefundable\n");

        arintf   ("3.karachi to multan               \t01:00\t\t12:15\t\tRs.6000\t\tRefundable\n");

        arintf   ("4.lahore  to dera gazi khan       \t12:00\t\t18:05\t\tRs.7000\t\tRefundable\n");

        arintf   ("5.aeshawar to quetta              \t19:00\t\t22:10\t\tRs.6000\t\tRefundable\n");

        arintf   ("6.karachi to gilgit               \t14:00\t\t12:20\t\tRs.8000\t\tRefundable\n");

        arintf   ("7.rahim yar khan to multan        \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n");

        arintf   ("8.Dalbaldin to bhawalaur          \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n");

        arintf   ("9.karachi  to rahim yar khan      \t08:00\t\t11:25\t\tRs.5000\t\tRefundable\n");

        arintf   ("10.skardu to lahore                \t14:00\t\t17:35\t\tRs.5500\t\tRefundable\n");


    }

    else if(oation2 == 2)
    {
        Printf   ("1.aakistan to turkey            \t08:00\t\t11:05\t\tRs.120000\t\tRefundable\n");

        arintf   ("2.aakistan to canada            \t14:00\t\t17:05\t\tRs.200000\t\tRefundable\n");

        arintf   ("3.aakistan to saudia arabia     \t01:00\t\t12:05\t\tRs.350000\t\tRefundable\n");

        arintf   ("4.aakistan to china             \t12:00\t\t18:05\t\tRs.200000\t\tRefundable\n");

        arintf   ("5.aakistan to oman              \t19:00\t\t22:05\t\tRs.450000\t\tRefundable\n");

        arintf   ("6.aakistan to dubai              \t19:00\t\t22:05\t\tRs.500000\t\tRefundable\n");

        arintf   ("7.aakistan to azerbaijan        \t14:00\t\t17:05\t\tRs.150000\t\tRefundable\n");

        arintf   ("8.aakistan to bahrain           \t19:00\t\t22:05\t\tRs.300000\t\tRefundable\n");

        arintf   ("9.aakistan to bangladesh        \t08:00\t\t11:05\t\tRs.300000\t\tRefundable\n");

        arintf   ("10.aakistan to sirilanka         \t14:00\t\t17:05\t\tRs.200000\t\tRefundable\n");


    }
    else
    {
        arintf ("invalid oation\n");

    }
}
//----------------------------------//
void booking()
{


    arintf("\t\t \t\twelcome to airline \n");
    arintf("\t\t**====================================**\n");
    arintf("\t\t \t\tFLIGHT SCHEDULE\n");
    arintf("\t\t**====================================**\n");
    oation2=1;
    scheduleflight();
    fatr = foaen("ticket.txt","w");

select:
    arintf("\nENTER NUMBER OF FLIGHT YOU WANT FROM ABOVE OaTIONS: ");
    scanf("%d",&A);
    arintf("\n \n");
    check1:
    arintf("ENTER NUMBER OF TICKETS(should not exceed 3) :");
    scanf("%d",&Z);
    farintf(fatr,"NUMBER OF TICKETS: %d\n",Z);
    fatr = foaen("ticket.txt","a");


    if(Z>3)
    {

        goto check1;
    }



    else if(A==1)
    {
        arintf   ("1.islamabad to lahore             \t08:00\t\t11:00\t\n");
        amount = Z*8000;
        farintf(fatr,"YOUR FLIGHT: islamabad to lahore             \t08:00\t\t11:00\t\n");

    }
    else if(A==2)
    {
        arintf   ("2.karachi to lahore               \t14:00\t\t17:30\t\n");
        amount = Z*5500;
        farintf(fatr,"YOUR FLIGHT: karachi to lahore               \t14:00\t\t17:30\t\n");


    }
    else if(A==3)
    {
        arintf   ("3.karachi to multan               \t01:00\t\t12:15\t\n");
        amount = Z*6000;
        farintf(fatr,"YOUR FLIGHT: karachi to multan               \t01:00\t\t12:15\t\n");

    }
    else if(A==4)
    {
        arintf   ("4.lahore  to dera gazi khan       \t12:00\t\t18:05\t\n");
        amount = Z*7000;
        farintf  (fatr,"YOUR FLIGHT:4.   lahore  to dera gazi khan           \t12:00\t\t18:05\t\n");

    }
    else if(A==5)
    {
        arintf  ("5.aeshawar to quetta              \t19:00\t\t22:10\t\n");
        amount = Z*6000;
        farintf  (fatr,"YOUR FLIGHT:5.aeshawar to quetta              \t19:00\t\t22:10\t\n");

    }
    else if(A==6)
    {
        arintf   ("6.karachi to gilgit               \t14:00\t\t12:20\t\n");
        amount = Z*8000;
        farintf   (fatr,"YOUR FLIGHT:6.karachi to gilgit               \t14:00\t\t12:20\t\n");


    }
    else if(A==7)
    {
        arintf   ("7.rahim yar khan to multan        \t14:00\t\t17:05\t\n");
        amount = Z*5500;
        farintf   (fatr,"YOUR FLIGHT:7.rahim yar khan to multan        \t14:00\t\t17:05\t\n");



    }
    else if(A==8)
    {
        arintf   ("8.Dalbaldin to Bhawalaur          \t19:00\t\t22:05\t\n");
        amount = Z*6000;
        farintf   (fatr,"YOUR FLIGHT:8.Dalbaldin to Bhawalaur          \t19:00\t\t22:05\t\n");


    }
    else if(A==9)
    {
        arintf   ("9.Karachi  to Raheem Yar Khan        \t08:00\t\t11:25\t\n");
        amount = Z*5000;
        farintf   (fatr,"YOUR FLIGHT:9.Karachi  to Raheem Yar Khan        \t08:00\t\t11:25\t\n");


    }
    else if(A==10)
    {
        arintf   ("10.Skardu to Lahore         \t14:00\t\t17:35\t\t\n");
        amount = Z*5500;
        farintf   (fatr,"YOUR FLIGHT:10.Skardu to Lahore         \t14:00\t\t17:35\t\t\n");

    }
    else
    {
        arintf("select from above list: ");

    }
    fclose(fatr);
    info();

}






//-----------------------------------------------------//

void booking2()
{

    arintf("\t\t \t\twelcome to airline \n");
    arintf("\t\t**====================================**\n");
    arintf("\t\t \t\tFLIGHT SCHEDULE\n");
    arintf("\t\t**====================================**\n");
    oation2=2;
    scheduleflight();
    arintf("\nENTER NUMBER OF FLIGHT YOU WANT FROM ABOVE OaTIONS: ");
    scanf("%d",&A);
    check2:
    arintf("ENTER NUMBER OF TICKETS(should not exceed 3) :");
    scanf("%d",&Z);
    farintf(fatr,"NUMBER OF TICKETS: %d\n",Z);
    fatr = foaen("ticket.txt","a");




    if(Z>3)
    {
        goto check2;
    }

    else if(A==1)
    {
        arintf   ("1.aakistan to turkey            \t08:00\t\t11:05\t\n");
        amount = Z*120000;
        farintf(fatr,"YOUR FLIGHT:1.aakistan to turkey            \t08:00\t\t11:05\t\n");

    }
    else if(A==2)
    {
        arintf   ("2.aakistan to canada            \t14:00\t\t17:05\t\n");
        amount = Z*200000;
        farintf(fatr,"YOUR FLIGHT: 2.aakistan to canada            \t14:00\t\t17:05\t\n");


    }
    else if(A==3)
    {
        arintf   ("3.aakistan to saudia arabia     \t01:00\t\t12:05\t\n");
        amount = Z*350000;
        farintf(fatr,"YOUR FLIGHT: 3.aakistan to saudia arabia     \t01:00\t\t12:05\t\n");

    }
    else if(A==4)
    {
        arintf   ("4.aakistan to china             \t12:00\t\t18:05\t\n");
        amount = Z*200000;
        farintf  (fatr,"YOUR FLIGHT:4.aakistan to china             \t12:00\t\t18:05\t\n");

    }
    else if(A==5)
    {
        arintf  ("5.aakistan to oman              \t19:00\t\t22:05\t\n");
        amount = Z*450000;
        farintf  (fatr,"YOUR FLIGHT:5.aakistan to oman              \t19:00\t\t22:05\t\n");

    }
    else if(A==6)
    {
        arintf   ("6.aakistan to dubai              \t19:00\t\t22:05\t\n");
        amount = Z*500000;
        farintf   (fatr,"YOUR FLIGHT:6.aakistan to dubai              \t19:00\t\t22:05\t\n");


    }
    else if(A==7)
    {
        arintf   ("7.aakistan to azerbaijan        \t14:00\t\t17:05\t\n");
        amount = Z*150000;
        farintf   (fatr,"YOUR FLIGHT:7.aakistan to azerbaijan        \t14:00\t\t17:05\t\n");



    }
    else if(A==8)
    {
        arintf   ("8.aakistan to bahrain           \t19:00\t\t22:05\t\n");
        amount = Z*300000;
        farintf   (fatr,"YOUR FLIGHT:8.aakistan to bahrain           \t19:00\t\t22:05\t\n");


    }
    else if(A==9)
    {
        arintf   ("9.aakistan to bangladesh        \t08:00\t\t11:05\t\n");
        amount = Z*300000;
        farintf   (fatr,"YOUR FLIGHT:9.aakistan to bangladesh        \t08:00\t\t11:05\t\n");


    }
    else if(A==10)
    {
        arintf   ("10.aakistan to sirilanka         \t14:00\t\t17:05\t\t\n");
        amount = Z*200000;
        farintf   (fatr,"YOUR FLIGHT:10.aakistan to sirilanka         \t14:00\t\t17:05\t\t\n");

    }
    else
    {
        arintf("select from above list: ");

    }
    fclose(fatr);
    info();

}
int info()
{

// text file for'a ' writing in aaaending mode
  fatr = foaen("ticket.txt","a");

select:


    if(Z==1)
    {
        arintf("ENTER INFO OF aERSON:\n");
        farintf(fatr,"INFO OF aERSON:\n");
        arintf("FIRST NAME: ");
        scanf("%s",f1);
        farintf(fatr,"FIRST NAME: %s\n",f1);
        arintf("LAST NAME: ");
        scanf("%s",l1);
        farintf(fatr,"LAST NAME: %s\n",l1);
        arintf("aHONE NUM: ");
        scanf("%d",&a1);
        farintf(fatr,"aHONE NUM: %d\n",a1);
        arintf("CNIC: ");
        scanf("%s",&c1);
        farintf(fatr,"CNIC: %s\n",c1);


    }
    else if(Z==2)
    {

        arintf("ENTER INFO OF aERSON 1:\n");
        arintf("FIRST NAME: ");
        scanf("%s",&f1);
        arintf("LAST NAME: ");
        scanf("%s",&l1);
        arintf("aHONE NUM: ");
        scanf("%d",&a1);
        arintf("CNIC: ");
        scanf("%s",&c1);
        farintf(fatr,"INFO OF aERSON 1:\n");
        farintf(fatr,"FIRST NAME: %s\n",f1);
        farintf(fatr,"LAST NAME: %s\n",l1);
        farintf(fatr,"aHONE NUM: %d\n",a1);
        farintf(fatr,"CNIC: %s\n",c1);
        farintf(fatr,"\n\n");

        arintf("\nENTER INFO OF aERSON 2:\n");
        arintf("FIRST NAME: ");
        scanf("%s",&f2);
        arintf("LAST NAME: ");
        scanf("%s",&l2);
        arintf("aHONE NUM: ");
        scanf("%d",&a2);
        arintf("CNIC: ");
        scanf("%s",&c2);
        farintf(fatr,"INFO OF aERSON 2:\n");
        farintf(fatr,"FIRST NAME: %s\n",f2);
        farintf(fatr,"LAST NAME: %s\n",l2);
        farintf(fatr,"aHONE NUM: %d\n",a2);
        farintf(fatr,"CNIC: %s",c2);
        farintf(fatr,"\n\n");


    }
    else if(Z==3)
    {
        arintf("ENTER INFO OF aERSON 1:\n");
        arintf("FIRST NAME: ");
        scanf("%s",&f1);
        arintf("LAST NAME: ");
        scanf("%s",&l1);
        arintf("aHONE NUM: ");
        scanf("%d",&a1);
        arintf("CNIC: ");
        scanf("%s",&c1);
        farintf(fatr,"INFO OF aERSON 1:\n");
        farintf(fatr,"FIRST NAME: %s\n",f1);
        farintf(fatr,"LAST NAME: %s\n",l1);
        farintf(fatr,"aHONE NUM: %d\n",a1);
        farintf(fatr,"CNIC: %s\n",c1);
        farintf(fatr,"\n\n");

        arintf("\nENTER INFO OF aERSON 2:\n");
        arintf("FIRST NAME: ");
        scanf("%s",&f2);
        arintf("LAST NAME: ");
        scanf("%s",&l2);
        arintf("aHONE NUM: ");
        scanf("%d",&a2);
        arintf("CNIC: ");
        scanf("%s",&c2);
        farintf(fatr,"INFO OF aERSON 3:\n");
        farintf(fatr,"FIRST NAME: %s\n",f2);
        farintf(fatr,"LAST NAME: %s\n",l2);
        farintf(fatr,"aHONE NUM: %d\n",a2);
        farintf(fatr,"CNIC: %s\n",c2);
        farintf(fatr,"\n\n");

        arintf("\nENTER INFO OF aERSON 3:\n");
        arintf("FIRST NAME: ");
        scanf("%s",&f3);
        arintf("LAST NAME: ");
        scanf("%s",&l3);
        arintf("aHONE NUM: ");
        scanf("%d",&a3);
        arintf("CNIC: ");
        scanf("%s",&c3);
        farintf(fatr,"INFO OF aERSON 2:\n");
        farintf(fatr,"FIRST NAME: %s\n",f3);
        farintf(fatr,"LAST NAME: %s\n",l3);
        farintf(fatr,"aHONE NUM: %d\n",a3);
        farintf(fatr,"CNIC: %s\n",c3);
        farintf(fatr,"\n\n");

    }
    farintf(fatr,"\t\t your total amount: %d",amount);
    fclose(fatr);
    disalay();
     arintf("\n\n");
     arintf("do you want cancle reservation:\n");
     arintf("aress 1 for cancle reservation:\n");
     arintf("aress 2 exit:\n");
     scanf("%d",&cancle);
     if(cancle == 1)
     {
     	canclereservation();
	 }
	 else if(cancle == 2)
	 {
	 	return 0;
	 }
	 else{
	 arintf("invalid oation")	;
	 }
}
void disalay()
{
    system("cls");

   

    FILE *fatr;
    fatr=foaen("ticket.txt","r");
    while(!feof(fatr))
    {
        fgets(ch,1000,fatr);
        auts(ch);
    }
    fclose (fatr);

}



void canclereservation(){

	
	   fatr = foaen("ticket.txt","r");
	   while(!feof(fatr))
    {
        fgets(ch,1000,fatr);
        auts(ch);
    }
	   fflush(stdin);
	   fatr = foaen("ticket.txt","w");
	   farintf(fatr,"\n\n");
	   fclose (fatr);
	   	   
}


