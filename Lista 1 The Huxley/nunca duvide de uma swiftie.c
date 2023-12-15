#include <stdio.h>

int main()
{
    char a, b, c, d, e, f;
    int cont;
    scanf("%c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);
    
    if(a == 'x'){
        cont = cont + 1;
    }
    if(b == 'x'){
        cont = cont + 1;
    }
    if(c == 'x'){
        cont = cont + 1;
    }
    if(d == 'x'){
        cont = cont + 1;
    }
    if(e == 'x'){
        cont = cont + 1;
    }
    if(f == 'x'){
        cont = cont + 1;
    }

    if(cont == 2){
        int cont2 = 0; // conta o segundo fio conectado
        if(a != 'r' && b != 'r' && c != 'r' && d != 'r' && e != 'r' && f != 'r'){
            if(a != 'x'){
                cont2 = cont2 + 1;
            }
            if(b != 'x'){
                cont2 = cont2 + 1;
                if(cont2 == 2){
                    printf("corta b");
                    return 0;
                }
            }
            if(c != 'x'){
                cont2 = cont2 + 1;
                if(cont2 == 2){
                    printf("corta c");
                    return 0;
                }
            }
            if(d != 'x'){
                cont2 = cont2 + 1;
                if(cont2 == 2){
                    printf("corta d");
                    return 0;
                }
            }
            if(e != 'x'){
                cont2 = cont2 + 1;
                if(cont2 == 2){
                    printf("corta e");
                    return 0;
                }
            }
            if(f != 'x'){
                cont2 = cont2 + 1;
                if(cont2 == 2){
                    printf("corta f");
                    return 0;
                }
            }
            
        }else {
            if(f == 'b'){
                printf("corta f");
                return 0;
            }else if(e == 'b' && f == 'x'){
                printf("corta e");
                return 0;
            }else if(d == 'b' && e == 'x' && f == 'x'){
                printf("corta d");
                return 0;
            }else {
                if(a != 'x'){
                    printf("corta a");
                    return 0;
                }else if(b != 'x'){
                    printf("corta b");
                    return 0;
                }else if(c != 'x'){
                    printf("corta c");
                    return 0;
                }else if(d != 'x'){
                    printf("corta d");
                    return 0;
                }else if(e != 'x'){
                    printf("corta e");
                    return 0;
                }
            }
        }
            
    }else if(cont == 1){
        int cont3 = 0;
        int contz = 0;
       if(a == 'y'){
           cont3 = cont3 + 1;
       } else if(a != 'x'){
           contz = contz + 1;
       }
       if(b == 'y'){
            cont3 = cont3 + 1;
           if(cont3 == 2 && contz == 0){
                printf("corta a");
                return 0;
               }
           }else if(b != 'x'){
               contz = contz + 1;
           }
        if(c == 'y'){
            cont3 = cont3 + 1;
            if(cont3 == 2 && contz == 0){
                if(a == 'y'){
                printf("corta a");
                return 0; 
                }else if(b == 'y'){
                    printf("corta b");
                    return 0;
                }
            }
        }else if(c != 'x'){
            contz = contz + 1;
        }
        if(d == 'y'){
            cont3 = cont3 + 1;
            if(cont3 == 2 && contz == 0){
                if(a == 'y'){
                printf("corta a");
                return 0; 
                }else if(b == 'y'){
                    printf("corta b");
                    return 0;
                }else if(c == 'y'){
                    if(a == 'y'){
                        printf("corta a");
                        return 0;
                    }else if(b=='y'){
                        printf("corta b");
                        return 0;
                    }else if(c=='y'){
                        printf("corta c");
                        return 0;
                    }
                }
            }
        }else if(d != 'x'){
            contz = contz + 1;
        }
        if(e == 'y'){
            cont3 = cont3 + 1;
            if(cont3 == 2 && contz == 0){
                if(a == 'y'){
                printf("corta a");
                return 0; 
                }else if(b == 'y'){
                    printf("corta b");
                    return 0;
                }else if(c == 'y'){
                    if(a == 'y'){
                        printf("corta a");
                        return 0;
                    }else if(b=='y'){
                        printf("corta b");
                        return 0;
                    }else if(c=='y'){
                        printf("corta c");
                        return 0;
                    }else if(d == 'y'){
                        printf("corta d");
                        return 0;
                    }
                }
            }
        }else if(e != 'x'){
            contz = contz + 1;
        }
        int cont4 = 0;
        if(a != 'x'){
            cont4 = cont4 + 1;
        }
        if(b != 'x'){
            cont4 = cont4 + 1;
            if(cont4 == 2){
                printf("corta b");
                return 0;
            }
        }
        if(c != 'x'){
            cont4 = cont4 + 1;
            if(cont4 == 2){
                printf("corta c");
                return 0;
            }
        }
        if(d != 'x'){
            cont4 = cont4 + 1;
            if(cont4 == 2){
                printf("corta d");
                return 0;
            }
        }
        if(e != 'x'){
            cont4 = cont4 + 1;
            if(cont4 == 2){
                printf("corta e");
                return 0;
            }
       }
       if(f != 'x'){
            cont4 = cont4 + 1;
            if(cont4 == 2){
                printf("corta f");
                return 0;
            }
       }
       
    }else if(cont == 0){
        int contg = 0;
       if(a == 'g'){
           contg = contg + 1;
       }
       if(b == 'g'){
           contg = contg + 1;
       }
       if(c == 'g'){
           contg = contg + 1;
       }
       if(d == 'g'){
           contg = contg + 1;
       }
       if(e == 'g'){
           contg = contg + 1;
       }
       if(f == 'g'){
           contg = contg + 1;
       }
       if(contg == 1){
            if(a == 'g'){
                printf("corta a");
        }
            if(b == 'g'){
                printf("corta b");
       }
            if(c == 'g'){
                printf("corta c");
       }
            if(d == 'g'){
                printf("corta d");
       }
            if(e == 'g'){
                printf("corta e");
       }
            if(f == 'g'){
                printf("corta f");
       }
       }else{
            printf("corta e");
        }
        
    }
       return 0;
    }
     
