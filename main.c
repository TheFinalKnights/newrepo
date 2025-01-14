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
	students[0]=jerome;
	printf("%s\n%s\n%s\n%.2f\n", students[0].firstname, students[0].lastname, students[0].displayname, students[0].grade);
}
