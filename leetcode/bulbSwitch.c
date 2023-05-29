void toggle(int *bulbs, int *on, int n, int r){
    for(int i = 0; i < n; i = i + r){
        if(i == 0){
            continue;
        }
        if(bulbs[i] == 0){
            (*on)++;
            bulbs[i] = 1;
        } else{
            (*on)--;
            bulbs[i] = 0;
        }
    }
}

int bulbSwitch(int n){
    if(n == 0){
        return 0;
    } 
    if(n == 1){
        return n;
    }
    
    int bulbs[n];
    int on = 0;
    
    for(int i=0; i<n; i = i+2){
        bulbs[i] = 1;
        if(i+1 < n){
            bulbs[i+1] = 0;
        }
    }
    on = ceil(n/2);
    int count = 2;
    while(count < n){
        toggle(bulbs, &on, n, count);
        count++;
    }
    return on;
    
}