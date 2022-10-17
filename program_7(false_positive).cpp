void f(){
    int* a[1] = {0};
    for(int i = 0;i<1;i++){
        int j;
        for(j = i;j<0;j++){
            if(a[j+1] == 0){
                break;
            }
        }
        (void)a[j];
    }
}