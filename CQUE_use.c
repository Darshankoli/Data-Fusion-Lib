#include<stdio.h>
#include"CQUE.h"

int main() {
    
    CQUE q;
	init(&q);
    int opt, n, i;
    char ch;
    
    while (1) {
        
        printf("\n\nEnter the option:\n");
        printf("1. Push to character queue\n");
        printf("2. Pop from character queue\n");
        printf("3. Display character queue\n");
        printf("4. Check if character queue is empty\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &opt);
        
        if (opt > 4)
            break;
            
        switch (opt) {
        	case 1:
        		printf("\nEnter the character to push: ");
                scanf(" %c", &ch);  // Note the space before %c to handle buffer issues
                enqueue(&q, ch);
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

