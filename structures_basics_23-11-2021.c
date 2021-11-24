#include <stdio.h>
#include <string.h>


// create struct employee and do in c
// for employee id, name, salary

struct Employee{
    int id;
    char name[100];
    float salary;
}e;

struct Employee addInfo();
void dispInfo();

int main(){
    e = addInfo();
    dispInfo(e); 
}

struct Employee addInfo() {
    struct Employee f;
    printf("\nEnter employee details: ");
    printf("\nID");
    scanf("\n%d",&f.id);
    printf("\nName");
    scanf("\n%s",f.name);
    printf("\nSalary");
    scanf("\n%f",&f.salary);
    return f;    
}

void dispInfo(struct Employee g) {
    printf("\n\nDetails: ");
    printf("\nID %d",g.id);
    printf("\nName %s",g.name);
    printf("\nSalary %0.2f",g.salary);
}

