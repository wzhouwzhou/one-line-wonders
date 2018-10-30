/** Librerias
 * stdio.h Usada para la captura de datos asi como para la exportación de los mismos.
 * graphics.h Usada para el uso de gráficos.
 * stdlib.h Usada para el uso de los apuntadores ya que en esta se inlcuye la funcion malloc.
*/

#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>


/** Estructura MALLA
 * int coor[8]; Arreglo de coordenadas x,y para cada cuadro de la malla a usarse en la funcion fillpoly.
 * int color; Variable para el color del cuadro.
 */

typedef struct{
    int coor[8];
    int color;
}MALLA;

/** Constantes
 * tam; Usada para el aumento en las coordenadas de cada cuadro de la paleta de colores(No se requiere en la malla).
 * TAM; Usada para el aumento en las coordenadasd de cada cuadro del menú(No se requiere en la malla).
*/
#define tam 40
#define TAM 80

/** Variables Globales
 * int x,y; Coordenadas usadas para las distintas funciones y las diferentes graficaciones.
 * int cl; Utilizada para guardar cada color seleccionado de manera que pueda ser utilizado
 * en cualquier momento al colorear la malla.
 * char nombre[25]; Arreglo usado para almacenar el nombre del archivo a guardar.
 * MALLA **M=NULL; Declaracion e iniciacion del arreglo bidimensional, usado de esta manera
 * para un uso mas sencillo del mismo, debido al constante cambio de las variables de la
 * estructura.
 * FILE *arch; Utilizada para la creacion y guardado de las diferentes creaciones.
*/

int x=640,y=100;
int cl=0,n=0,m=0,ib=0;
char nombre[25];
MALLA **M=NULL;
FILE *arch;

/** Prototipos de Funciones
 * void paleta(int **c); Usada para crear la paleta de colores, uso de puntero por referencia para aprender
 * el uso de estos al ser llamados por referencia.
 * void menu(int **d); Usada para crear el menu: nuevo,abrir,guardar,guardar como, uso de puntero por referencia para aprender
 * el uso de estos al ser llamados ppor referencia.
 * void mouse(); Funcion mas importante ya que esta enlaza a las demas funciones y permite hacer
 * uso del mouse en el modo grafico.
 * void dibujamall; Usada para dibujar la malla se activa solo si hay valores en n y m.
 * void captura(); Usada para saber en que cuadro se hizo click y mandar llamar a la funcion colorear.
 * void colorear(); Usada para identificar las coordenadas del cuadro en que se dio click y rellenarlo.
 * void previa(); Usada para graficar la vista previa.
 * void abrir(); Usada para abrir un archivo, se requiere el nombre del mismo.
 * void guardar(); Usada para guardar el archivo, pide el nombre a poner al archivo.
 * void Guarcom(); Usada para guardar archivo en binario o texto, siempre pregunta nombre a poner al archivo y tipo de archivo.
 * void cambiacol(); Usada para cambiar un color en especifico por otro (colores basicos 0-15)
*/

void paleta(int **c);
void menu(int **d);
void mouse();
void dibujamall();
void captura();
void colorear();
void previa();
void abrir();
void guardar();
void Guarcom();
void cambiacol();

/** Funcion Principal
 * Incluye la declaracion de los punteros de la paleta y el menu asi como la activacion del
 * modo gráfico y la llamada a las demas funciones.
*/

int main(){ /**Inicio de la funcion principal.**/
    int *c=NULL,*d=NULL; /**Declaracion de los punteros para la paleta de colores y del menu.**/
    initwindow(800,640,"Editor"); /**Inicializacion de  modo gráfico.**/
    paleta(&c); /**Llamada a la funcion para graficar la paleta de colores.**/
    menu(&d); /**Llamada a la funcion para graficar el menu.**/
    mouse(); /**Llamada a la funcion mouse para el uso del mouse.**/
    system("pause"); /**Pausa al sistema para visualizar el editor.**/
} /**Fin de la funcion principal.**/


