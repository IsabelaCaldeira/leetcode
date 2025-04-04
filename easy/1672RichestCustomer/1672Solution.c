int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int res = 0;
    for(int costumer = 0; costumer < accountsSize; costumer++){
        int sum = 0;
        for(int wealth = 0; wealth < *accountsColSize; wealth++) sum += accounts[costumer][wealth];
       if(sum > res) res = sum;
    }
    return res;
}