class GFG {
    static void rotate(int matrix[][]) {
            for(int i=0;i<matrix.length;i++)
                for(int j=0;j<matrix.length;j++)
                {
                    if(i>=j)
                    continue;
                    int a=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=a;
                }
            for(int i=0;i<matrix.length;i++)
                for(int j=0;j<matrix.length/2;j++)
                {
                    
                    int x=matrix[i][j];
                    matrix[i][j]=matrix[i][matrix.length-j-1];
                    matrix[i][matrix.length-j-1]=x;
                }
        return;
    } 
}