void paleta(int **c){ /**Inicio de la funcion para graficar la paleta de colores.**/
    int i,ic;  /**Declaracion de los contadores para coordenadas y colores de la paleta.**/
    *c=(int*)malloc(sizeof(int)*8);  /**Declaracion de arreglo dinamico.**/
    if(*c){  /**Comprobacion del arreglo dinamico.**/
        for(ic=0;ic<16;ic++){  /**Ciclo para graficar cada cuadro de la paleta de colores.**/
            for(i=0;i<8;i++){  /**Ciclo para generar las coordenadas.**/
                if((i%2)!=0){  /**Sentencia para mandar la coordenada en y.**/
                    if(i==5){  /**Sentencia para aumento de coordenada en y.**/
                        y+=tam; /**Aumento en y.**/
                    } /**Fin de sentencia para el aumento de la coordenada en y.**/
                    *(*c+i)=y; /**Declaracion de la posicion c+i(1,3,5,7) como coordenada y.**/
                } /**Fin de sentencia para mandar la coordenada en y.**/
                else{ /**Sentencia para coordenadas en x.**/
                    if(i==2){ /**Sentencia para aumento de coordenada en x.**/
                        x+=tam; /**Aumento en x.**/
                    } /**Fin de sentencia para el aumento de la coordenada en x.**/
                    if(i==6){ /**Sentencia para la disminucion de la coordenada en x.**/
                        x-=tam; /**Disminucion en x.**/
                    } /**Fin de sentencia para la disminucion de la coordenda en x.**/
                    *(*c+i)=x; /**Declaracion de la posicion c+i(0,2,4,6) como coordenada en x.**/
                } /**Fin de sentencia para mandar la coordenada en x.**/
                } /**Fin de ciclo para la generacion de coordenadas**/
                setfillstyle(SOLID_FILL,ic);
                fillpoly(4,*c); /**Graficado de un cuadro de la paleta**/
                if(ic<7){ /**Sentencia para volver a inicializar x, para la primera columna de colores**/
                    x=640; /**Declaracion de la coordenada en x de la primera columna columna de colores**/
                } /**Fin de sentencia para inicializacion de x**/
                else{ /**Sentencia para inicializar coordenadas para su uso en la segunda columna de colores**/
                    x=680; /**Declaracion de la coordenada en x de la segunda columnda de colores**/
                    if(ic==7){ /**Sentencia para la inicializacio de y, para la segunda columna de colores**/
                        y=100; /**Declaracion de la coordenada en y de la segunda columna de colores**/
                    } /**Fin de sentencia para inicializacion de y**/
            } /**Fin de sentencia para la inicializacion de coordenadas de la segunda columna de colores**/
        } /**Fin de ciclo para la graficacion de cada cuadro de la paleta de colores**/
    } /**Fin de la sentencia para la comprobacion del arreglo**/
} /**Fin de funcion para graficar la paleta de colores**/

