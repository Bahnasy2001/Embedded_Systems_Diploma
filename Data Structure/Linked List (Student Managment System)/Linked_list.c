/*
 * Linked_list.c
 *
 *  Created on: Sep 16, 2023
 *      Author: Hassan Bahnasy
 */

#include "Linked_list.h"

struct Sstudent* gPFirstStudent = NULL;

int Rcount =0;
void AddStudent()
{
	struct Sstudent* PNewStudent;
	struct Sstudent* PLastStudent;
	char temp_text[40];
	if(gPFirstStudent == NULL) //the first element will be added no records before
	{
		//Create New Record
		PNewStudent = (struct Sstudent*)malloc(sizeof(struct Sstudent));
		gPFirstStudent = PNewStudent;
		PNewStudent->PNextStudent = NULL;
	}
	else  // if there are records before
	{
		PLastStudent = gPFirstStudent;
		while(PLastStudent->PNextStudent)
		{
			PLastStudent = PLastStudent->PNextStudent;
		}

		//Create New Record
		PNewStudent = (struct Sstudent*)malloc(sizeof(struct Sstudent));
		PLastStudent->PNextStudent = PNewStudent;
		PNewStudent->PNextStudent = NULL;
	}

	//fill the new Record
	DPRINTF("\nEnter Student ID : ");
	gets(temp_text);
	PNewStudent->student.ID = atoi(temp_text);
	DPRINTF("\nEnter Student Name : ");
	gets(PNewStudent->student.name);
	DPRINTF("\nEnter Student height :");
	gets(temp_text);
	PNewStudent->student.height = atof(temp_text);
	PNewStudent->PNextStudent = NULL;
}


int Delete_Student()
{
	char temp_text[40];
	unsigned int Selected_ID;
	DPRINTF("\nEnter Student ID to be deleted : ");
	gets(temp_text);
	Selected_ID = atoi(temp_text);
	//if list is empty
	if(gPFirstStudent)
	{
		struct Sstudent* PSelectedStudent=gPFirstStudent;
		struct Sstudent* PPreviousStudent=NULL;
		while(PSelectedStudent) //Loop on all records
		{
			//Compare IDs
			if(PSelectedStudent->student.ID == Selected_ID)
			{
				if(PPreviousStudent) //means that it is not the first element
				{
					PPreviousStudent->PNextStudent = PSelectedStudent->PNextStudent;
				}
				else  // the target element is the first element
				{
					gPFirstStudent = PSelectedStudent->PNextStudent;
				}
				free(PSelectedStudent);
				return 1;
			}
			PPreviousStudent=PSelectedStudent;
			PSelectedStudent=PSelectedStudent->PNextStudent;
		}
	}
	DPRINTF("\ncannot find student ID"); // if the selected ID didn't matched any of list IDs
	return 0;
}

void view_Students()
{
	struct Sstudent* PCurrentStudent = gPFirstStudent;
	int count = 0;
	if(!PCurrentStudent)
	{
		DPRINTF("\n Empty List");
	}
	else
	{
		while(PCurrentStudent)
		{
			DPRINTF("\n record number %d : ",count+1);
			DPRINTF("\n\t ID : %d",PCurrentStudent->student.ID);
			DPRINTF("\n\t Name : %s",PCurrentStudent->student.name);
			DPRINTF("\n\t Height : %f",PCurrentStudent->student.height);
			PCurrentStudent = PCurrentStudent->PNextStudent;
			count++;
		}
	}
}
void Delete_All()
{
	struct Sstudent* PCurrentStudent = gPFirstStudent;
	if(!gPFirstStudent)
	{
		DPRINTF("\n Empty List");
	}
	else
	{
		struct Sstudent* PTempStudent = PCurrentStudent;
		PCurrentStudent = PCurrentStudent->PNextStudent;
		free(PTempStudent);
	}
	gPFirstStudent = NULL;
}


int GetNth()
{
	struct Sstudent* PCurrentStudent = gPFirstStudent;
	int index;
	char temp_text[40];
	int count = 0;
	DPRINTF("Enter index : ");
	gets(temp_text);
	index = atoi(temp_text);
	if(!gPFirstStudent) // List is Empty
	{
		DPRINTF("\n Empty List");
		return 0;
	}
	else
	{
		while(PCurrentStudent)
		{
			if(count == index)
			{
				DPRINTF("\n index number %d : ",index);
				DPRINTF("\n\t ID : %d",PCurrentStudent->student.ID);
				DPRINTF("\n\t Name : %s",PCurrentStudent->student.name);
				DPRINTF("\n\t Height : %f",PCurrentStudent->student.height);
				return 1;
			}
			PCurrentStudent = PCurrentStudent->PNextStudent;
			count++;
		}
		DPRINTF("\n index not exist ");
		return 0;
	}

}

