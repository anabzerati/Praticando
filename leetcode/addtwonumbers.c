/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
    struct ListNode* reverse (struct ListNode* h)
    {
        struct ListNode *atual = h, *prev = NULL, *prox = NULL;

        while (atual)
        {
            prox = atual->next;
            atual->next = prev;
            prev = atual;
            atual = prox;
        }
        return prev;
    }

    void addList(struct ListNode**h, struct ListNode**t, int num)
    {
        struct ListNode* aux = malloc(sizeof(struct ListNode));
        aux->val = num;

        if ((*h) == NULL)
        {
            (*h) = aux;
            (*t) = (*h);
            return;
        }
        (*t)->next = aux;
        (*t) = aux;
    }

    struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
        struct ListNode* h3 = NULL;
        struct ListNode* t3 = NULL;
        
        int soma = 0, mais = 0, num = 0;
        int val1, val2;
        
        while (l1 || l2 || mais)
        {
            val1 = 0;
            if(l1){
                val1 = l1 -> val;
                l1 = l1->next;
            } 
            
            val2 = 0;
            if(l2){
                val2 = l2 -> val;
                l2 = l2->next;
            } 
            
            soma = mais + val1 + val2;
            
            num = soma % 10;
            mais = soma / 10; //se passar de 9, "sobe" um pro prox

            addList(&h3, &t3, num);
            
            //if (l1) l1 = l1 -> next;
            //if (l2) l2 = l2 -> next;
        }
        return h3;
    }

    struct ListNode* addTwoLists(struct ListNode* primeira, struct ListNode* segunda)
    {
        struct ListNode *resposta;
        primeira = reverse(primeira);
        segunda = reverse(segunda);

        resposta = addTwoNumbers(primeira, segunda);
        resposta = reverse(resposta);
        return resposta;
    }