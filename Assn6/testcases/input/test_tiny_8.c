int doSomething(int a, int b, int c){
    return (a >> 2) + (b << 2) + (c - 1);
}

int tryCallingMe(int ss){
    int check = doSomething(ss+1, ss-2, ss / 2);

    {
        int cc = 2 + ss;

        do {
            int moreValues = doSomething(cc, cc+1, ss + check);
            check += moreValues;
        } while(cc-- > 0);
    }
    return check;
}

int main(){

    int dp[12][13];

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 13; j++) {
            dp[i][j] = tryCallingMe(i + j);
            if(i)
                dp[i][j] += dp[i-1][j];
            if(j)
                dp[i][j] += dp[i][j-1]; 
        }
    }

    return 0;
}