void menu(int **d){ /**Inicio de la funcion para graficar el menu**/
    int ic,i; /**Declaracion de los contadores**/
    int x1,x2,y1,y2; /**Declaracion de coordenadas para los limites de la malla y el cuadro de color actual**/
    x1=580; /**Declaracion delvalor en x del cuadro de color actual**/
    y1=y2=100; /**Declaracion del valor en y del cuadro de color actual y de los limites de la malla**/
    x2=50; /**Declaracion en x del limite de la malla**/
    outtextxy(580,70,"Color"); /**Texto para indicar el color actual**/
    outtextxy(580,85,"Actual"); /**Texto para indicar el color actual**/
    rectangle(x1,y1,x1+tam,y1+tam); /**Cuadro del color actual**/
    outtextxy(655,80,"Colores"); /**Texto de la paleta de colores**/
    rectangle(x2,y2,x2+400,y2+400); /**Limites de la malla**/
    outtextxy(500,280,"Vista Previa");/**Texto de vista previa **/
    rectangle(500,300,600,400);/**Coordenadas del cuadro de vista previa**/
    *d=(int*)malloc(sizeof(int)*8); /**Declaracion del puntero como arreglo**/
    if(*d){ /**Sentencia para la comprobacion del arreglo**/
        x=50; /**Iniciacion de las coordenadas en x para los cuadros del menu**/
        y=20; /**Iniciacion de las coordenadas en y para los cuadros del menu**/
        for(ic=0;ic<6;ic++){ /**Ciclo para dibujar cada cuadro del menu**/
            for(i=0;i<8;i++){ /**Ciclo para dar coordenadas de cada cuadro del menu**/
                if((i%2)!=0){ /**Sentencia para mandar la coordenada en y**/
                    if(i==5){ /**Sentencia para aumento de la coordenada en y**/
                        y+=tam; /**Aumento de la coordenada en y**/
                    } /**Fin de la sentencia del aumento de la coordenada en y**/
                    *(*d+i)=y; /**Declaracion de la posicion d+i(1,3,5,7) como coordenada en y**/
                } /**Fin de la sentencia para mandar la coordenada en y**/
                else{ /**Sentencia para mandar la coordenada en x**/
                    if(i==2){ /**Sentencia para el aumento de la coordenada en x**/
                        x+=TAM; /**Aumento de la coordenada en x**/
                    } /**Fin de la sentencia para el aumento de la coordenada en x**/
                    if(i==6){ /**Sentencia para la dismunucion de la coordenada en x**/
                        x-=TAM; /**Disminucion de la coordenada en x**/
                    } /**Fin de la sentencia para disminución la coordenada en x**/
                    *(*d+i)=x; /**Declaracion de la posicion d+i(0,2,4,6) como coordenada en x**/
                } /**Fin de la sentencia para mandar la coordenada en x**/
            } /**Fin de ciclo para mandar las coordenadas de cada cuadro del menu**/
                setfillstyle(SOLID_FILL,BLACK); /**Declaracion para el relleno de cada cuadro**/
                fillpoly(4,*d); /**Graficado de un cuadro del menu**/
                y=20; /**Iniciacializacion de coordenada en y para el siguiente cuadro del menu**/
                if(ic>=0){ /**Sentencia para el espacio entre cada cuadro del menu**/
                    x+=100; /**Aumento del espacio entre cada cuadro del menu**/
                } /**Fin de sentencia para el espacio entre cada cuadro del menu**/
                if(ic==0){ /**Sentencia para la graficacion de la opcion NUEVO**/
                    outtextxy(x-85,y+15,"NUEVO"); /**Graficacion de la opcion NUEVO**/
                } /**Fin de la sentecia para la graficacion de la opcion NUEVO**/
                if(ic==1){ /**Sentencia para la graficacion de la opcion ABRIR**/
                    outtextxy(x-85,y+15,"ABRIR"); /**Graficacion de la opcion ABRIR**/
                } /**Fin de la sentencia para la graficacion de la opcion ABRIR**/
                if(ic==2){ /**Sentencia para la graficacion de la opcion GUARDAR**/
                    outtextxy(x-90,y+15,"GUARDAR"); /**Graficacion de la opcion GUARDAR**/
                } /**Fin de la sentencia para la graficacion de la opcion GUARDAR**/
                if(ic==3){ /**Sentencia para la graficacion de la opcion GUARDAR COMO**/
                    outtextxy(x-90,y+3,"GUARDAR"); /**Graficacion de la opcion GUARDAR COMO**/
                    outtextxy(x-85,y+22,"COMO"); /**Graficacion de la opcion GUARDAR COMO**/
                } /**Fin de la sentencia para la graficacion de la opcion GUARDAR COMO**/
                if(ic==4){ /**Sentencia para la opcion de CERRAR para el cierre del editor**/
                    outtextxy(x-90,y+15,"CERRAR"); /**Graficiacion de la opcion CERRAR**/
                } /**Fin de la sentencia para la opcion de CERRAR**/
                if(ic==5){ /**Sentencia para la graficacion de la opcion CAMBIA COLOR**/
                    outtextxy(x-90,y+3,"CAMBIA"); /**Graficacion de CAMBIA**/
                    outtextxy(x-85,y+22,"COLOR"); /**Graficacion de COLOR**/
                } /**Fin de sentencia de graficacion de opcion CAMBIA COLOR**/
        } /**Fin de ciclo para graficar cada cuadro del menu**/
    } /**Fin de sentencia para la comprobacion del arreglo**/
} /**Fin de la funcion para graficar el menu**/

