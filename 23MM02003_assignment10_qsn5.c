#include <stdio.h>
#include <string.h>

enum PayType {
    HOURLY,
    SALARY
};

union EmpDetails {
    float wage;
    double fixedSalary;
};

struct Employee {
    int empID;
    char empName[50];
    enum PayType payType;
    union EmpDetails empDetails;
};

int main() {
    struct Employee emp1;

    printf("Enter employee ID: ");
    scanf("%d", &emp1.empID);

    printf("Enter employee name: ");
    scanf("%s", emp1.empName);

    printf("Enter pay type (0 for hourly, 1 for salary): ");
    scanf("%d", (int *)&emp1.payType); 

    
    if (emp1.payType == HOURLY) {
        printf("Enter hourly wage: ");
        scanf("%f", &emp1.empDetails.wage);
    } else {
        printf("Enter fixed salary: ");
        scanf("%lf", &emp1.empDetails.fixedSalary);
    }

    
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp1.empID);
    printf("Name: %s\n", emp1.empName);
    printf("Pay Type: %s\n", emp1.payType == HOURLY ? "Hourly" : "Salary");

    
    if (emp1.payType == HOURLY) {
        printf("Hourly Wage: $%.2f\n", emp1.empDetails.wage);
    } else {
        printf("Fixed Salary: $%.2lf\n", emp1.empDetails.fixedSalary);
    }

    return 0;
}
