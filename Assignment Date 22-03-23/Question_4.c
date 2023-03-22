void main()
{
int const * p=5;
printf("%d",++(*p));
}


/*
    variable p is a constant,
    so line 4's " ++(*p)" will create an error for trying to modify
    a const value
*/