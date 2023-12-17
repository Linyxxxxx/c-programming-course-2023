#include <stdio.h>
#include <stdlib.h>

//写一个结构体变量（包括年月日），输入N（1≤N≤1000）个年/月/日信息，用链表保证其有序，再输入一个k，输出排序后的第k个日期，即给定输入的时间最早的第k天。
//第一行输入一个整数N，表示给定的天数。接下来N行，每行给出形如YYYY/MM/DD的格式，代表YYYY年MM月DD日。（例如：1991/06/21，0123/02/01）最后一行一个整数K(1≤K≤N)，如题所述。

struct Date {
    int year;
    int month;
    int day;
};

struct link_node {
    struct Date date;
    struct link_node *next;
};

int main() {
    int n;
    scanf("%d", &n);
    struct link_node *head = (struct link_node *)malloc(sizeof(struct link_node)), *p;

    head->next = NULL;
    for (int i = 0; i < n; i++) {
        p = (struct link_node *)malloc(sizeof(struct link_node));
        scanf("%d/%d/%d", &p->date.year, &p->date.month, &p->date.day);
        struct link_node *q = head;
        while (q->next != NULL && (
                q->next->date.year < p->date.year || 
                (q->next->date.year == p->date.year && q->next->date.month < p->date.month) || 
                (q->next->date.year == p->date.year && q->next->date.month == p->date.month && q->next->date.day < p->date.day)
            )
        ) {
            q = q->next;
        }
        // insert
        p->next = q->next;
        q->next = p;
    }

    int k;
    scanf("%d", &k);
    struct link_node *q = head->next;
    for (int i = 0; i < k - 1; i++) {
        q = q->next;
    }
    printf("%d/%02d/%02d", q->date.year, q->date.month, q->date.day);
    return 0;
}