int isValid(vector<vector<int>> mat){
    vector<bitset<10>> rowc(9), colc(9), bloc(9);
    for(int r = 0; r < 9; ++r) {
        for(int c = 0; c < 9; ++c) {
            int num = mat[r][c];
            if(num && ( rowc[r].test(num) || colc[c].test(num) || bloc[3*(r/3) + c/3].test(num))){
              return 0;
            }  
            rowc[r].set(num);
            colc[c].set(num);
            bloc[3*(r/3) + c/3].set(num);
        }
    }
    return 1;
}
