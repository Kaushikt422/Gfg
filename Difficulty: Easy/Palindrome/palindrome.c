bool isPalindrome(int n) {
    long long rev = 0;
    int temp = n;
    while(temp>0){
        
        int digit = temp%10;
        rev = rev*10+digit;
        temp=temp/10;
        
    }
    return (rev==n);
    
}