void mouse(){ /**Inicio de la funcion para el uso del mouse dentro del modo grafico**/
    int ix,iy,i; /**Declaracion para las variables de coordenadas del mouse y de fin del ciclo**/
    int cor[]={580,100,620,100,620,140,580,140}; /**Arreglo de coordenadas para graficar el color del cuadro de color actual**/
    int cm[]={50,100,450,100,450,500,50,500}; /**Arreglo de coordenadas para volver a inicializar la malla**/
    do{ /**Inicio de ciclo para el uso del mouse**/
        ix=mousex(); /**Captura de las coordenadas en x del mouse**/
        iy=mousey(); /**Captura de las coordenadas en y del mouse**/
        /**Sentencias para seleccionar los diferentes colores de la paleta**/
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>640 && ix<680 && iy>100 && iy<140)){/**Color negro**/
            /**Esto se aplica en todas las sentencias para la seleccion del color**/
            cl=0; /**Color de relleno seleccionado**/
            setfillstyle(SOLID_FILL,cl); /**Seleccion del tipo de relleno y el color**/
            fillpoly(4,cor); /**Graficacion del relleno del cuadro de color actual**/
            clearmouseclick(WM_LBUTTONDBLCLK); /**Limpieza del click del mouse**/
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>640 && ix<680 && iy>140 && iy<180)){/**Color azul marino**/
            cl=1;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>640 && ix<680 && iy>180 && iy<220)){/**Color verde**/
            cl=2;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>640 && ix<680 && iy>220 && iy<260)){/**Color cyan**/
            cl=3;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>640 && ix<680 && iy>260 && iy<300)){/**Color rojo**/
            cl=4;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>640 && ix<680 && iy>300 && iy<340)){/**Color magenta**/
            cl=5;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>640 && ix<680 && iy>340 && iy<380)){/**Color marron**/
            cl=6;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>640 && ix<680 && iy>380 && iy<420)){/**Color gris claro**/
            cl=7;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>680 && ix<720 && iy>100 && iy<140)){/**Color gris oscuro**/
            cl=8;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>680 && ix<720 && iy>140 && iy<180)){/**Color azul claro**/
            cl=9;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>680 && ix<720 && iy>180 && iy<220)){/**Color verde claro**/
            cl=10;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>680 && ix<720 && iy>220 && iy<260)){/**Color cyan claro**/
            cl=11;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>680 && ix<720 && iy>260 && iy<300)){/**Color rojo claro**/
            cl=12;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>680 && ix<720 && iy>300 && iy<340)){/**color magenta claro**/
            cl=13;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>680 && ix<720 && iy>340 && iy<380)){/**Color amarillo**/
            cl=14;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>680 && ix<720 && iy>380 && iy<420)){/**Color blanco**/
            cl=15;
            setfillstyle(SOLID_FILL,cl);
            fillpoly(4,cor);
            clearmouseclick(WM_LBUTTONDBLCLK);
        }
        /**Fin de las sentencias para seleccionar los diferentes colores de las paletas**/
        /**Sentencias para la realizacion de las acciones de cada opcion del menu**/
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>50 && ix<130 && iy>20 && iy<60)){/**Coordenadas de la opcion nuevo**/
            if(M){/**Comprobacion en caso de estar trabajando en un icono**/
                for(i=0;i<n;i++)/**Ciclo para liberar memoria de arreglos de punteros**/
                        free(*M+i);/**Liberacion de memoria de arreglos de punteros**/
                free(M);/**Liberacion de memoria de arreglos**/
                n=m=0;/**Inicializacion de n y m para nuevo ingreso de tamaño en la funcio dibuja mall**/
                M=NULL;/**Inicializacion de arreglo como NULL para poder ser usado**/
            }/**Fin de la comprobacion del puntero de arreglos**/
            setfillstyle(SOLID_FILL,BLACK);/**Seleccion de color de fondo de la malla**/
            fillpoly(4,cm);/**Graficado de malla vacia**/
            clearmouseclick(WM_LBUTTONDBLCLK);/**Limpieza de click del mouse**/
            dibujamall();/**LLamada a funcion para dibujar la malla**/
        }/**Fin de opcion nuevo**/
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>150 && ix<230 && iy>20 && iy<60)){/**Coordenadas de la opcion abrir**/
            printf("Dame nombre de archivo");/**Texto para pedir nombre del archivo a abrir**/
            fflush(stdin); /**LLamada para establecer entrada estandar**/
            gets(nombre);/**Captura de nombre de archivo**/
            fflush(stdin);/**LLamada para indicar fin de entrada estandar**/
            abrir();/**Llamada a funcion abrir para el paso de datos a la estructura MALLA**/
            dibujamall();/**Llamada a funcion para dibujar malla**/
            clearmouseclick(WM_LBUTTONDBLCLK);/**Limpieza de click del mouse**/
        }/**Fin de opcion abrir**/
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>250 && ix<330 && iy>20 && iy<60)){/**Coordenadas de la opcion guardar(binario)**/
            if(n>0 && m>0){/**Comprobacion de que la malla  no esta vacia**/
                printf("Dame nombre de archivo");/**Texto para pedir el nombre con el que se guardara el archivo**/
                fflush(stdin);/**LLamada para establecer entrada estandar**/
                gets(nombre);/**Captura de nombre de archivo**/
                fflush(stdin);/**LLamada para indicar fin de entrada estandar**/
                guardar();/**Llamada a funcion de guardado**/
            }/**Fin de comprobacion**/
            else{/**Comprobacion de malla vacia**/
                printf("Error: Tamaño de la malla aun no ha sido ingresado");/**Mensaje de error que indica que no hay malla**/
            }/**Fin de comprobacion**/
            clearmouseclick(WM_LBUTTONDBLCLK);/**Limpieza de click del mouse**/
        }/**Fin de opcion guardar**/
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>350 && ix<430 && iy>20 && iy<60)){/**Coordenadas de la opcion guardar como(binario,cambio de nombre)**/
            Guarcom();/**Llamado a la funcion para guardar el archivo con otro nombre**/
            clearmouseclick(WM_LBUTTONDBLCLK);/**Linpieza de click del mouse**/
        }
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>550 && ix<630 && iy>20 && iy<60)){/**Coordenadas de la opcion cambiar color**/
            cambiacol();/**Llamado a funcion cambiacol**/
            clearmouseclick(WM_LBUTTONDBLCLK);/**Linpieza de click del mouse**/
        } /**Fin de opcion cambiacolor**/
        if(ismouseclick(WM_LBUTTONDBLCLK) && (ix>450 && ix<530 && iy>20 && iy<60)){/**Coordenadas de la opcion salir**/
            ib=1;/**Cambio del valor en la bandera para salir del ciclo*/
        }
            captura();/**Llamada a funcion para capturar las coordenadas donde hizo click el mouse en la malla**/
        /**Fin de las sentencias para la realizacion de cada accion de la opcion del menu**/
    }while(ib!=1); /**Fin del ciclo del uso de la malla y del modo grafico**/
    closegraph(); /**Cierre del modo grafico**/
} /**Fin de la funcion para el uso del mouse**/

