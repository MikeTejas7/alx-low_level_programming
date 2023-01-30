# **0x13. C - More singly linked lists**
---
## By: Julien Barbier
---
## **_Resources_**
https://www.google.com/#q=linked+lists
https://www.youtube.com/results?search_query=linked+lists
---
```C /**

 * struct listint_s - singly linked list

 * @n: integer

 * @next: points to the next node

 *

 * Description: singly linked list node structure

 * 

 */

typedef struct listint_s

{

    int n;

    struct listint_s *next;

} listint_t; ```
