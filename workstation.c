#include<stdio.h>

#include<conio.h>

#include<math.h>

#include<string.h>

#include<stdlib.h>

#define ENTER 13 //ASCII VALUE OF ENTER
#define BKSP 8 //ASCII VALUE OF BACKSPACE
int day, people;
struct places 
{
  int fe;
  int he;
  int te;
};

struct places krabi, hawaii, maldives, dubai, cairo;

struct natplaces 
{
  int ffe;
  int hhe;
  int tte;
};
struct natplaces mcleod, goa, andaman, kullu, jak;

typedef struct {
  char name[30];
  char sex[30];
  char address[30];
  int date;
  int month;
  int year;
}
Passenger;

 

float guide_info(int intnat) {
  struct guide {
    char id[7];
    float price;
    char name[50];
    char lang[10];
    char h_town[20];
    char numb[13];
  }
  g1, g2, g3, g4;

  //guide info input
  strcpy(g1.id, "QPU8976");
  strcpy(g1.name, "Harshit Gangwar");
  strcpy(g1.lang, "Hindi");
  strcpy(g1.h_town, "Bhopal");
  strcpy(g1.numb, "+918956348967");
  g1.price = 500;

  strcpy(g2.id, "QFG4398");
  strcpy(g2.name, "Deepak Fernandes");
  strcpy(g2.lang, "English");
  strcpy(g2.h_town, "Mumbai");
  strcpy(g2.numb, "+917865064521");
  g2.price = 500;

  strcpy(g3.id, "QDA6123");
  strcpy(g3.name, "Pritam Xavier");
  strcpy(g3.lang, "English");
  strcpy(g3.h_town, "Pune");
  strcpy(g3.numb, "+919767875423");
  g3.price = 2000;

  strcpy(g4.id, "QGP5189");
  strcpy(g4.name, "Jack Tripathi");
  strcpy(g4.lang, "Hindi");
  strcpy(g4.h_town, "Kolkata");
  strcpy(g4.numb, "+918721074376");
  g4.price = 2000;

  //guide menu

  char a, b = 'H';
  label1:
    printf("\n\n****WELCOME TO THE GUIDE MENU****\n\n");
  printf("****Do you want a guide??****\n");
  printf("*******y/n********\n");
  scanf(" %c", & a);
  if (a == 'y' || a == 'Y') {
    printf("Our guides are professionally trained people with one of the best communications skills and with some incredible knowledge about \n");
    printf("the place you will be visiting with them. Each one of them are skilled in handling every situation that might break out in the \n");
    printf("happy journey of yours. Here you will be provided with the proper choices so that we can personally allot you the required \n");
    printf("guide.\n\n");

    printf("Enter the language you want your guide to interact with you, don't worry our guides speak multiple languages just that we \n");
    printf("want a language to uplift the difficulties that he might face to impart the info about the places to you. \n");
    printf("'H' for Hindi and 'E' for English language: ");
    while ((getchar()) != '\n');
    scanf("%c", & b);
    printf("\nHere are the details of your very own personal guide who will be assisting you with every single help you might need.\n\n");
    if ((intnat == 1) && (b == 'H' || b == 'h')) {
      printf("Your guide name is %s. His travel ID is as follows %s. As chosen by you he will be interacting you in %s language.\n", g1.name, g1.id, g1.lang);
      printf("His hometown is %s as some of you might be interested in getting in better touch with him, you can contact him any \n", g1.h_town);
      printf("time at this number %s. He is available to you at an affordable price of %.2f per day. \n", g1.numb, g1.price);
      printf("We are sure you will be having an excellent experience with him. He is waiting to assist you.\n");
      return g1.price;
    } else if ((intnat == 1) && (b == 'E' || b == 'e')) {
      printf("Your guide name is %s. His travel ID is as follows %s. As chosen by you he will be interacting you in %s language.\n", g2.name, g2.id, g2.lang);
      printf("His hometown is %s as some of you might be interested in getting in better touch with him, you can contact him any \n", g2.h_town);
      printf("time at this number %s. He is available to you at an affordable price of %.2f per day. \n", g2.numb, g2.price);
      printf("We are sure you will be having an excellent experience with him. He is waiting to assist you.\n");
      return g2.price;
    } else if ((intnat == 2) && (b == 'E' || b == 'e')) {
      printf("Your guide name is %s. His travel ID is as follows %s. As chosen by you he will be interacting you in %s language.\n", g3.name, g3.id, g3.lang);
      printf("His hometown is %s as some of you might be interested in getting in better touch with him, you can contact him any \n", g3.h_town);
      printf("time at this number %s. He is available to you at an affordable price of %.2f per day. \n", g3.numb, g3.price);
      printf("We are sure you will be having an excellent experience with him. He is waiting to assist you.\n");
      return g3.price;
    } else if ((intnat == 2) && (b == 'H' || b == 'h')) {
      printf("Your guide name is %s. His travel ID is as follows %s. As chosen by you he will be interacting you in %s language.\n", g4.name, g4.id, g4.lang);
      printf("His hometown is %s as some of you might be interested in getting in better touch with him, you can contact him any \n", g4.h_town);
      printf("time at this number %s. He is available to you at an affordable price of %.2f per day. \n", g4.numb, g4.price);
      printf("We are sure you will be having an excellent experience with him. He is waiting to assist you.\n");
      return g4.price;
    }
  } else if (a == 'n' || a == 'N') {
    printf("\nYou have chosen to not take a guide.");
  } else {
    printf("\nYou have entered the wrong input. Try again. \n");
    goto label1;
  }
}
void passenger() {
  //number of passengers
  int mem;
  printf("Enter the number of passengers: ");
  scanf("%d", & people);
   Passenger passengers[people];
 

  //Each Passengers Detail
  printf("Enter %d passengers details \n \n", people);
  for (int i = 0; i < people; i++) {

    if (i == 0) {
      printf("FIRST ENTER MAIN PASSENGER DETAILS(ONE, ON WHOSE NAME BILL WILL BE GENERATED)\nINFORMATION OF OTHER PASSENGERS SHOULD BE ENTERED LATER ON\n");
      printf("Passenger %d:- \n", i + 1);

      //Name
      printf("Name: ");
      scanf(" %[^\n]s", passengers[i].name);

      //Sex
      printf("Sex: ");
      scanf(" %[^\n]s", passengers[i].sex);

      //Address
      printf("Address(City State): ");
      scanf(" %[^\n]s", passengers[i].address);

      //DOB
      labelk:
        printf("DATE OF BIRTH\nFIRST ENTER THE YEAR:");
      scanf("%d", & passengers[i].year);
      printf("NOW ENTER THE MONTH:");
      scanf("%d", & passengers[i].month);
      printf("NOW ENTER THE DATE:");
      scanf("%d", & passengers[i].date);
      if (passengers[i].year <= 0 || passengers[i].month <= 0 || passengers[i].date <= 0 || passengers[i].month > 12) {
        printf("INCORRECT DATA DETECTED!!!\nENTER PROPER DETAILS");
        goto labelk;
      }
      if (passengers[i].month == 1 || passengers[i].month == 3 || passengers[i].month == 5 || passengers[i].month == 7 || passengers[i].month == 8 || passengers[i].month == 10 || passengers[i].month == 12) {
        if (passengers[i].date > 31) {
          printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
          goto labelk;
        }
      } else if (passengers[i].month == 4 || passengers[i].month == 6 || passengers[i].month == 9 || passengers[i].month == 11) {
        if (passengers[i].date > 30) {
          printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
          goto labelk;
        }
      } else if (passengers[i].month == 2) {
        if (passengers[i].year % 400 == 0) {
          if (passengers[i].date > 29) {
            printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
            goto labelk;
          }
        } else {
          if ((passengers[i].year % 4 == 0) && (passengers[i].year % 4 != 0)) {
            if (passengers[i].date > 29) {
              printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
              goto labelk;
            }
          } else {
            if (passengers[i].date > 28) {
              printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
              goto labelk;
            }
          }

        }
      }
      //to consume extra '\n' input

      char ch = getchar();

      printf("\n");
    } else {
      printf("Passenger %d:- \n", i + 1);

      //Name
      printf("Name: ");
      scanf(" %[^\n]s", passengers[i].name);

      //Sex
      printf("Sex: ");
      scanf(" %[^\n]s", passengers[i].sex);

      //Address
      printf("Address( City State): ");
      scanf(" %[^\n]s", passengers[i].address);

      //DOB

      labelk1:
        printf("\nDATE OF BIRTH\nFIRST ENTER THE YEAR:");
      scanf("%d", & passengers[i].year);
      printf("NOW ENTER THE MONTH:");
      scanf("%d", & passengers[i].month);
      printf("NOW ENTER THE DATE:");
      scanf("%d", & passengers[i].date);
      if (passengers[i].year <= 0 || passengers[i].month <= 0 || passengers[i].date <= 0 || passengers[i].month > 12) {
        printf("\nENTER PROPER DETAILS");
        goto labelk1;
      }
      if (passengers[i].month == 1 || passengers[i].month == 3 || passengers[i].month == 5 || passengers[i].month == 7 || passengers[i].month == 8 || passengers[i].month == 10 || passengers[i].month == 12) {
        if (passengers[i].date > 31) {
          printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
          goto labelk1;
        }
      } else if (passengers[i].month == 4 || passengers[i].month == 6 || passengers[i].month == 9 || passengers[i].month == 11) {
        if (passengers[i].date > 30) {
          printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
          goto labelk1;
        }
      } else if (passengers[i].month == 2) {
        if (passengers[i].year % 400 == 0) {
          if (passengers[i].date > 29) {
            printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
            goto labelk1;
          }
        } else {
          if ((passengers[i].year % 4 == 0) && (passengers[i].year % 4 != 0)) {
            if (passengers[i].date > 29) {
              printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
              goto labelk1;
            }
          } else {
            if (passengers[i].date > 28) {
              printf("\nOH OO!! SOMETHING WENT WRONG ENTER CORRECT DETAILS");
              goto labelk1;
            }
          }

        }

        //to consume extra '\n' input

        char ch = getchar();

        printf("\n");
      }
    }
    //Display

  }
  printf("********************All passengers Details********************\n");
  for (int i = 0; i < people; i++) {

    printf("Name \t: ");
    printf("%s \n", passengers[i].name);

    printf("Sex \t: ");
    printf("%s \n", passengers[i].sex);

    printf("Address \t: ");
    printf("%s \n", passengers[i].address);

    printf("DOB:(ddmmyyyy) \t");
    printf("%d / %d / %d \n", passengers[i].date, passengers[i].month, passengers[i].year);
    printf("\n");
  }
  printf("\nHEY THERE %s WHERE HAVE YOU BEEN ALL THIS TIME???\nPLEASE ENTER YOUR LOGIN DETAILS", passengers[0].name);

}
float destinfoint() {
  int x, p, food, hotel, hotelname;
  float totalcost;

  printf("\n*PLEASE NOTE THAT ATMOST TWO PEOPLE CAN RESIDE IN ONE ROOM");
  printf("\nInformation about our destinations out of India:\n\n");
  printf("1.Krabi Thailand\n ~> Wat Tham Sua Aka Tiger Cave Temple: Ascend The 1256 Stairs\n ~> Railay Beach: Try Rock Climbing\n ~> Highest Point In Thailand: Go Bungee Jumping\n ~>Khao Khanap Nam: Explore The Prehistoric Caves\n ~> Water Activities: Explore The Ocean Depths\n\n");
  printf("2.Hawaii\n ~>Honolulu\n ~>Molokini Crater\n ~>Na Pali Coast\n ~>Waikiki Beach\n\n");
  printf("3.Maldives\n ~>Snorkeling\n ~>Fun Tubing\n ~>Parasailing\n ~>Water Skiing\n ~>Kitesurfing or Kiteboarding\n\n");
  printf("4.Dubai\n ~>Dubai Aquarium and Underwater Zoo\n ~>Night camping in Arabian Desert\n ~>Wild Wadi Waterpark\n ~>Marina Mall \n ~>Dubai Fountain\n\n ");
  printf("5.Cairo\n ~>Egyptian Museum\n ~>Khan El Khalili Bazaar\n ~>Mosque-Madrassa Of Sultan Hassan\n ~>Bab Zuwayla Minaret\n\n");

  char dest[5][1000] = {
    "Krabi Thailand",
    "Hawaii",
    "Maldives",
    "Dubai",
    "Cairo"
  };

  for (int i = 0; i < 5; i++) {
    printf("%d. %s\n", i + 1, dest[i]);
  }
  printf("YOUR DESTINATION IS NO LONGER A PLACE, \nRATHER A NEW WAY OF SEEING!!!");
  printf("");
  printf("GREAT!!!\nNow choose the destination number you would like to visit:");
  scanf("%d", & x);

  switch (x) {
  case 1: {
    printf("SO YOUR KRABI, THAILAND TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label21:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label21;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.3000-4000 PER DAY\n2. 4 STAR HOTELS RS.5000-6000 PER DAY\n3. 5 STAR HOTELS RS.7000-8000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label22:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label22;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 3500/DAY)\n\n2. DE GRAND RIVERIA(RS. 3700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 3500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        krabi.he = 3500;

        if (food == 1)
          krabi.fe = 700;
        else
        if (food == 2)
          krabi.fe = 1100;
        break;
      }
      case 2: {
        krabi.he = 3700;
        if (food == 1)
          krabi.fe = 700;
        else
        if (food == 2)
          krabi.fe = 1100;

        break;
      }
      case 3: {
        krabi.he = 3500;
        if (food == 1)
          krabi.fe = 700;
        else
        if (food == 2)
          krabi.fe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 5500/DAY)\n\n2. RAVENDER CLASSIC(RS. 5900/DAY)\n\n3.SEA SHELL SUITE(RS. 5800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        krabi.he = 5500;
        if (food == 1)
          krabi.fe = 900;
        else
        if (food == 2)
          krabi.fe = 1300;
        break;
      }
      case 2: {
        krabi.he = 5900;
        if (food == 1)
          krabi.fe = 900;
        else
        if (food == 2)
          krabi.fe = 1300;
        break;
      }
      case 3: {
        krabi.he = 5800;
        if (food == 1)
          krabi.fe = 900;
        else
        if (food == 2)
          krabi.fe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 7200/DAY)\n\n2. CARAVELLA RESORT(RS. 7500/DAY)\n\n3. THE CROWN HOTEL(RS. 7200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        krabi.he = 7200;
        if (food == 1)
          krabi.fe = 1200;
        else
        if (food == 2)
          krabi.fe = 1800;
        break;
      }
      case 2: {
        krabi.he = 7500;
        if (food == 1)
          krabi.fe = 1200;
        else
        if (food == 2)
          krabi.fe = 1800;
        break;
      }
      case 3: {
        krabi.he = 7200;
        if (food == 1)
          krabi.fe = 1200;
        else
        if (food == 2)
          krabi.fe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR KRABI, THAILAND TOURISM WILL BE :RS 2500/day\n");
    krabi.te = 2500;
    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR KRABI, THAILAND TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", krabi.te * day, krabi.he * day * people / 2, krabi.fe * day);
      totalcost = (krabi.te + krabi.fe) * day * people + (krabi.he * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR McLEOD GANJ TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", krabi.te * day, krabi.he * day * ceil(people / 2.0), krabi.fe * day);
      totalcost = (krabi.te + krabi.fe) * day * people + (krabi.he * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", krabi.fe);
    break;

  }

  case 2: {
    printf("SO YOUR HAWAII TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label23:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label23;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.3000-4000 PER DAY\n2. 4 STAR HOTELS RS.5000-6000 PER DAY\n3. 5 STAR HOTELS RS.7000-8000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label24:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label24;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 3500/DAY)\n\n2. DE GRAND RIVERIA(RS. 3700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 3500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        hawaii.he = 3500;

        if (food == 1)
          hawaii.fe = 700;
        else
        if (food == 2)
          hawaii.fe = 1100;
        break;
      }
      case 2: {
        hawaii.he = 3700;
        if (food == 1)
          hawaii.fe = 700;
        else
        if (food == 2)
          hawaii.fe = 1100;

        break;
      }
      case 3: {
        hawaii.he = 3500;
        if (food == 1)
          hawaii.fe = 700;
        else
        if (food == 2)
          hawaii.fe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 5500/DAY)\n\n2. RAVENDER CLASSIC(RS. 5900/DAY)\n\n3.SEA SHELL SUITE(RS. 5800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        hawaii.he = 5500;
        if (food == 1)
          hawaii.fe = 900;
        else
        if (food == 2)
          hawaii.fe = 1300;
        break;
      }
      case 2: {
        hawaii.he = 5900;
        if (food == 1)
          hawaii.fe = 900;
        else
        if (food == 2)
          hawaii.fe = 1300;
        break;
      }
      case 3: {
        hawaii.he = 5800;
        if (food == 1)
          hawaii.fe = 900;
        else
        if (food == 2)
          hawaii.fe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 7200/DAY)\n\n2. CARAVELLA RESORT(RS. 7500/DAY)\n\n3. THE CROWN HOTEL(RS. 7200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        hawaii.he = 7200;
        if (food == 1)
          hawaii.fe = 1200;
        else
        if (food == 2)
          hawaii.fe = 1800;
        break;
      }
      case 2: {
        hawaii.he = 7500;
        if (food == 1)
          hawaii.fe = 1200;
        else
        if (food == 2)
          hawaii.fe = 1800;
        break;
      }
      case 3: {
        hawaii.he = 7200;
        if (food == 1)
          hawaii.fe = 1200;
        else
        if (food == 2)
          hawaii.fe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR HAWAII TOURISM WILL BE :RS 2500/day\n");
    hawaii.te = 2500;
    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR HAWAII TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", hawaii.te * day, hawaii.he * day * people / 2, hawaii.fe * day);
      totalcost = (hawaii.te + hawaii.fe) * day * people + (hawaii.he * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR McLEOD GANJ TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", hawaii.te * day, hawaii.he * day * ceil(people / 2.0), hawaii.fe * day);
      totalcost = (hawaii.te + hawaii.fe) * day * people + (hawaii.he * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", hawaii.fe);
    break;

  }

  case 3: {
    printf("SO YOUR MALDIVES TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label25:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label25;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.3000-4000 PER DAY\n2. 4 STAR HOTELS RS.5000-6000 PER DAY\n3. 5 STAR HOTELS RS.7000-8000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label26:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label26;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 3500/DAY)\n\n2. DE GRAND RIVERIA(RS. 3700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 3500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        maldives.he = 3500;

        if (food == 1)
          maldives.fe = 700;
        else
        if (food == 2)
          maldives.fe = 1100;
        break;
      }
      case 2: {
        maldives.he = 3700;
        if (food == 1)
          maldives.fe = 700;
        else
        if (food == 2)
          maldives.fe = 1100;

        break;
      }
      case 3: {
        maldives.he = 3500;
        if (food == 1)
          maldives.fe = 700;
        else
        if (food == 2)
          maldives.fe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 5500/DAY)\n\n2. RAVENDER CLASSIC(RS. 5900/DAY)\n\n3.SEA SHELL SUITE(RS. 5800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        maldives.he = 5500;
        if (food == 1)
          maldives.fe = 900;
        else
        if (food == 2)
          maldives.fe = 1300;
        break;
      }
      case 2: {
        maldives.he = 5900;
        if (food == 1)
          maldives.fe = 900;
        else
        if (food == 2)
          maldives.fe = 1300;
        break;
      }
      case 3: {
        maldives.he = 5800;
        if (food == 1)
          maldives.fe = 900;
        else
        if (food == 2)
          maldives.fe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 7200/DAY)\n\n2. CARAVELLA RESORT(RS. 7500/DAY)\n\n3. THE CROWN HOTEL(RS. 7200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        maldives.he = 7200;
        if (food == 1)
          maldives.fe = 1200;
        else
        if (food == 2)
          maldives.fe = 1800;
        break;
      }
      case 2: {
        maldives.he = 7500;
        if (food == 1)
          maldives.fe = 1200;
        else
        if (food == 2)
          maldives.fe = 1800;
        break;
      }
      case 3: {
        maldives.he = 7200;
        if (food == 1)
          maldives.fe = 1200;
        else
        if (food == 2)
          maldives.fe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR MALDIVES TOURISM WILL BE :RS 2500/day\n");
    maldives.te = 2500;
    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR MALDIVES TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", maldives.te * day, maldives.he * day * people / 2, maldives.fe * day);
      totalcost = (maldives.te + maldives.fe) * day * people + (maldives.he * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR MALDIVES TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", maldives.te * day, maldives.he * day * ceil(people / 2.0), maldives.fe * day);
      totalcost = (maldives.te + maldives.fe) * day * people + (maldives.he * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", maldives.fe);
    break;

  }

  case 4: {
    printf("SO YOUR DUBAI TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label27:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label27;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.3000-4000 PER DAY\n2. 4 STAR HOTELS RS.5000-6000 PER DAY\n3. 5 STAR HOTELS RS.7000-8000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label28:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label28;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 3500/DAY)\n\n2. DE GRAND RIVERIA(RS. 3700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 3500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        dubai.he = 3500;

        if (food == 1)
          dubai.fe = 700;
        else
        if (food == 2)
          dubai.fe = 1100;
        break;
      }
      case 2: {
        dubai.he = 3700;
        if (food == 1)
          dubai.fe = 700;
        else
        if (food == 2)
          dubai.fe = 1100;

        break;
      }
      case 3: {
        dubai.he = 3500;
        if (food == 1)
          dubai.fe = 700;
        else
        if (food == 2)
          dubai.fe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 5500/DAY)\n\n2. RAVENDER CLASSIC(RS. 5900/DAY)\n\n3.SEA SHELL SUITE(RS. 5800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        dubai.he = 5500;
        if (food == 1)
          dubai.fe = 900;
        else
        if (food == 2)
          dubai.fe = 1300;
        break;
      }
      case 2: {
        dubai.he = 5900;
        if (food == 1)
          dubai.fe = 900;
        else
        if (food == 2)
          dubai.fe = 1300;
        break;
      }
      case 3: {
        dubai.he = 5800;
        if (food == 1)
          dubai.fe = 900;
        else
        if (food == 2)
          dubai.fe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 7200/DAY)\n\n2. CARAVELLA RESORT(RS. 7500/DAY)\n\n3. THE CROWN HOTEL(RS. 7200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        dubai.he = 7200;
        if (food == 1)
          dubai.fe = 1200;
        else
        if (food == 2)
          dubai.fe = 1800;
        break;
      }
      case 2: {
        dubai.he = 7500;
        if (food == 1)
          dubai.fe = 1200;
        else
        if (food == 2)
          dubai.fe = 1800;
        break;
      }
      case 3: {
        dubai.he = 7200;
        if (food == 1)
          dubai.fe = 1200;
        else
        if (food == 2)
          dubai.fe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR DUBAI TOURISM WILL BE :RS 2500/day\n");
    dubai.te = 2500;
    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR DUBAI TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", dubai.te * day, dubai.he * day * people / 2, dubai.fe * day);
      totalcost = (dubai.te + dubai.fe) * day * people + (dubai.he * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR DUBAI TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", dubai.te * day, dubai.he * day * ceil(people / 2.0), dubai.fe * day);
      totalcost = (dubai.te + dubai.fe) * day * people + (dubai.he * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", dubai.fe);
    break;

  }

  case 5: {
    printf("SO YOUR CAIRO TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label29:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label29;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.3000-4000 PER DAY\n2. 4 STAR HOTELS RS.5000-6000 PER DAY\n3. 5 STAR HOTELS RS.7000-8000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label30:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label30;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 3500/DAY)\n\n2. DE GRAND RIVERIA(RS. 3700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 3500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        cairo.he = 3500;

        if (food == 1)
          cairo.fe = 700;
        else
        if (food == 2)
          cairo.fe = 1100;
        break;
      }
      case 2: {
        cairo.he = 3700;
        if (food == 1)
          cairo.fe = 700;
        else
        if (food == 2)
          cairo.fe = 1100;

        break;
      }
      case 3: {
        cairo.he = 3500;
        if (food == 1)
          cairo.fe = 700;
        else
        if (food == 2)
          cairo.fe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 5500/DAY)\n\n2. RAVENDER CLASSIC(RS. 5900/DAY)\n\n3.SEA SHELL SUITE(RS. 5800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        cairo.he = 5500;
        if (food == 1)
          cairo.fe = 900;
        else
        if (food == 2)
          cairo.fe = 1300;
        break;
      }
      case 2: {
        cairo.he = 5900;
        if (food == 1)
          cairo.fe = 900;
        else
        if (food == 2)
          cairo.fe = 1300;
        break;
      }
      case 3: {
        cairo.he = 5800;
        if (food == 1)
          cairo.fe = 900;
        else
        if (food == 2)
          cairo.fe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 7200/DAY)\n\n2. CARAVELLA RESORT(RS. 7500/DAY)\n\n3. THE CROWN HOTEL(RS. 7200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        cairo.he = 7200;
        if (food == 1)
          cairo.fe = 1200;
        else
        if (food == 2)
          cairo.fe = 1800;
        break;
      }
      case 2: {
        cairo.he = 7500;
        if (food == 1)
          cairo.fe = 1200;
        else
        if (food == 2)
          cairo.fe = 1800;
        break;
      }
      case 3: {
        cairo.he = 7200;
        if (food == 1)
          cairo.fe = 1200;
        else
        if (food == 2)
          cairo.fe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR CAIRO TOURISM WILL BE :RS 2500/day\n");
    cairo.te = 2500;
    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR CAIRO TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", cairo.te * day, cairo.he * day * people / 2, cairo.fe * day);
      totalcost = (cairo.te + cairo.fe) * day * people + (cairo.he * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR CAIRO TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", cairo.te * day, cairo.he * day * ceil(people / 2.0), cairo.fe * day);
      totalcost = (cairo.te + cairo.fe) * day * people + (cairo.he * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", cairo.fe);
    break;

  }
  default:
    printf("ERROR!! ENTER NUMBER BETWEEN 1 AND 5");

  }

  return totalcost;
}

float destinfo() {
  int x, p, food, hotel, hotelname, people;
  float totalcost;

  printf("\n*PLEASE NOTE THAT ATMOST TWO PEOPLE CAN RESIDE IN ONE ROOM");
  printf("\nInformation about our destinations:\n\n");
  printf("1.McLeod Ganj\n ~>Dal Lake - Feel The Serene Blue Waters\n ~>Sightseeing - Enjoy The Exotic Beauty\n ~>Tsug La Khang - Witness The Eternal Power\n ~>Kora Circuit - Feel The Tranquillity\n ~>Triund - Experience The Bounty Mountains\n\n");
  printf("2.Panjim,Goa \n ~>Dona Paula Beach - Sunbathe & Relax\n ~>Fort Aguada - Hang Out With Friends\n ~>Vainguinim Beach - Chase The Waves!\n ~>Reis Magos Fort - Explore Ancient Ruins\n ~>Goa Science Centre - Check Out Interesting Exhibits\n\n");
  printf("3.Andaman and Nicobar islands\n ~>Snorkeling: Enjoy This Water Sport\n ~>Scuba Diving:  For Adventure Enthusiasts\n ~>Parasailing: The Airborne Adventure\n ~>Dolphin Watching: See The Happy Mammals\n ~>Chidiya Tapu: Visit The Beautiful Place\n\n");
  printf("4.Kullu Manali,Shimla\n ~>Waterfalls: Listen To The Music\n ~>Arjun Gufa: Meditate And Relax\n ~>Zorbing: For Some Fun and Adventure\n ~>Skiing at Solang Nullah: Time To Play In The Snow\n ~>Mountain Biking: Try Something Different\n\n");
  printf("5.Jammu and Kashmir\n ~>Shikara Ride in Kashmir\n ~>Gulmarg Gondola\n ~>Skiing in Kashmir: One of the most exciting winter sports\n ~>Paragliding\n ~>River Rafting\n\n");
  char dest[5][1000] = {
    "McLeod Ganj",
    "Panjim,Goa",
    "Andaman and Nicobar islands",
    "Kullu Manali,Shimla",
    "Jammu and Kashmir"
  };

  for (int i = 0; i < 5; i++) {
    printf("%d. %s\n", i + 1, dest[i]);
  }
  printf("GREAT!!! YOUR DESTINATION IS NO LONGER A PLACE, \nRATHER A NEW WAY OF SEEING!!!\n");

  printf("\nNow choose the destination number you would like to visit:");
  scanf("%d", & x);

  switch (x) {
  case 1: {
    printf("SO YOUR McLEOD GANJ TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label0:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label0;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.2000-3000 PER DAY\n2. 4 STAR HOTELS RS.4000-5000 PER DAY\n3. 5 STAR HOTELS RS.6000-7000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label2:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label2;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 2500/DAY)\n\n2. DE GRAND RIVERIA(RS. 2700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 2500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        mcleod.hhe = 2500;

        if (food == 1)
          mcleod.ffe = 700;
        else
        if (food == 2)
          mcleod.ffe = 1100;
        break;
      }
      case 2: {
        mcleod.hhe = 2700;
        if (food == 1)
          mcleod.ffe = 700;
        else
        if (food == 2)
          mcleod.ffe = 1100;

        break;
      }
      case 3: {
        mcleod.hhe = 2500;
        if (food == 1)
          mcleod.ffe = 700;
        else
        if (food == 2)
          mcleod.ffe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 4500/DAY)\n\n2. RAVENDER CLASSIC(RS. 4900/DAY)\n\n3.SEA SHELL SUITE(RS. 4800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        mcleod.hhe = 4500;
        if (food == 1)
          mcleod.ffe = 900;
        else
        if (food == 2)
          mcleod.ffe = 1300;
        break;
      }
      case 2: {
        mcleod.hhe = 4900;
        if (food == 1)
          mcleod.ffe = 900;
        else
        if (food == 2)
          mcleod.ffe = 1300;
        break;
      }
      case 3: {
        mcleod.hhe = 4800;
        if (food == 1)
          mcleod.ffe = 900;
        else
        if (food == 2)
          mcleod.ffe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 6200/DAY)\n\n2. CARAVELLA RESORT(RS. 6500/DAY)\n\n3. THE CROWN HOTEL(RS. 6200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        mcleod.hhe = 6200;
        if (food == 1)
          mcleod.ffe = 1200;
        else
        if (food == 2)
          mcleod.ffe = 1800;
        break;
      }
      case 2: {
        mcleod.hhe = 6500;
        if (food == 1)
          mcleod.ffe = 1200;
        else
        if (food == 2)
          mcleod.ffe = 1800;
        break;
      }
      case 3: {
        mcleod.hhe = 6200;
        if (food == 1)
          mcleod.ffe = 1200;
        else
        if (food == 2)
          mcleod.ffe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("xxxxxxxxxxxx %d,%d",mcleod.ffe,mcleod.hhe);
    printf("THE COST FOR McLEOD GANJ TOURISM WILL BE :RS 1500/day\n");
    mcleod.tte = 1500;
    
    if ((people % 2) != 0) {
      printf("THE TOTAL COSTS FOR CAIRO TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", mcleod.tte * day, mcleod.hhe * day * ceil(people / 2.0), mcleod.ffe * day);
      totalcost = (mcleod.tte + mcleod.ffe) * day * people + (mcleod.hhe * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %.2f", mcleod.ffe);
    break;

  }

  case 2: {
    printf("SO YOUR GOA TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.2000-3000 PER DAY\n2. 4 STAR HOTELS RS.4000-5000 PER DAY\n3. 5 STAR HOTELS RS.6000-7000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label1:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label1;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 2500/DAY)\n\n2. DE GRAND RIVERIA(RS. 2700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 2500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        goa.hhe = 2500;

        if (food == 1)
          goa.ffe = 700;
        else
        if (food == 2)
          goa.ffe = 1100;
        break;
      }
      case 2: {
        goa.hhe = 2700;
        if (food == 1)
          goa.ffe = 700;
        else
        if (food == 2)
          goa.ffe = 1100;

        break;
      }
      case 3: {
        goa.hhe = 2500;
        if (food == 1)
          goa.ffe = 700;
        else
        if (food == 2)
          goa.ffe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 4500/DAY)\n\n2. RAVENDER CLASSIC(RS. 4900/DAY)\n\n3.SEA SHELL SUITE(RS. 4800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        goa.hhe = 4500;
        if (food == 1)
          goa.ffe = 900;
        else
        if (food == 2)
          goa.ffe = 1300;
        break;
      }
      case 2: {
        goa.hhe = 4900;
        if (food == 1)
          goa.ffe = 900;
        else
        if (food == 2)
          goa.ffe = 1300;
        break;
      }
      case 3: {
        goa.hhe = 4800;
        if (food == 1)
          goa.ffe = 900;
        else
        if (food == 2)
          goa.ffe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 6200/DAY)\n\n2. CARAVELLA RESORT(RS. 6500/DAY)\n\n3. THE CROWN HOTEL(RS. 6200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        goa.hhe = 6200;
        if (food == 1)
          goa.ffe = 1200;
        else
        if (food == 2)
          goa.ffe = 1800;
        break;
      }
      case 2: {
        goa.hhe = 6500;
        if (food == 1)
          goa.ffe = 1200;
        else
        if (food == 2)
          goa.ffe = 1800;
        break;
      }
      case 3: {
        goa.hhe = 6200;
        if (food == 1)
          goa.ffe = 1200;
        else
        if (food == 2)
          goa.ffe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR GOA TOURISM WILL BE :RS 1500/day\n");
    goa.tte = 1500;

    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR GOA TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", goa.tte * day *people, goa.hhe * day*people * people / 2, goa.ffe * day*people);
      totalcost = (goa.tte + goa.ffe) * day * people + (goa.hhe * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR McLEOD GANJ TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", goa.tte * day*people, goa.hhe * day * ceil(people / 2.0), goa.ffe * day*people);
      totalcost = (goa.tte + goa.ffe) * day * people + (goa.hhe * ceil(people / 2) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", goa.ffe);
    break;

  }

  case 3: {
    printf("SO YOUR ANDANMAN AND NICOBAR ISLANDS TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label3:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label3;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.2000-3000 PER DAY\n2. 4 STAR HOTELS RS.4000-5000 PER DAY\n3. 5 STAR HOTELS RS.6000-7000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label4:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label4;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 2500/DAY)\n\n2. DE GRAND RIVERIA(RS. 2700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 2500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        andaman.hhe = 2500;

        if (food == 1)
          andaman.ffe = 700;
        else
        if (food == 2)
          andaman.ffe = 1100;
        break;
      }
      case 2: {
        andaman.hhe = 2700;
        if (food == 1)
          andaman.ffe = 700;
        else
        if (food == 2)
          andaman.ffe = 1100;

        break;
      }
      case 3: {
        andaman.hhe = 2500;
        if (food == 1)
          andaman.ffe = 700;
        else
        if (food == 2)
          andaman.ffe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 4500/DAY)\n\n2. RAVENDER CLASSIC(RS. 4900/DAY)\n\n3.SEA SHELL SUITE(RS. 4800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        andaman.hhe = 4500;
        if (food == 1)
          andaman.ffe = 900;
        else
        if (food == 2)
          andaman.ffe = 1300;
        break;
      }
      case 2: {
        andaman.hhe = 4900;
        if (food == 1)
          andaman.ffe = 900;
        else
        if (food == 2)
          andaman.ffe = 1300;
        break;
      }
      case 3: {
        andaman.hhe = 4800;
        if (food == 1)
          andaman.ffe = 900;
        else
        if (food == 2)
          andaman.ffe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 6200/DAY)\n\n2. CARAVELLA RESORT(RS. 6500/DAY)\n\n3. THE CROWN HOTEL(RS. 6200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        andaman.hhe = 6200;
        if (food == 1)
          andaman.ffe = 1200;
        else
        if (food == 2)
          andaman.ffe = 1800;
        break;
      }
      case 2: {
        andaman.hhe = 6500;
        if (food == 1)
          andaman.ffe = 1200;
        else
        if (food == 2)
          andaman.ffe = 1800;
        break;
      }
      case 3: {
        andaman.hhe = 6200;
        if (food == 1)
          andaman.ffe = 1200;
        else
        if (food == 2)
          andaman.ffe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR ANDANMAN AND NICOBAR ISLANDS TOURISM WILL BE :RS 1500/day\n");
    andaman.tte = 1500;
    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR ANDAMAN AND NICOBAR ISLANDS TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", andaman.tte * day*people, andaman.hhe * day * people / 2, andaman.ffe * day*people);
      totalcost = (andaman.tte + andaman.ffe) * day * people + (andaman.hhe * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR ANDAMAN AND NICOBAR ISLANDS TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", andaman.tte * day*people, andaman.hhe * day * ceil(people / 2.0), andaman.ffe * day*people);
      totalcost = (andaman.tte + andaman.ffe) * day * people + (andaman.hhe * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", andaman.ffe);
    break;

  }

  case 4: {
    printf("SO YOUR KULLU MANALI TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label41:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label41;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.2000-3000 PER DAY\n2. 4 STAR HOTELS RS.4000-5000 PER DAY\n3. 5 STAR HOTELS RS.6000-7000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label42:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label42;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 2500/DAY)\n\n2. DE GRAND RIVERIA(RS. 2700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 2500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        kullu.hhe = 2500;

        if (food == 1)
          kullu.ffe = 700;
        else
        if (food == 2)
          kullu.ffe = 1100;
        break;
      }
      case 2: {
        kullu.hhe = 2700;
        if (food == 1)
          kullu.ffe = 700;
        else
        if (food == 2)
          kullu.ffe = 1100;

        break;
      }
      case 3: {
        kullu.hhe = 2500;
        if (food == 1)
          kullu.ffe = 700;
        else
        if (food == 2)
          kullu.ffe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 4500/DAY)\n\n2. RAVENDER CLASSIC(RS. 4900/DAY)\n\n3.SEA SHELL SUITE(RS. 4800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        kullu.hhe = 4500;
        if (food == 1)
          kullu.ffe = 900;
        else
        if (food == 2)
          kullu.ffe = 1300;
        break;
      }
      case 2: {
        kullu.hhe = 4900;
        if (food == 1)
          kullu.ffe = 900;
        else
        if (food == 2)
          kullu.ffe = 1300;
        break;
      }
      case 3: {
        kullu.hhe = 4800;
        if (food == 1)
          kullu.ffe = 900;
        else
        if (food == 2)
          kullu.ffe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 6200/DAY)\n\n2. CARAVELLA RESORT(RS. 6500/DAY)\n\n3. THE CROWN HOTEL(RS. 6200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        kullu.hhe = 6200;
        if (food == 1)
          kullu.ffe = 1200;
        else
        if (food == 2)
          kullu.ffe = 1800;
        break;
      }
      case 2: {
        kullu.hhe = 6500;
        if (food == 1)
          kullu.ffe = 1200;
        else
        if (food == 2)
          kullu.ffe = 1800;
        break;
      }
      case 3: {
        kullu.hhe = 6200;
        if (food == 1)
          kullu.ffe = 1200;
        else
        if (food == 2)
          kullu.ffe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR KULLU MANALI TOURISM WILL BE :RS 1500/day\n");
    kullu.tte = 1500;
    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR KULLU MANALI TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", kullu.tte * day*people, kullu.hhe * day * people / 2, kullu.ffe *day*people);
      totalcost = (kullu.tte + kullu.ffe) * day * people + (kullu.hhe * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR McLEOD GANJ TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", kullu.tte * day*people, kullu.hhe * day * ceil(people / 2), kullu.ffe * day*people);
      totalcost = (kullu.tte + kullu.ffe) * day * people + (kullu.hhe * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", kullu.ffe);
    break;

  }
  case 5: {
    printf("SO YOUR JAMMU AND KASHMIR TOUR IS ON WITH TRAVELOPEDIA!!!\nWE WILL TRY OUR BEST TO DELIVER YOU THE BEST EXPERIENCE OUT THERE IN YOUR SUITABLE BUDGET!!!\n");
    printf("SO JUST FILL THE FORM BELOW TO BOOK YOUR TICKETS!!!\n");
    printf("NOW ENTER THE NUMBER OF DAYS OF STAY:");
    scanf("%d", & day);
    printf("PLEASE NOTE THAT THE PRICES FOR THE FOOD MIGHT VARY ACCORDING TO YOUR REQUESTS,\nALL THE PRICES WILL BE BALANCED AT THE END OF THE TOUR");
    label51:
      printf("\n1. VEGETARIAN\n2. NON VEGETARIAN");
    printf("\nENTER THE NUMBER FOR YOUR RESPECTIVE FOOD PREFERNECE:");

    scanf("%d", & food);
    if (food > 2 || food < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER EITHER 1 OR 2");
      goto label51;
    }
    printf("THE PRICES FOR DIFFERENT SORTS OF HOTEL ARE DISPLAYED BELOW\n(PRICES SHOWN HERE ACCORDING TO 2 ADULTS PER ROOM)\n1. 3 STAR HOTELS: RS.2000-3000 PER DAY\n2. 4 STAR HOTELS RS.4000-5000 PER DAY\n3. 5 STAR HOTELS RS.6000-7000 PER DAY\n");

    printf("AND PRICES SHOWN IS OF PER DAY BASIS\nFOR EG. CHECK IN TIME 2pm-CHECK OUT TIME NEXT DAY 2pm");
    label52:
      printf("\n1. 3 STAR\n2. 4 STAR\n3. 5 STAR");
    printf("\nENTER YOUR HOTEL STAY PREFERENCE ACCORIDNG TO THE RESPECTIVE NUMBER");
    scanf("%d", & hotel);
    if (hotel > 3 || hotel < 1) {
      printf("PLEASE ENTER PROPER DETAILS, ENTER 1,2 OR 3 ");
      goto label52;
    }
    switch (hotel) {
    case 1: {
      printf("3 STAR HOTELS\n1. SEA MIST RESORT(RS. 2500/DAY)\n\n2. DE GRAND RIVERIA(RS. 2700/DAY)\n\n3. SILVER SAND HOLIDAY VILLAGE(RS. 2500/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        jak.hhe = 2500;

        if (food == 1)
          jak.ffe = 700;
        else
        if (food == 2)
          jak.ffe = 1100;
        break;
      }
      case 2: {
        jak.hhe = 2700;
        if (food == 1)
          jak.ffe = 700;
        else
        if (food == 2)
          jak.ffe = 1100;

        break;
      }
      case 3: {
        jak.hhe = 2500;
        if (food == 1)
          jak.ffe = 700;
        else
        if (food == 2)
          jak.ffe = 1100;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }
    case 2: {
      printf("4 STAR HOTELS\n1. RAMONIA RESORT(RS. 4500/DAY)\n\n2. RAVENDER CLASSIC(RS. 4900/DAY)\n\n3.SEA SHELL SUITE(RS. 4800/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        jak.hhe = 4500;
        if (food == 1)
          jak.ffe = 900;
        else
        if (food == 2)
          jak.ffe = 1300;
        break;
      }
      case 2: {
        jak.hhe = 4900;
        if (food == 1)
          jak.ffe = 900;
        else
        if (food == 2)
          jak.ffe = 1300;
        break;
      }
      case 3: {
        jak.hhe = 4800;
        if (food == 1)
          jak.ffe = 900;
        else
        if (food == 2)
          jak.ffe = 1300;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    case 3: {
      printf("5 STAR HOTELS\n1. TAJ EXOTICA RESORT(RS. 6200/DAY)\n\n2. CARAVELLA RESORT(RS. 6500/DAY)\n\n3. THE CROWN HOTEL(RS. 6200/DAY)");
      printf("\nNOW, CHOOSE THE HOTEL BY ENTERING THEIR RESPECTIVE NUMBER:");
      scanf("%d", & hotelname);
      switch (hotelname) {
      case 1: {
        jak.hhe = 6200;
        if (food == 1)
          jak.ffe = 1200;
        else
        if (food == 2)
          jak.ffe = 1800;
        break;
      }
      case 2: {
        jak.hhe = 6500;
        if (food == 1)
          jak.ffe = 1200;
        else
        if (food == 2)
          jak.ffe = 1800;
        break;
      }
      case 3: {
        jak.hhe = 6200;
        if (food == 1)
          jak.ffe = 1200;
        else
        if (food == 2)
          jak.ffe = 1800;
        break;
      }
      default:
        printf("ERROR! PLEASE ENTER VALUES BETWEEN 1 AND 3");
        break;

      }
      break;
    }

    }
    printf("THE COST FOR JAMMU AND KASHMIR TOURISM WILL BE :RS 1500/day\n");
    jak.tte = 1500;
    if (people % 2 == 0) {
      printf("THE TOTAL COSTS FOR JAMMU AND KASHMIR TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%d\nAND THE COST FOR FOOD WILL BE RS.%d\n", jak.tte * day*people, jak.hhe * day * people / 2, jak.ffe *day*people);
      totalcost = (jak.tte + jak.ffe) * day * people + (jak.hhe * people / 2 * day);
    }
    if (people % 2 != 0) {
      printf("THE TOTAL COSTS FOR McLEOD GANJ TOURISM WILL BE RS.%d\nTHE TOTAL COSTS FOR HOTEL STAY WILL BE RS.%f\nAND THE COST FOR FOOD WILL BE RS.%d\n", jak.tte * day*people, jak.hhe * day * ceil(people / 2), jak.ffe *day*people);
      totalcost = (jak.tte + jak.ffe) * day * people + (jak.hhe * ceil(people / 2.0) * day);
    }
    printf("*NOTE THAT THE EXPENSES FOR FOOD MIGHT VARY ACCORDING TO YOUR ADD ONS\nAS OF NOW YOUR PER DAY FOOD EXPENSES ARE %d", jak.ffe);
    break;

  }

  }
  printf("\nTOTAL COST BEFORE DISCOUNT:%f", totalcost);
  return totalcost;
}

float discount(int type, float expense) {

  if (type == 1) {
    if (day > 8 && day <= 15) {
      printf("Tour more than 8 days = 15  percent off\n");
      printf("Total expense = %f only", (expense * 85) / 100);
      return expense * 0.85;
    } else if (day > 15 && day <= 30) {
      printf("Tour more than 30 days = 20  percent off\n");
      printf("Total expense = %f only", (expense * 80) / 100);
      return expense * 0.80;
    } else if (day > 30) {
      printf("Tour more than 30 days = 25 percent off\n");
      printf("Total expense = %f only", (expense * 75) / 100);
      return expense * 0.80;
    } else {
      printf("Total expense = %f only", expense);
      return expense;
    }
  } else if (type == 2) {
    if (day > 30) {
      printf("Tour more than 30 days = 25 percent off\n");
      printf("Total expense = %f only", (expense * 75) / 100);
      return expense * 0.75;
    } else {
      printf("Total expense =%f only", expense);
      return 0;
    }
  }
}

void main() 
{ 
  printf("\n\n\n");
  printf("\n");
  printf("  OOO0OOO  OOO0OOO        O       OO    OO   OOO0OOO   OO        000000000   OOO0OOO     OOO0OOO   OOO0OOO00   OOO0OOO       O  ");
  printf("\n");
  printf("     0     O0   0O       O O      OO    OO   OO        OO        00     00   OO   OO     OO        O0    OO0     O0O        O O ");
  printf("\n");
  printf("     0     OOO0OOO      OOOOO     OO    OO   OOO0OOO   OO        00     00   OOO0OOO     OOO0OOO   O0    OO0     O0O       OOOOO ");
  printf("\n");
  printf("     0     O0  00      O     O    OOO  OOO   OO        OO        00     00   OO          OO        OO    0O0     O0O      O     O ");
  printf("\n");
  printf("     0     O0   00    O       O     000      OOO0OOO   OOO0OOO   000000000   OO          OOO0OOO   OOO0OOO00   OOO0OOO   O       O ");
  printf("\n\n");
  printf("\n\n*************************Welcome to Travelopedia*************************\n");
  
  printf("**************************************************************************************************\n");
  printf("Welcome to one of the best tour management system that is available online at your fingers.\n");
  printf("We have a variety of curated options just for you to select from, and which will make it \n");
  printf("easier for you to manage your whole trip. We have designed this program, with love, to help\n");
  printf("you make your travel one of the best that you ever experienced and which will force you to\n");
  printf("choose our travel agency anytime again, which is Travelopedia.\n");
  printf("**************************************************************************************************\n");

  passenger();
  printf("\n****************NEW USER LOGIN****************\n");
  char u[999], p[999], u1[999], p1[999], ch, ch1;
  int l1, l2, sum1 = 0, sum2 = 0, i = 0, j = 0, intnat, count = 4;
  float expense;

  label1:
    printf("CHOOSE ANY USERNAME (MINIMUM 8 CHARACTERS):");
  scanf(" %[^\n]s",u);

  for (l1 = 0;; l1++) 
  {
    if (u[l1] == '\0')
      break;
  }
  if (l1 < 8) {
    printf("LESS THAN 8 CHARACTERS DETECTED, TRY AGAIN WITH ANY OTHER USERNAME\n");
    goto label1;
  }
  label2:
    printf("CHOOSE ANY PASSWORD (MINIMUM 8 CHARACTERS):");
  while (1 > 0) {
    ch = getch();
    if (ch == ENTER) {
      p[i] = '\0';
      break;
    } else if (ch == BKSP) {
      if (i > 0) {
        i = i - 2;
        printf("\b \b\b \b");
      }
    } else
      p[i] = ch;
    i++;
    printf("*");
  }

  for (l2 = 0;; l2++) {
    if (p[l2] == '\0')
      break;
  }
  if (l2 < 8) {
    printf("LESS THAN 8 CHARACTERS DETECTED, TRY AGAIN WITH ANY OTHER PASSWORD\n");
    goto label2;
  }
  label3:
    printf("\n\nNOW, ENTER YOUR USERNAME FOR LOGIN:");
  scanf(" %[^\n]s", u1);
  for (int i = 0; i < l1; i++) {
    if (u1[i] == u[i])
      sum1++;
  }
  printf("\nNOW, ENTER YOUR PASSWORD FOR LOGIN:");
  while (1 > 0) {
    ch1 = getch();
    if (ch1 == ENTER) {
      p1[j] = '\0';
      break;
    } else if (ch1 == BKSP) {
      if (j > 0) {
        j = j - 2;
        printf("\b \b\b \b");           //to eliminate the issue of backspace as a character in c
      }
    } else
      p1[j] = ch1;
    j++;
    printf("*");
  }
  j = 0;

  for (int i = 0; i < l2; i++) {
    if (p1[i] == p[i])
      sum2++;
  }

  if (sum1 != l1 || sum2 != l2) {
    sum1 = 0;
    sum2 = 0;
    printf("\nINCORRECT USERNAME OR PASSWORD\n");

    count--;

    if (count == 1) {
      printf("ENTER CORRECT DETAILS ONLY %d CHANCE LEFT\n", count);
      goto label3;
    }
    if (count > 1) {
      printf("ENTER CORRECT DETAILS ONLY %d CHANCES LEFT\n", count);
      goto label3;
    }

    if (count == 0) 
    {
      printf("SYSTEM TERMINATED!!! NO MORE CHANCES LEFT.");
      exit(0);
    }

  } else {
    printf("\n\nHEY THERE AGAIN! %s\n\n", u);
  }
  Passenger pssnger[people];
 

  printf("WHERE WOULD YOU LIKE TO GO??\nHIT 1 TO VISIT OUR VERY OWN INCREDIBLE INDIA\nENTER 2 FOR ANY OTHER FOREIGN COUNTRIES\n");
  printf("ENTER YOUR CHOICE:");
  scanf("%d", & intnat);
  float k;
  if (intnat == 1)
  {
    k = destinfo();
    expense = discount(intnat, k);
  } 
  else 
  {
    k = destinfoint();
    expense = discount(intnat, k);
  }

  float guide_exp=guide_info(intnat);

  printf("\n\n*********Your Ticket is as Follows*********\n");
  printf("*********Passenger Details*********\n");
  for(int r=0;i<people;i++)
  {
    printf("NAME:%s\n",pssnger[i].name);
  }
  printf("\nTotal cost : %.2f\n",k);
  printf("Discount offered : %.2f\n",expense);
  printf("Final costs : %.2f",k-expense);



  
  
}