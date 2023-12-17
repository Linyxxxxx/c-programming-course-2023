// 约瑟夫环

#include <stdio.h>
#include <stdlib.h>

struct link_node {
    int data;
    struct link_node *next;
};

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    struct link_node *head = NULL, *p = NULL;
    head = (struct link_node*)malloc(sizeof(struct link_node));
    p = head;

    // 1 ~ N-1
    for (int i = 1; i < N; i++) {
        p -> data = i;
        p -> next = (struct link_node*)malloc(sizeof(struct link_node));
        p = p -> next;
    }

    // N
    p -> data = N;
    p -> next = head;

    while (p -> next != p) {
        for (int i = 1; i < M; i++) {
            p = p -> next;
        }
        printf("%d ", p -> next -> data);
        p -> next = p -> next -> next;
    }
    printf("%d", p -> data);
}