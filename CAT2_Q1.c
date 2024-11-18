
#include <stdio.h>


struct Employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    
    struct Employee emp = {
        "John Doe",           
        12345,                
        "Human Resources",    
        55000.50,             
        "johnd.doe@company.com"  
    };

    
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
