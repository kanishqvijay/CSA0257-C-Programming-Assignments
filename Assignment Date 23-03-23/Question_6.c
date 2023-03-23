main() {

    int a = 10;      

    if ((fork ( ) == 0))      

    a++;      

    printf ("%dn", a ); 

}

/*
This progam output:
10
*/