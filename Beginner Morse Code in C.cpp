#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int menu, tamanho_frase;
	char frase_digitada[500], frase_digitada_morse[500];
	
	printf(" ---- Morse Code Translator ----\n\n\n");
	
	printf("1 - Codificar   ");
	printf("2 - Descodificar\n\n\n");
	
	menu = getch();
	
	switch(menu){
		case '1':
	
			printf("Digite uma frase: ");
			gets(frase_digitada);
	
			system("cls");
	
			printf(" --- Código Morse - Codificação --- \n\n\n");	
			Sleep(1000);
			
			//printf("Frase inserida: %s", frase_digitada);
			printf("\n");			
			Sleep(1000);
	
			for (int x=0; x<strlen(frase_digitada); x++){
				if(frase_digitada[x] == 'A' || frase_digitada[x] == 'a'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");
					Sleep(1000);
				} 
					
				else if(frase_digitada[x] == 'B' || frase_digitada[x] == 'b'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(". ");	
					Sleep(1000);
				} 
			
				else if(frase_digitada[x] == 'C' || frase_digitada[x] == 'c'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(". ");	
					Sleep(1000);
				} 
			
				else if(frase_digitada[x] == 'D' || frase_digitada[x] == 'd'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");
					Sleep(1000);
				} 
			
				else if(frase_digitada[x] == 'E' || frase_digitada[x] == 'e'){
					Beep(850,150);
					printf(". ");
					Sleep(1000);
				} 
			
				else if(frase_digitada[x] == 'F' || frase_digitada[x] == 'f'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(". ");
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'G' || frase_digitada[x] == 'g'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(". ");
					Sleep(1000);
				} 
				
				else if(frase_digitada[x] == 'H' || frase_digitada[x] == 'h'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'I' || frase_digitada[x] == 'i'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'J' || frase_digitada[x] == 'j'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("- ");
					Sleep(1000);
				}  
			
				else if(frase_digitada[x] == 'K' || frase_digitada[x] == 'k'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				} 
			 
				else if(frase_digitada[x] == 'L' || frase_digitada[x] == 'l'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(". ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'M' || frase_digitada[x] == 'm'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("- ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'N' || frase_digitada[x] == 'n'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(". ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'O' || frase_digitada[x] == 'o'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("- ");		
					Sleep(1000);
				} 
			
				else if(frase_digitada[x] == 'P' || frase_digitada[x] == 'p'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(". ");	
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'Q' || frase_digitada[x] == 'q'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("- ");	
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'R' || frase_digitada[x] == 'r'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(". ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'S' || frase_digitada[x] == 's'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'T' || frase_digitada[x] == 't'){
					Beep(850,850);
					printf("- ");	
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'U' || frase_digitada[x] == 'u'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("- ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'V' || frase_digitada[x] == 'v'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'W' || frase_digitada[x] == 'w'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("- ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'X' || frase_digitada[x] == 'x'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'Y' || frase_digitada[x] == 'y'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("- ");		
					Sleep(1000);
				}
			
				else if(frase_digitada[x] == 'Z' || frase_digitada[x] == 'z'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");		
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '1'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '2'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '3'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '4'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '5'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '6'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '7'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '8'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '9'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '0'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}
				
					else if(frase_digitada[x] == ','){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '.'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '?'){
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == ';'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == ':'){
					Beep(850,850);
					printf("-");
					Beep(850,850);
					printf("-");	
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '/'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '+'){
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("-");	
					Beep(850,150);
					printf(".");	
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(". ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '-'){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}
				
				else if(frase_digitada[x] == '='){
					Beep(850,850);
					printf("-");
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");	
					Beep(850,150);
					printf(".");
					Beep(850,850);
					printf("- ");			
					Sleep(1000);
				}                                                                                         
			                       
			 
			}  
			break;  
			
		case '2':
			
			printf("OBS: Por favor, insira o espaço ANTES e APÓS a inserção da letra!\n\n");
			
			Sleep(3000);
			
			printf("Digite uma frase codificada em Morse:\n\n");	
			gets(frase_digitada_morse);
		
			system("cls");			
			
			printf(" --- Código Morse - Descodificação --- \n\n\n");	
			Sleep(1000);
			
			printf("Código inserido: %s", frase_digitada_morse);
			printf("\n\n\n");			
			Sleep(1000);
		
			for (int x=0; x<strlen(frase_digitada_morse); x++){
				if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == ' ' ){
					printf("Você digitou a letra A\n");
				} 	
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == '.' && frase_digitada_morse[x+4] == ' ' ){
					printf("Você digitou a letra B\n");
				} 
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == '.' && frase_digitada_morse[x+4] == ' ' ){
					printf("Você digitou a letra C\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == ' ' ){
					printf("Você digitou a letra D\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == ' '){
					printf("Você digitou a letra E\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == '.' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra F\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == ' '){
					printf("Você digitou a letra G\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == '.' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra H\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == ' '){
					printf("Você digitou a letra I\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == '-' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra J\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == ' '){
					printf("Você digitou a letra K\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == '.' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra L\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == ' '){
					printf("Você digitou a letra M\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == ' '){
					printf("Você digitou a letra N\n");
				} 
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == ' '){
					printf("Você digitou a letra O\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == '.' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra P\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == '-' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra Q\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == ' '){
					printf("Você digitou a letra R\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == ' '){
					printf("Você digitou a letra S\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == ' '){
					printf("Você digitou a letra T\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == ' '){
					printf("Você digitou a letra U\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == '-' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra V\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '.' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == ' '){
					printf("Você digitou a letra W\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == '-' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra X\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '.' && frase_digitada_morse[x+2] == '-' && frase_digitada_morse[x+3] == '-' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra Y\n");
				}
				
				else if(frase_digitada_morse[x-1] == ' ' && frase_digitada_morse[x] == '-' && frase_digitada_morse[x+1] == '-' && frase_digitada_morse[x+2] == '.' && frase_digitada_morse[x+3] == '.' && frase_digitada_morse[x+4] == ' '){
					printf("Você digitou a letra Z\n");
				}                         	  	 	 				
				
			}  
			break;  
		}
	
		printf("\n\n\n\n\n");		
	
	system("pause");
	return 0;
}


