#include <stdio.h>

int main(int argc, char *argv[]){
	typedef struct{
		float grade;
		char firstname[50];
		char lastname[50];
		char displayname[100];
	} student;
	student students[50];
	student jerome={100.00f,"Jerome","Black","Jerome Black"};
	student sofie={90.00f,"Sofie","White","Sofie White"};
	students[0]=jerome;
	students[1]=sofie;
	printf("%s\n%s\n%s\n%.2f\n", students[0].firstname, students[0].lastname, students[0].displayname, students[0].grade);
	printf("%s\n%s\n%s\n%.2f\n", students[1].firstname, students[1].lastname, students[1].displayname, students[1],grade);
}
