#pragma once

#define CRC_POLY (0xA001)

enum ComandsLora {
_Parametros     = 0xD6, // Leitura e escrita dos parametros de radio
_LeituraLocal   = 0xE2, // Leitura dos parametros do modulo (apenas pela serial local)
_LeituraRemota  = 0xD4, // Realizado apenas atraves do mestre da rede
_ConfigRadio    = 0xCA, // Escrita dos parametros de um radio (ID e Mascara bin  ́aria)
_GPIO           = 0xC2, // Comando de configuracao, leitura e escrita de CMD_GPIO
_Diagnostico    = 0xE7, // Adquire informacoes de operacao de um radio (local ou remoto)
_Ruido          = 0xD8, // Leitura do nivel de ruido observado por um radio (local ou remoto)
_RSSI           = 0xD5, // Retorna os niveis de potencia de sinal observados (ida e volta) no enlace entre dois radios
_Rota           = 0xD2, // Retorna a rota utilizada para se comunicarcom um determinado r  ́adio
_TestePeriodico = 0x01, // Teste Periodico enviado dos escravos para o mestre. Configuravel pelo comando 0xCA
_TempoPeriodico = 0xCC, // Configura ou le o tempo periodico no radiomestre
_ModoOperacao   = 0xC1 // Configura ou le a classe do dispositivo e o comando da interface transparente 
};