void dibujamall(){/**Funcion para dibujar la malla**/
    int i,j,k,ax,ay,an,am;/**(i,j)contadores para coordenadas,(ax,ay)aumentos en X y Y,(an,am)auxiliares para obtener el tamaño de los cuadros**/
    if(n==0 && m==0){/**Comprobacion de valores de n y m por si se abrio algun archivo**/
        printf("Dame N");/**Texto para pedir tamaño en n**/
        scanf("%d",&n);/**Captura del tamaño en n**/
        printf("Dame M");/**Texto para pedir el tamaño en m**/
        scanf("%d",&m);/**Captura del tamaño en m**/
        M=(MALLA**)malloc(sizeof(MALLA*)*n);/**Declaracion de M como arreglo**/
        if(M){/**Comprobacion de que existe M**/
            for(i=0;i<n;i++){/**Ciclo para declarar M com un arreglo de punteros**/
                *(M+i)=(MALLA*)malloc(sizeof(MALLA)*m);/**Declaracion de cada posicion del arreglo como un arreglo de apuntadores**/
            }/**Fin de ciclo**/
            for(i=0;i<n;i++){/**Ciclo para recorrer M en n**/
                for(j=0;j<m;j++){/**Ciclo para recorrer M en m**/
                    (*(M+i)+j)->color=0;/**Declaracion de color de los cuadros de la malla igual al de la malla**/
                }/**Fin de ciclo en m**/
            }/**Fin de ciclo en n**/
        }/**Fin de comprobacion**/
    }/**Fin de comprobacion de no existir archivo abierto**/
    an=n;/**Declaracion de auxiliar como n**/
    am=m;/**Declaracion de auxiliar como m**/
    while((400%n)!=0){/**Comprobacion y ciclo para saber si el tamaño vertical de la malla es divisible entre n**/
            an+=1;/**Aumento hasta llegar a un tamaño divisible**/
        }//Fin de ciclo de comprobacion y aumento//
    while((400%m)!=0){ //Comprobacion y ciclo para saber si el tamaño horizonal de la malla es divisible entre m//
            am+=1; //Aumento hasta llegar a un tamaño divisible//
        } //Fin de ciclo de comprobacion y aumento//
    ax=400/am; //Obtencion del tamaño de cada cuadro en horizontal//
    ay=400/an; //Obtencio del tamaño de cada cuadro en vertical//
    x=50; //Posicion en x de primer cuadro//
    y=100; //Posicion en y de primer cuadro//
    if(M){ //Comprobacion de existencia de arreglo//
        for(i=0;i<n;i++){ //Recorrido de posiciones verticales//
            y=100; //Inicializacion de posicion y//
            for(j=0;j<m;j++){ //Recorrido de posiciones horizontales//
                if((*(M+i)+j)->color==0){
                (*(M+i)+j)->color=0;
                }
                for(k=0;k<8;k++){
                    if((k%2)!=0){
                        if(k==5){
                            y+=ay;
                        }
                        (*(M+i)+j)->coor[k]=y;
                    }
                    else{
                        if(k==2){
                            x+=ax;
                        }
                        if(k==6){
                            x-=ax;
                        }
                        (*(M+i)+j)->coor[k]=x;
                    }
                }
                setfillstyle(SOLID_FILL,(*(M+i)+j)->color);
                fillpoly(4,(*(M+i)+j)->coor);
            }
            x+=ax;
        }
    }
    previa();
    ib=2;
}

