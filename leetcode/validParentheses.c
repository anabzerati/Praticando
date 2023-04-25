#define max 10000

char pilha[max];
int topo;

void define(){
    topo = -1;
}

void push(char a){
    topo++;
    pilha[topo] = a;
}

char pop(){
    char c = pilha[topo];
    topo--;
    return c;
}

bool vazia(){
    return (topo == -1);
}

bool isValid(char * s){
    define();
    char c;
    for(int i = 0; s[i] != '\0'; ++i){
        switch(s[i]){
            case ')': 
                if(vazia()){
                    return false;
                }
                c = pop();
                if(c != '('){
                    return false;
                }
                break;
            case ']':
                if(vazia()){
                    return false;
                }
                c = pop();
                if(c != '['){
                    return false;
                }
                break;
            case '}': 
                if(vazia()){
                    return false;
                }
                c = pop();
                if(c != '{'){
                    return false;
                }
                break;
            default: push(s[i]); break;
        }
    }
    return vazia();
}