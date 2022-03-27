#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0c; i < 5; ++i) {
      
        printf("\nFor roll number%d,\n", );
        
        printf("Enter  name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i)
	 {
        
		printf("\nRoll number: %d\n", i + 1);
		
        printf("name: %s " , s[i].firstName);
        
        printf("Marks: %.1f", s[i].marks);
        
        printf("\n");
    }
    return 0;
}
