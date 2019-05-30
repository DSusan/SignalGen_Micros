int convertir_entero(long long entero,char* convertir)
{
    register long long  registroNum = entero;
    char  convTemp[21]; 
    register char *p;
    register int numero=0;
    register char i=0;

    //se llena el registro como si fuera una pila (el ultimo es el primero) y
    //se añade al final el caracter nulo
    p = &convTemp[21 - 1]; 
    *p = 0; 

    if (registroNum < 0)
    {
        registroNum*=-1;
    }

    //ciclo para convertir valores en caracteres
    do {
        p--;
        numero=registroNum % 10; 
        *p = numero  + '0'; 
    }  while (registroNum /= 10);

    //agrega el signo negativo si el numero entero es negativo
    if (entero < 0)
    {
        p--;
        *p = '-';
    }

    //se restan los caracteres utilizados

    registroNum=convTemp+21-p;

    // se guardan en el arreglo convertir
    for (i = 0; i< registroNum; i++)
    {
        ((unsigned char *)convertir)[i] = ((const unsigned char *)p)[i];
    }

    return registroNum - 1;
}
