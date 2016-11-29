#include <stdio.h>


#include <stdlib.h>


#include <time.h>


#include <locale.h>





#define ALCADA 6


#define AMPLADA 7








void inicialitza(int graella[ALCADA][AMPLADA]);


void imprimeix(int graella[ALCADA][AMPLADA]);


int estaPlena(int graella[ALCADA][AMPLADA], int pos);


int introdueix(int graella[ALCADA][AMPLADA], int columna, int jugador);


int comprova(int graella[ALCADA][AMPLADA], int columna, int fila, int jugador);


int main(int argc, char *argv[])


{


	int columna,fila,plena;


	int graella[ALCADA][AMPLADA];


	char continuar; 


	





	setlocale(LC_ALL,"");


	do{
	
	
			continuar='x';
	
	
			int guanyat=0,jugador=1; 
	
	
			inicialitza(graella); 
	
	
			do
	
	
			{
			
			
						do
			
			
						{
						
						
										do
						
						
										{
										
										
															;_clrscr();
										
										
															printf("Connecta 4!\n\n");
										
										
															imprimeix(graella);
										
										
															printf(" Torn del jugador %d \n\n", jugador);
										
										
															printf(" Introdueix la columna:\n\n");
										
										
															printf(" Si vols sortir, pulsa 0.\n\n");
										
										
															columna=100;
										
										
															fflush(stdin);
										
										
															scanf("%d",&columna);
										
										
															if(columna<0 || columna>AMPLADA)
										
										
											                {
													
													
															                printf("\nLa columna introduida no és correcte.\n\n");
													
													
															                system("pause");
													
													
														                }
										
										
														}while((columna<0)||(columna>AMPLADA));
						
						
											
						
						
										plena=estaPlena(graella,columna);
						
						
										
						
						
										if(plena)
						
						
										{ 
										
										
															printf("Aquesta columna está plena!\nIntrodueix una altra columna.\n");
										
										
															system("pause");
										
										
														}
						
						
									}while(plena==1);
			
			
						fila=introdueix(graella,columna,jugador);  
			
			
						guanyat=comprova(graella,columna,fila,jugador);
			
			
						if(guanyat==1)
			
			
			            {
				    
				    
				    				do
				    
				    
				    	            {
						    
						    
						    				_clrscr();
						    
						    
						    				printf("Connecta 4!\n\n");
						    
						    
						    				imprimeix(graella);
						    
						    
						    	            printf("\nEnhorabona ! El jugador %d es el guanyador !\n", jugador);
						    
						    
						    	            printf("\nVoleu tornar a jugar? S/N: ");
						    
						    
						    					
						    
						    
						    		                 
						    
						    
						    	           	
						    
						    
						    					 fflush(stdin);
						    
						    
						    	                 scanf("%c", &continuar);
						    
						    
						    	            }while((continuar!='s') && (continuar!='S') && (continuar!='n') && (continuar!='N'));
				    
				    
				    		    }
			
			
						if(jugador==1)
			
			
							{jugador=2;}
			
			
						else
			
			
							{jugador=1;}
			
			
					}while((columna!=0) && (guanyat==0));
	
	
		
	
	
		
	
	
		  }while((continuar=='s')||(continuar=='S'));


	return 0;


}




















