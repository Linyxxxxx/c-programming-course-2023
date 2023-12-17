#include <stdio.h>
#include <stdlib.h>

struct link_node {
    int data;
    struct link_node *next;
};

int main() {
    int x;
    struct link_node *head = NULL, *p = NULL, *temp;

    // read data
    do {
        scanf("%d", &x);
        if(x != 0) {
            temp = (struct link_node*)malloc(sizeof(struct link_node));
            temp -> data = x;
            temp -> next = NULL;
            if (head == NULL) {
                head = temp;
                p = temp;
            } else {
                p -> next = temp;
                p = temp;
            }
        }
    } while (x != 0);

    // print data
    p = head;
    int is_empty = 1, cur_data;
    while (p != NULL) {
        cur_data = p -> data;
        if (cur_data % 2 == 0) {
            printf("%d ", cur_data);
            is_empty = 0;
        }
        p = p -> next;
    }
    if (is_empty == 1) {
        printf("Empty");
    }

    return 0;
}