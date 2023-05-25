// dla 3d array
    int ***tab3d;
    tab3d = malloc(2*sizeof(double **));
    for (int i = 0; i < 2; i++)
    {
        tab3d[i] = malloc(2*sizeof(double *));
        for (size_t j = 0; j < 2; j++)
        {
            tab3d[i][j] = calloc(2,sizeof(double));
        }
        
    }