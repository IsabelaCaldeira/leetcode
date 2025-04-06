/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **res;
    res = malloc(sizeof(*res) * n);
    
    char str[5];

    for(int i = 1; i <= n; i++){
        if(i % 15 == 0) res[i - 1] = strdup("FizzBuzz");  
        else if(i % 3 == 0) res[i - 1] = strdup("Fizz"); 
        else if(i % 5 == 0) res[i - 1] = strdup("Buzz");
        else{
            sprintf(str, "%d", i);
            res[i - 1] = strdup(str);
        } 
    }

    *returnSize = n;
    return res;

}