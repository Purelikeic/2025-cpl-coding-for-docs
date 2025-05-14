 #include <stdio.h>
 #include <math.h>
 
 int main(){
    int n;
    scanf("%d", &n);
    

    int first = pow(10, n - 1); //100
    int end = 10 * first - 1;   //999

    for(int i = first; i <= end; i++){
        int t = i;
        int sum = 0;
        //jusdge whether n is a narcissus number
        do{
            int d = t%10;
            int p = pow(d, n);
            t = t / 10;
            sum +=p;
        }while(t > 0);
        if(sum == i)
        printf("%d ", i);
    }
    return 0;
 }