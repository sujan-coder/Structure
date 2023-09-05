#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    char role[50];
    int id;
    long int sal;
};
int main()
{
    struct student s;
    printf("Enter the details:\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter role: ");
    scanf("%s", s.role);
    printf("Enter id: ");
    scanf("%d", &s.id);
     printf("Enter salary: ");
    scanf("%ld", &s.sal);
printf("----------------------\n");
    printf("Name: %s\n",s.name);
    printf("Role: %s\n",s.role);
    printf("ID: %d\n",s.id);
    printf("Salary: %ld",s.sal);
    return 0;
}
