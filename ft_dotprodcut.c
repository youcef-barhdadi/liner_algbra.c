# include "liner.h"

int ft_dotprodcut(t_vector v, t_vector v2)
{
    return ((v.x * v2.x) + (v.y + v2.y) + (v.z + v.z));
}
void scal_vector(t_vector *vector, int scaler)
{
    vector->x *= scaler;
    vector->y *= scaler;
    vector->z *= scaler; 
}


t_vector *Matrix_Vector(t_vector *matrix, t_vector vec)
{
    t_vector *newvec;

    newvec = malloc(sizeof(newvec));
    
    for (int i = 0;i<3;i++)
    {
        newvec->x += vec.x * matrix[i].x;
        newvec->y += vec.y * matrix[i].y;
        newvec->z += vec.z * matrix[i].z;
    }
    return (newvec);
}
int main(int argc, char **argv)
{
    t_vector v;

    v.x = 5;
    v.y = 5;
    v.z = 5;

    scal_vector(&v, 5);
    printvector(&v);
    return (0);
}