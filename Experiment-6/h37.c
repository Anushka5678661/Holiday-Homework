#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

struct PresentAddressStruct {
    char name[MAX_SIZE];
    char home_address[MAX_SIZE];
    char hostel_address[MAX_SIZE];
    char city[MAX_SIZE];
    char state[MAX_SIZE];
    char zip[MAX_SIZE];
};

int main() {
    struct PresentAddressStruct employee;
    int choice;

    printf("--- Employee Address Input ---\n");

    
    printf("Enter Name: ");
    
    scanf(" %s", employee.name); 

    printf("Enter Home Address Line: ");
    scanf(" %s", employee.home_address);

    printf("Enter Hostel Address Line: ");
    scanf(" %s", employee.hostel_address);

    printf("Enter City: ");
    scanf(" %s", employee.city);

    printf("Enter State: ");
    scanf(" %s", employee.state);
    
    printf("Enter Zip Code: ");
    
    scanf(" %s", employee.zip); 

    printf("\nWhere are you currently staying?\n");
    printf("1. Home Address\n");
    printf("2. Hostel Address\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    printf("\n--- Present Address for %s ---\n", employee.name);
    
    char *current_address;
    char *location_type;

    if (choice == 1) {
        current_address = employee.home_address;
        location_type = "Home Address";
    } else if (choice == 2) {
        current_address = employee.hostel_address;
        location_type = "Hostel Address";
    } else {
        
        current_address = "N/A (Invalid Choice)";
        location_type = "Unknown";
    }

    printf("Name:          %s\n", employee.name);
    printf("Location Type: %s\n", location_type);
    printf("Address Line:  %s\n", current_address);
    printf("City:          %s\n", employee.city);
    printf("State:         %s\n", employee.state);
    printf("Zip:           %s\n", employee.zip);

    return 0;
}