void captura(){
    int i,j,ix,iy,ax,ay,ax2,ay2;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            ix=mousex();
            iy=mousey();
            ax=(*(M+i)+j)->coor[0];
            ay=(*(M+i)+j)->coor[1];
            ax2=(*(M+i)+j)->coor[2];
            ay2=(*(M+i)+j)->coor[5];
            if(ismouseclick(WM_LBUTTONDBLCLK) && ix>ax && ix<ax2 && iy>ay && iy<ay2){
                (*(M+i)+j)->color=cl;
                clearmouseclick(WM_LBUTTONDBLCLK);
                colorear();
            }
        }
    }
}

void colorear(){
    int i,j,c;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c=(*(M+i)+j)->color;
            setfillstyle(SOLID_FILL,c);
            fillpoly(4,(*(M+i)+j)->coor);
        }
    }
    previa();
}

void previa(){
    int i,j;
    x=501;
    y=301;
    if(M){
        for(i=0;i<n;i++){
            y=301;
            for(j=0;j<m;j++){
                putpixel(x,y,(*(M+i)+j)->color);
                y+=1;
            }
            x+=1;
        }
    }
}

void guardar(){
    int i,j,c;
    if(M){
        arch=fopen(nombre,"wb");
        fprintf(arch,"%d\n",n);
        fprintf(arch,"%d\n",m);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                c=(*(M+i)+j)->color;
                fprintf(arch,"%d\n",c);
            }
        }
    }
    fclose(arch);
    printf("Archivo Guardado con Exito");
}

