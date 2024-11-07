#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void display(int choice) {
 switch (choice) {
 case 0: printf("Snake\n"); break;
 case 1: printf("Water\n"); break;
 case 2: printf("Gun\n"); break;
 default: printf("Invalid choice\n");
 }
}
int main() {
 int user, computer;
 srand(time(0)); // Seed the random number generator
 // User input for their choice
 printf("Enter your choice (0: Snake, 1: Water, 2: Gun): ");
 scanf("%d", &user);
 // Validate user input
 if (user < 0 || user > 2) {
 printf("Invalid choice! Please try again.\n");
 return 1; // Exit the program if input is invalid

 }
 // Computer makes a random choice
 computer = rand() % 3;
 printf("Computer chose: ");
 display(computer);
 // Determine the winner
 if (user == computer) {
 printf("It tie!\n");
 } else if ((user == 0 && computer == 1) || // Snake drinks water
 (user == 1 && computer == 2) || // Water douses gun
 (user == 2 && computer == 0)) { // Gun kills snake
 printf("You win Congratulations!\n");
 } else {
 printf("Computer wins!\n");
 }
 return 0;
}