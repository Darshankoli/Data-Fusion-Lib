#include<stdio.h>
#include"ISTK.h"

int main() {
    
    ISTK q;
	init(&q);
    int opt, n, i;
    int num;
    
    while (1) {
        
        printf("\n\nEnter the option:\n");
        printf("1. Push to integer stack\n");
        printf("2. Pop from integer stack\n");
        printf("3. Display integer stack\n");
        printf("4. Check if integer stack is empty\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &opt);
        
        if (opt > 4)
            break;
            
        switch (opt) {
        	case 1:
        		printf("\nEnter the integer value to push: ");
                scanf(" %d", &num);  // Note the space before %c to handle buffer issues
                push(&q, num);
                break;
            case 2:
            	pop(&q);
            	break;
            case 3:
            	display(&q);
            	break;
            case 4: 
                i = isEmpty(&q);
                if(i == -1)
                	printf("\nStack is Empty");
                else
                	printf("\nStack is not Empty");
                break;
            
        }
    }
    return 0;
}