void abrir(){
    int i,j;
    arch=fopen(nombre,"rb");
    if(!arch){
        printf("Archivo no encontrado");
        mouse();
    }
    if(arch){
    if(M){
        if(n!=0 && m!=0){
            for(i=0;i<n;i++){
                    free(*M+i);
            }
        }
        free(M);
    }
    fscanf(arch,"%d\n",&n);
    fscanf(arch,"%d\n",&m);
    M=(MALLA**)malloc(sizeof(MALLA*)*n);
    if(M){
        for(i=0;i<n;i++){
            *(M+i)=(MALLA*)malloc(sizeof(MALLA)*m);
        }
    }
    if(M){
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            fscanf(arch,"%d\n",&cl);
            (*(M+i)+j)->color=cl;
        }
    }
    }
    }
    fclose(arch);
    ib=2;
}

void Guarcom(){
    int i,j,c,op;
    if(M){
        printf("Dame nombre de archivo\n");
        fflush(stdin);
        gets(nombre);
        fflush(stdin);
        printf("Tipo de archivo\n1.- Binario\n2.- Texto");
        scanf("%d",&op);
        switch(op){
        case 1:
            arch=fopen(nombre,"wb");
            fprintf(arch,"%d\n",n);
            fprintf(arch,"%d\n",m);
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    c=(*(M+i)+j)->color;
                    fprintf(arch,"%d\n",c);
                }
            }
            break;
            case 2:
                arch=fopen(nombre,"w");
                fprintf(arch,"%d\n",n);
                fprintf(arch,"%d\n",m);
                for(i=0;i<n;i++){
                    for(j=0;j<n;j++){
                        c=(*(M+i)+j)->color;
                        fprintf(arch,"%d\n",c);
                    }
                }
            break;
            default:
                printf("Opcion no valida");
        }

    }
    fclose(arch);
    printf("Archivo Guardado con Exito");
}

void cambiacol(){ //Inicio de funcion para cambiar color
    int i,j,ca,cc; //Variables de contadores y colores
    printf("Dime color a cambiar <0-15>"); //Impresion de texto para pedir el numero del color a cambiar
    scanf("%d",&ca); //Obtencion de numero de color
    while(ca>15 || ca<0){ //Ciclo en caso de no haberse capturado un numero valido
        printf("Dime color a cambiar <0-15>"); //Impresion de texto para pedir el numero del color a cambiar
        scanf("%d",&ca); //Obtencion de numero de color
    } //Fin de ciclo
    printf("A que color <0-15>");  //Impresion de texto para pedir el numero del color al cual se quiere cambiar
    scanf("%d",&cc); //Obtencion de numero de color
    while(cc>15 || cc<0){ //Ciclo en caso de no haberse capturado un numero valido
        printf("Dime color a cambiar <0-15>"); //Impresion de texto para pedir el numero del color a cambiar
        scanf("%d",&ca); //Obtencion de numero de color
    } //Fin de ciclo
    if(M){ //Comprobacion de existencia de M
    for(i=0;i<n;i++){ //Recorrido en y
        for(j=0;j<m;j++){  //Recorrido en x
            if((*(M+i)+j)->color==ca) //Comprobacion para saber si es el color que se quiere cambiar
            (*(M+i)+j)->color=cc; //Cambio de color
        } //Fin de recorrido en x
    } //Fin de recorrido en y
    } //Fin de comprobacion
    dibujamall(); //Llamado a funcion dibujamall con el cambio de color
} //Fin de funcion cambiacol
