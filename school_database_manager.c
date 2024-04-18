#include<stdio.h>
#include<string.h>
#define MAX_RECORD 1042
struct School_database
{
  int Roll_nums[50];
  int admm_nums[50];
  char std_name[MAX_RECORD][50];
  char std_class[MAX_RECORD][50];
  int num_records;




} db;

void
view_rec ()
{


  int user_inpt_2;

  int name_size = sizeof (db.std_name) / sizeof (db.std_name[0]);
  printf
	("SELECT THE NUMBER OF STUDENT YOU'D LIKE TO SEE RECORDS OF (BY NUMBER)\n\n");

  for (int i = 0; i < db.num_records; i++)
	{
	  printf ("%d. %s\n", i + 1, db.std_name[i]);
	}
  printf ("\n\nENTER A NUMBER ");
  scanf ("%d", &user_inpt_2);


  printf ("STUDENT NAME: %s\n", db.std_name[user_inpt_2 - 1]);
  printf ("STUDENT ROLL NO: %d\n", db.Roll_nums[user_inpt_2 - 1]);
  printf ("STUDENT ADDMISSION NO: %d\n", db.admm_nums[user_inpt_2 - 1]);
  printf ("STUDENT GRADE: %s\n", db.std_class[user_inpt_2 - 1]);
  welcomescreen();

}

void
add_new_rec ()
{



  printf ("ENTER STUDENT NAME: \n");
  scanf (" %[^\n]", db.std_name[db.num_records]);
  printf ("ENTER STUDENT CLASS: \n");
  scanf (" %[^\n]", db.std_class[db.num_records]);
  printf ("ENTER ROLL NUMBER: \n");
  scanf ("%d", &db.Roll_nums[db.num_records]);
  printf ("ENTER ADMISSION NUMBER: \n");
  scanf ("%d", &db.admm_nums[db.num_records]);
  db.num_records++;

  welcomescreen ();


}



void
welcomescreen ()
{

  int user_inpt_1;

  printf
	("Choose from the following options (BY NUMBER) \n\n1. TO VIEW RECORDS.\n2. TO ADD NEW RECORDS.\n3. TO EXIT.\n");
  scanf ("%d", &user_inpt_1);

  if (user_inpt_1 == 1)
	{
	  view_rec ();
	}
  if (user_inpt_1 == 2)
	{
	  add_new_rec ();

	}
  else if (user_inpt_1 == 3)
	{
	  printf ("Exiting...");
	}
}

int
main ()
{

  welcomescreen ();





}
