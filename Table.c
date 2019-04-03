/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Table.h"

char* HtmlFile_alocateMemory(const HtmlFile *self);
void HtmlFile_readFileContent(const HtmlFile *self);
void HtmlFile_openFile( HtmlFile *self, const char *fileName);

 HtmlFile* HtmlFile_new(const char *fileName){
     
     HtmlFile *self = (HtmlFile*)malloc(sizeof(HtmlFile));printf("alocou espaço\n");
     HtmlFile_openFile(self, fileName);printf("Abriu arquivo com %ld Bytes\n", self->HTMLFileSize);
     self->HTMLContent = HtmlFile_alocateMemory(self);printf("alocou memoria\n");
     HtmlFile_readFileContent(self);printf("leu conteudo\n");
     
     return self;
 }
 
 long HtmlFile_getFileSize(const HtmlFile *self){
     long fileSize = 0;
     fseek (self->filePointer , 0L , SEEK_END);
     fileSize = ftell (self->filePointer);
     fseek(self->filePointer, 0L, SEEK_SET);
     
     return fileSize;
 }
 
char* HtmlFile_alocateMemory(const HtmlFile *self){
     char *memorySpace = (char*)malloc((size_t)self->HTMLFileSize);
     if (memorySpace == NULL) {fputs ("Memory error",stderr); exit (2);}
     return memorySpace;
}
void HtmlFile_readFileContent(const HtmlFile *self){
     size_t result = fread (self->HTMLContent,sizeof(char),self->HTMLFileSize,self->filePointer);
     if (result != self->HTMLFileSize) {fputs ("Reading error",stderr); exit (3);}
}

void HtmlFile_openFile( HtmlFile *self, const char *fileName){
     self->filePointer = fopen ( fileName , "rb" );
     if (self->filePointer==NULL) {fputs ("File error",stderr); exit (1);}
     self->HTMLFileSize = HtmlFile_getFileSize(self);
}
 
 void _HtmlFile_destroy(HtmlFile *self){
     fclose (self->filePointer);
     free(self->HTMLContent);
     self->HTMLFileSize = 0;
     free(self);
 }