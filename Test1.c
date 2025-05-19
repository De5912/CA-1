#include <stdio.h>

int main() {
    int choice;

    printf("Select your B.Tech branch:\n");
    printf("1. B.Tech CSE\n");
    printf("2. B.Tech AIML\n");
    printf("3. B.Tech ECE\n");
    printf("4. B.Tech Mechanical\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected B.Tech CSE\n");
            break;
        case 2:
            printf("You selected B.Tech AIML\n");
            break;
        case 3:
            printf("You selected B.Tech ECE\n");
            break;
        case 4:
            printf("You selected B.Tech Mechanical\n");
            break;
        case 5:
            printf("Exiting program.\n");
	    printf("......");
	    printf("Done");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
    }

    return 0;
}