int Num_of_nodes()
{
	int count = 0;
	struct Sstudent* PCurrentStudent=gPFirstStudent;
	if(!gPFirstStudent) // List is Empty
	{
		DPRINTF("\n Empty List");
		return 0;
	}
	else
	{
		while(PCurrentStudent)
		{
			PCurrentStudent = PCurrentStudent->PNextStudent;
			count++;
		}
		DPRINTF("\n Number of students : %d ",count);
		return 1;
	}
}
int GetNth_Reverse_order()// get node number N from the last using 2 pointers method
{
	struct Sstudent* Pmain = gPFirstStudent;
	struct Sstudent* Pref = gPFirstStudent;
	int index;
	char temp_text[40];
	DPRINTF("Enter index :");
	gets(temp_text);
	index = atoi(temp_text);
	int temp;
	temp = index;
	if(!gPFirstStudent) // List is Empty
	{
		DPRINTF("\n Empty List");
		return 0;
	}
	else
	{
		while(Pmain && temp) // this condition to push Pmain away from Pref by N steps
		{
			Pmain=Pmain->PNextStudent;
			temp--;
		}
		if(temp > 0) //that means the pmain reached to end of list before N steps , in other words
		{
			//number of students is smaller than the Nth element user gave so there is no
			// element with this index if we started in reverse order
			// example total number is =5 and you want the 6th element from the end of list
			DPRINTF("\n element with that index is not exist ");
			return 0;
		}
		while(Pmain)
		{
			Pmain=Pmain->PNextStudent;  // navigate to the end of list and Pref will point to Nth
			Pref=Pref->PNextStudent;    // elements before the end (Pmain)

		}
		DPRINTF("\n index number %d : ",index);
		DPRINTF("\n\t ID : %d",Pref->student.ID);
		DPRINTF("\n\t Name : %s",Pref->student.name);
		DPRINTF("\n\t Height : %f",Pref->student.height);
		return 1;
	}
}
int middle_list() // using two pointers
{
	int flag=0,count=0;
	struct Sstudent* PFast=gPFirstStudent;
	struct Sstudent* PSlow=gPFirstStudent;
	if(!gPFirstStudent) // List is Empty
	{
		DPRINTF("\n Empty List");
		return 0;
	}
	else
	{
		while(PFast) // Two Pointers pFast increment by 2 and PSlow increment by 1
		{
			PFast = PFast->PNextStudent;
			// if the length is odd number this condition will occur,
			//after the first step of PFast pointer and flag will be 1
			if(PFast == NULL)
			{
				flag=1;
				break;
			}
			PFast = PFast->PNextStudent;
			PSlow = PSlow->PNextStudent;
			count++;
		}
		if(flag == 0) // the length is even
		{
			DPRINTF("\n list is even, the second middle is :");
		}
		DPRINTF("\n index number %d : ",count);
		DPRINTF("\n\t ID : %d",PSlow->student.ID);
		DPRINTF("\n\t Name : %s",PSlow->student.name);
		DPRINTF("\n\t Height : %f",PSlow->student.height);
		return 1;
	}
}
int Reverse_list()
{
	struct Sstudent* PHead=gPFirstStudent;
	struct Sstudent* PPrev=gPFirstStudent;
	struct Sstudent* PCurr=gPFirstStudent;
	if(!gPFirstStudent) // List is Empty
	{
		DPRINTF("\n Empty List");
		return 0;
	}
	else
	{
		// List is one element
		if(gPFirstStudent ->PNextStudent == NULL)
		{
			DPRINTF("\n there is only one element in list :");
			return 1;
		}
		// List : Two elements
		else if(gPFirstStudent->PNextStudent->PNextStudent == NULL)
		{
			PCurr =gPFirstStudent->PNextStudent;
			gPFirstStudent->PNextStudent = NULL;
			gPFirstStudent = PCurr;
			gPFirstStudent ->PNextStudent = PHead;
		}
		else // more Two elements
		{
			PHead = gPFirstStudent->PNextStudent->PNextStudent;
			PCurr = gPFirstStudent->PNextStudent;
			PPrev->PNextStudent = NULL;
			while(PHead)
			{
				PCurr->PNextStudent = PPrev;
				PPrev = PCurr;
				PCurr = PHead;
				PHead = PHead->PNextStudent;
			}
			PCurr->PNextStudent = PPrev;
			gPFirstStudent = PCurr;
			return 1;
		}
	}
}

int Num_of_nodes_recursive(struct Sstudent* PCurrentStudent_recursive)
{
	if(PCurrentStudent_recursive == NULL) // Check if List is empty
	{
		if(Rcount == 0)
		{
			DPRINTF("\n list is empty ");
			return 0;
		}
		else  // end of navigation
		{
			DPRINTF("\n Number of students : %d ",Rcount);
			return 1;
		}
	}
	else
	{
		PCurrentStudent_recursive =	PCurrentStudent_recursive->PNextStudent;
		Rcount ++;
		Num_of_nodes_recursive(PCurrentStudent_recursive);
	}
}
