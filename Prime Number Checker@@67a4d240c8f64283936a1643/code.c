int isPrime(int num) {
    for (int i=2; i<num; i++) {
        if (num%i==0)
        return 0;
    }
    if (num==1 || num==0)
        return 0;

    return 1;
}3