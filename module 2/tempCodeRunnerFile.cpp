void rn( int i, int N){ // 1 to N without any i+1 BS, aka BACKTRACKING.
    if ( i<1){
        return;
    }

    rn( i-1,  N);

    cout<<i<< endl;
}