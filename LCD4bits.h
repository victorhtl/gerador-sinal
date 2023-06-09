/*
ManipulaÃ§Ã£o display LCD controlador HITACHI
Modo 4 bits
*/

#ifndef _LCD4BITS_H_
#define _LCD4BITS_H_

#include <xc.h>
#define _XTAL_FREQ 8000000

// Altere as conexÃµes de acordo com sua placa
#define DATA_TRIS TRISD
#define DATA_PORT PORTD
#define RS PORTCbits.RC4   
#define CLOCK PORTCbits.RC5 

// Altere as conexÃµes de acordo com sua placa
#define D4 PORTDbits.RD0
#define D5 PORTDbits.RD1
#define D6 PORTDbits.RD2
#define D7 PORTDbits.RD3

//@param: tipo = 1 -> caractere
//        tipo = 0 -> comando
//        com -> byte a ser enviado
void lcdComando(unsigned char tipo, unsigned char com);

// InicializaÃ§Ã£o obrigatÃ³ria do display modo 4 bits
void lcdInit(void);

// Envia uma string ao display
void lcdString(char *str);

// Limpa o dislay e retorna o cursor em DDRAM = 0
void lcdClean(void);

// Posiciona o cursor
// @param: linha -> linha do display
//         coluna -> coluna do display
void lcdSetCursor(char linha, char coluna);

// Seta o cursor e envia uma string ao display LCD
void lcdStringCursor(char linha, char coluna, char *str);

#endif