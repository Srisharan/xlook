/* array.c */
void zero(int *col, int *rec);
void offset_int(int *rec, int *col, int *rec2, char *ts);
void offset(int *rec, int *col, int *rec2, int *col2);
void summation(int *old, int *new);
void expvec(int *old, int *new);
void lnvec(int *old, int *new);
void sinvec(int *old, int *new);
void cosvec(int *old, int *new);
void tanvec(int *old, int *new);
void asinvec(int *old, int *new);
void acosvec(int *old, int *new);
void atanvec(int *old, int *new);
void logvec(int *old, int *new);
void recipvec(int *old, int *new);
void powcvec(int *old, int *new, int *power_col);
void powvec(int *old, int *new, float *power);
void elastic_corr(int ad_c, int tau_c, int new_col, int first, int last, double E_on_L);
void shear_strain(int disp_col, int thick_col, int strain_col, int first, int last);
void calc_geom_thin(int disp_col, int new_col, double L, double h_h);
void geom_thin(int disp_col, int gouge_thick_col, int new_col, double L);
void vol_corr(int vs_c, int tau_c, int new_col, int first, int last, double SV_on_V);
void deriv(int *xcol, int *ycol, int *new_col, int first, int last);
void add(int *a, int *b, float *f, int *c, char *to, int first, int last);
void sub(int *a, int *b, float *f, int *c, char *to, int first, int last);
void prod(int *a, int *b, float *f, int *c, char *to, int first, int last);
void mydiv(int *a, int *b, float *f, int *c, char *to, int first, int last);