//LLIBRERIA:
//
//
//
//
//
//
//
//
//#include <stdio.h>
//
//
//#include <stdlib.h>
//
//
//#include <time.h>
//
//
//
//
//
//#define ALCADA 6
//
//
//#define AMPLADA 7
//
//
//
//
//
//int comprovaHoritzontal(int graella[ALCADA][AMPLADA], int fila, int jugador);
//
//
//int comprovaVertical(int graella[ALCADA][AMPLADA], int columna, int jugador);
//
//
//int comprovaDiagonal(int graella[ALCADA][AMPLADA], int columna, int fila, int jugador);
//
//
//
//
//
//void inicialitza(int graella[ALCADA][AMPLADA])
//
//
//{	
//
//
//	for(int i=0; i<ALCADA;i++)
//
//
//		{
//
//
//				for(int j=0; j<AMPLADA; j++)
//
//
//						{
//
//
//									graella[i][j]=0;
//
//
//												
//
//
//														}
//
//
//																
//
//
//																	}
//
//
//																	}
//
//
//
//
//
//																	void imprimeix(int graella[ALCADA][AMPLADA])
//
//
//																	{	int p=1;
//
//
//																		for(int i=ALCADA; i>=0; i--)
//
//
//																			{	
//
//
//																					if(i==ALCADA) 
//
//
//																							{
//
//
//																										printf("   ");
//
//
//																													for(int x=1; x<=AMPLADA; x++)
//
//
//																																{
//
//
//																																				printf("%d ", x);
//
//
//																																								
//
//
//																																											}
//
//
//																																													
//
//
//																																																printf("\n  -");
//
//
//
//
//
//																																																			for(int x=1; x<=AMPLADA;x++)
//
//
//																																																						{
//
//
//																																																										printf("--");
//
//
//																																																													}
//
//
//																																																																printf("\n");
//
//
//																																																																		}
//
//
//																																																																				else
//
//
//																																																																						{
//
//
//																																																																									printf("%d |", p);
//
//
//																																																																												p++;
//
//
//																																																																															for(int j=0; j<AMPLADA; j++)
//
//
//																																																																																		{
//
//
//																																																																																						if(graella[i][j]==0) 							
//
//
//																																																																																											printf(" |");
//
//
//																																																																																															else if(graella[i][j]==1)
//
//
//																																																																																																			{
//
//
//																																																																																																								_textcolor(4);
//
//
//																																																																																																													printf("%c",3);
//
//
//																																																																																																																		_textcolor(7);
//
//
//																																																																																																																							printf("|");
//
//
//																																																																																																																											}
//
//
//																																																																																																																															else
//
//
//																																																																																																																																			{
//
//
//																																																																																																																																								_textcolor(2);
//
//
//																																																																																																																																													printf("%c",5);
//
//
//																																																																																																																																																		_textcolor(7);
//
//
//																																																																																																																																																							printf("|");
//
//
//																																																																																																																																																											}
//
//
//																																																																																																																																																														}
//
//
//																																																																																																																																																																	printf("\n  -");
//
//
//																																																																																																																																																																				for(int x=1; x<=AMPLADA;x++)
//
//
//																																																																																																																																																																							{
//
//
//																																																																																																																																																																											printf("--");
//
//
//																																																																																																																																																																														}
//
//
//																																																																																																																																																																																	printf("\n");
//
//
//																																																																																																																																																																																			}
//
//
//																																																																																																																																																																																					
//
//
//																																																																																																																																																																																						} 
//
//
//																																																																																																																																																																																						}
//
//
//
//
//
//																																																																																																																																																																																						int estaPlena(int graella[ALCADA][AMPLADA], int pos)
//
//
//																																																																																																																																																																																						{	
//
//
//																																																																																																																																																																																							
//
//
//																																																																																																																																																																																								if(graella[ALCADA-1][pos-1]!=0)
//
//
//																																																																																																																																																																																										return 1;
//
//
//																																																																																																																																																																																											else
//
//
//																																																																																																																																																																																													return 0;
//
//
//																																																																																																																																																																																													}
//
//
//
//
//
//																																																																																																																																																																																													int introdueix(int graella[ALCADA][AMPLADA], int columna, int jugador)
//
//
//																																																																																																																																																																																													{	int i=-1, aux;
//
//
//																																																																																																																																																																																														
//
//
//																																																																																																																																																																																															do
//
//
//																																																																																																																																																																																																{	i++;
//
//
//																																																																																																																																																																																																		aux=graella[i][columna-1];
//
//
//																																																																																																																																																																																																				
//
//
//																																																																																																																																																																																																					}while(aux!=0);
//
//
//																																																																																																																																																																																																						
//
//
//																																																																																																																																																																																																								graella[i][columna-1]=jugador;
//
//
//																																																																																																																																																																																																										
//
//
//																																																																																																																																																																																																											return i;
//
//
//																																																																																																																																																																																																											}
//
//
//																																																																																																																																																																																																											int comprova(int graella[ALCADA][AMPLADA], int columna, int fila, int jugador)
//
//
//																																																																																																																																																																																																											{	int comptador1=0; 
//
//
//																																																																																																																																																																																																												int comptador2=0; 
//
//
//																																																																																																																																																																																																													int comptador3=0;
//
//
//																																																																																																																																																																																																													 
//
//
//																																																																																																																																																																																																													     comptador1=comprovaHoritzontal(graella, fila, jugador);
//
//
//																																																																																																																																																																																																													         comptador2=comprovaVertical(graella, columna, jugador);
//
//
//																																																																																																																																																																																																													             comptador3=comprovaDiagonal(graella, columna, fila, jugador);
//
//
//																																																																																																																																																																																																													              
//
//
//																																																																																																																																																																																																													                  if((comptador3==4) ||(comptador2==4) || (comptador1==4))
//
//
//																																																																																																																																																																																																													                      {
//
//
//																																																																																																																																																																																																													                           return 1;
//
//
//																																																																																																																																																																																																													                               }
//
//
//																																																																																																																																																																																																													                                	else
//
//
//																																																																																																																																																																																																													                                	    {
//
//
//																																																																																																																																																																																																													                                	        return 0;
//
//
//																																																																																																																																																																																																													                                	            }
//
//
//
//
//
//																																																																																																																																																																																																													                                	            }
//
//
//
//
//
//																																																																																																																																																																																																													                                	            int comprovaHoritzontal(int graella[ALCADA][AMPLADA], int fila, int jugador)
//
//
//																																																																																																																																																																																																													                                	            { int comptador=0, i=0;
//
//
//
//
//
//																																																																																																																																																																																																													                                	            	do{
//
//
//																																																																																																																																																																																																													                                	            			if(graella[fila][i]==jugador)
//
//
//																																																																																																																																																																																																													                                	            					{
//
//
//																																																																																																																																																																																																													                                	            								comptador++;
//
//
//																																																																																																																																																																																																													                                	            										}
//
//
//																																																																																																																																																																																																													                                	            												else
//
//
//																																																																																																																																																																																																													                                	            														{
//
//
//																																																																																																																																																																																																													                                	            																	comptador=0;
//
//
//																																																																																																																																																																																																													                                	            																			}
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																					i++;
//
//
//																																																																																																																																																																																																													                                	            																						}while((i<AMPLADA)&&(comptador<4));
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																							return comptador;
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																							}
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																							int comprovaVertical(int graella[ALCADA][AMPLADA], int columna, int jugador)
//
//
//																																																																																																																																																																																																													                                	            																							{ int comptador=0 , i=0;
//
//
//																																																																																																																																																																																																													                                	            																								
//
//
//																																																																																																																																																																																																													                                	            																									do{     
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																										if(graella[i][columna-1]==jugador)
//
//
//																																																																																																																																																																																																													                                	            																											{
//
//
//																																																																																																																																																																																																													                                	            																												comptador++;
//
//
//																																																																																																																																																																																																													                                	            																													}	
//
//
//																																																																																																																																																																																																													                                	            																														else
//
//
//																																																																																																																																																																																																													                                	            																															{
//
//
//																																																																																																																																																																																																													                                	            																																comptador=0;
//
//
//																																																																																																																																																																																																													                                	            																																	}
//
//
//																																																																																																																																																																																																													                                	            																																		i++;
//
//
//																																																																																																																																																																																																													                                	            																																			}while((i<ALCADA)&&(comptador<4));
//
//
//																																																																																																																																																																																																													                                	            																																				
//
//
//																																																																																																																																																																																																													                                	            																																					return comptador;
//
//
//																																																																																																																																																																																																													                                	            																																					}
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																					int comprovaDiagonal(int graella[ALCADA][AMPLADA], int columna, int fila, int jugador)
//
//
//																																																																																																																																																																																																													                                	            																																					{
//
//
//																																																																																																																																																																																																													                                	            																																						int comptador=0, x=columna-1, y=fila;
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																							do{
//
//
//																																																																																																																																																																																																													                                	            																																									comptador++;
//
//
//																																																																																																																																																																																																													                                	            																																											x++;
//
//
//																																																																																																																																																																																																													                                	            																																													y++;
//
//
//																																																																																																																																																																																																													                                	            																																														}while((graella[y][x]==jugador) && (x<AMPLADA) && (y<ALCADA) && (comptador<4));
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																															if (comptador<4)
//
//
//																																																																																																																																																																																																													                                	            																																																{ 
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																																			comptador=comptador-1;
//
//
//
//
//
//
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																																						x=columna-1;
//
//
//																																																																																																																																																																																																													                                	            																																																									y=fila;
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																																												do{
//
//
//																																																																																																																																																																																																													                                	            																																																																comptador++;
//
//
//																																																																																																																																																																																																													                                	            																																																																				y--;
//
//
//																																																																																																																																																																																																													                                	            																																																																								x--;
//
//
//																																																																																																																																																																																																													                                	            																																																																											}while((graella[y][x]==jugador) && (x>=0) && (y>=0) && (comptador<4));
//
//
//																																																																																																																																																																																																													                                	            																																																																													
//
//
//																																																																																																																																																																																																													                                	            																																																																														}
//
//
//																																																																																																																																																																																																													                                	            																																																																															if(comptador<4)
//
//
//																																																																																																																																																																																																													                                	            																																																																																{
//
//
//																																																																																																																																																																																																													                                	            																																																																																		comptador=0;
//
//
//																																																																																																																																																																																																													                                	            																																																																																				x=columna-1;
//
//
//																																																																																																																																																																																																													                                	            																																																																																						y=fila;
//
//
//																																																																																																																																																																																																													                                	            																																																																																								do{
//
//
//																																																																																																																																																																																																													                                	            																																																																																											comptador++;
//
//
//																																																																																																																																																																																																													                                	            																																																																																														x++;
//
//
//																																																																																																																																																																																																													                                	            																																																																																																	y--;
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																																																																																			}while((graella[y][x]==jugador) && (x<AMPLADA) && (y>=0) && (comptador<4));
//
//
//																																																																																																																																																																																																													                                	            																																																																																																				
//
//
//																																																																																																																																																																																																													                                	            																																																																																																					}if (comptador<4)
//
//
//																																																																																																																																																																																																													                                	            																																																																																																						{	
//
//
//
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																																																																																									comptador=comptador-1;
//
//
//
//
//
//
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																																																																																												x=columna-1;
//
//
//																																																																																																																																																																																																													                                	            																																																																																																															y=fila;
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																																																																																																		do{
//
//
//																																																																																																																																																																																																													                                	            																																																																																																																					comptador++;
//
//
//																																																																																																																																																																																																													                                	            																																																																																																																								x--;
//
//
//																																																																																																																																																																																																													                                	            																																																																																																																											y++;
//
//
//																																																																																																																																																																																																													                                	            																																																																																																																														}while((graella[y][x]==jugador)&& (x>=0) && (y<ALCADA) && (comptador<4));
//
//
//
//
//
//																																																																																																																																																																																																													                                	            																																																																																																																																
//
//
//																																																																																																																																																																																																													                                	            																																																																																																																																	} return comptador;
//
//
//																																																																																																																																																																																																													                                	            																																																																																																																																	}
//
