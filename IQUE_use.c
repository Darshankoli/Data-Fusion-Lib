#include<stdio.h>
#include"IQUE.h"

int main() {
    
    IQUE q;
	init(&q);
    int opt, n, i;
    int num;
    
    while (1) {
        
        printf("\n\nEnter the option:\n");
        printf("1. Push to integer queue\n");
        printf("2. Pop from integer queue\n");
        printf("3. Display integer queue\n");
        printf("4. Check if integer queue is empty\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &opt);
        
        if (opt > 4)
            break;
            
        switch (opt) {
        	case 1:
        		printf("\nEnter the integer to push: ");
                scanf(" %c", &num);  // Note the space before %c to handle buffer issues
                enqueue(&q, num);
                break;
            case 2:
            	dequeue(&q);
            	break;
            case 3:
            	display(&q);
            	break;
            case 4: 
                i = isEmpty(&q);
                if(i == -1)
                	printf("\nqueue is Empty");
                else
                	printf("\nqueue is not Empty");
                break;
            
        }
    }
    return 0;
}

