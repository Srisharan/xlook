/* special.c */
void line(int *colx, int *coly, int *first, int *last, float result[]);
void stats(int *col, int *first, int *last);
void median_smooth(int col, int new_col, int start, int end, int window);
void smooth(int col, int new_col, int start, int end, int window);
void o_slope(int col1, int col2, int new_col, int start, int end, int window);
void greg_slope(int *xcol, int *ycol, int *newcol, int *interv);
