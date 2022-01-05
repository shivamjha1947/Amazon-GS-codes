long long squaresInChessBoard(long long N) {
    if(N==1)
        return 1;
    else
        return (N*N)+squaresInChessBoard(N-1);
}
