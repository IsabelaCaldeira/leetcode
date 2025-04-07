int numberOfSteps(int num) {
    int i;
    for(i = 0; num != 0; i++){
        if(num%2==0) num = num / 2;
        else num = num - 1;
    }
    return i;
}